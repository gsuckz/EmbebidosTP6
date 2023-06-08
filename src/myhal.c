#include "myhal.h"
#include <chip.h>
#include <stddef.h>

typedef struct pinGPIO {
    uint8_t numRegistroGPIO;
    uint8_t bitRegistroGPIO;
    uint8_t funcion;
} pinGPIO;

static pinGPIO const tablaConfigPinGpio[MUX_NUM_PUERTOS][MUX_NUM_PINES] = {
    [0] =
        {
            [0] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 0, .funcion = 0},
            [1] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 1, .funcion = 0},
        },

    [1] = {[0] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 4, .funcion = 0},
           [1] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 8, .funcion = 0},
           [2] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 9, .funcion = 0},
           [3] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 10, .funcion = 0},
           [4] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 11, .funcion = 0},
           [5] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 8, .funcion = 0},
           [6] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 9, .funcion = 0},
           [7] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 0, .funcion = 0},
           [8] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 1, .funcion = 0},
           [9] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 2, .funcion = 0},
           [10] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 3, .funcion = 0},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 4, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 4, .funcion = 0},
           [15] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 2, .funcion = 0},
           [17] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 3, .funcion = 0}},
    [2] = {[0] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 0, .funcion = 4},
           [1] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 1, .funcion = 4},
           [2] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 2, .funcion = 4},
           [3] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 3, .funcion = 4},
           [4] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 4, .funcion = 4},
           [5] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 5, .funcion = 4},
           [6] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 6, .funcion = 4},
           [7] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 7, .funcion = 0},
           [8] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 7, .funcion = 4},
           [9] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 10, .funcion = 0},
           [10] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 14, .funcion = 0},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 11, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 12, .funcion = 0}},

    [3] = {[0] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 0, .funcion = 4},
           [1] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 8, .funcion = 4},
           [2] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 2, .funcion = 4},
           [3] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 3, .funcion = 4},
           [4] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 4, .funcion = 4},
           [5] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 5, .funcion = 4},
           [6] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 6, .funcion = 4},
           [7] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 7, .funcion = 0},
           [8] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 7, .funcion = 4},
           [9] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 10, .funcion = 0},
           [10] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 14, .funcion = 0},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 11, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 12, .funcion = 0}},

    [4] = {[0] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 0, .funcion = 0},
           [1] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 1, .funcion = 0},
           [2] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 2, .funcion = 0},
           [3] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 3, .funcion = 0},
           [4] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 4, .funcion = 0},
           [5] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 5, .funcion = 0},
           [6] = {.numRegistroGPIO = 2, .bitRegistroGPIO = 6, .funcion = 0},
           [7] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 15, .funcion = 4},
           [8] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 12, .funcion = 4},
           [9] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 13, .funcion = 4},
           [10] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 14, .funcion = 4},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 11, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 12, .funcion = 0}},

    [5] = {[0] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 0, .funcion = 4},
           [1] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 1, .funcion = 4},
           [2] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 2, .funcion = 4},
           [3] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 3, .funcion = 4},
           [4] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 4, .funcion = 4},
           [5] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 5, .funcion = 4},
           [6] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 6, .funcion = 4},
           [7] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 7, .funcion = 0},
           [8] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 7, .funcion = 4},
           [9] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 10, .funcion = 0},
           [10] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 14, .funcion = 0},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 11, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 12, .funcion = 0}},

    [6] = {[0] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 0, .funcion = 4},
           [1] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 1, .funcion = 4},
           [2] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 2, .funcion = 4},
           [3] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 3, .funcion = 4},
           [4] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 4, .funcion = 4},
           [5] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 5, .funcion = 4},
           [6] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 6, .funcion = 4},
           [7] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 15, .funcion = 4},
           [8] = {.numRegistroGPIO = 5, .bitRegistroGPIO = 7, .funcion = 4},
           [9] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 10, .funcion = 0},
           [10] = {.numRegistroGPIO = 0, .bitRegistroGPIO = 14, .funcion = 0},
           [11] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 11, .funcion = 0},
           [12] = {.numRegistroGPIO = 1, .bitRegistroGPIO = 12, .funcion = 0}},
};

pinGPIO const * getPin(Pin * pin) {
    pinGPIO const * valor = NULL;
    if (pin->puerto < MUX_NUM_PUERTOS && pin->pin < MUX_NUM_PINES)
        valor = &tablaConfigPinGpio[pin->puerto][pin->pin];
    return valor;
}

void configPin(Pin const * pin_p, HAL_ModoPin modo) {
    pinGPIO * pin = getPin(pin_p);
    Chip_SCU_PinMuxSet(pin_p->puerto, pin_p->pin, SCU_MODE_INBUFF_EN | SCU_MODE_INACT | pin->funcion);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, false);
    Chip_GPIO_SetPinDIR(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, modo);
}

bool readPin(Pin const * pin_p) {
    pinGPIO * pin = getPin(pin_p);
    return Chip_GPIO_ReadPortBit(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO);
}

void writePin(Pin const * pin_p, bool valor) {
    pinGPIO * pin = getPin(pin_p);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, valor);
    return;
}

void tooglePin(Pin const * pin_p) {
    pinGPIO * pin = getPin(pin_p);
    Chip_GPIO_SetPinToggle(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO);
}