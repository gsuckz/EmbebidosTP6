#include <chip.h>
#include <stddef.h>
#include "myhal.h"
#include "tablaGPIO.h"

pinGPIO const * getPin(Pin const * pin) {
    pinGPIO const * valor = NULL;
    if (pin->puerto < MUX_NUM_PUERTOS && pin->pin < MUX_NUM_PINES)
        valor = &tablaConfigPinGpio[pin->puerto][pin->pin];
    return valor;
}

void configPin(Pin const * pin_p, HAL_ModoPin modo) {
    pinGPIO const * pin = getPin(pin_p);
    Chip_SCU_PinMuxSet(pin_p->puerto, pin_p->pin, SCU_MODE_INBUFF_EN | SCU_MODE_INACT | pin->funcion);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, false);
    Chip_GPIO_SetPinDIR(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, modo);
}

bool readPin(Pin const * pin_p) {
    pinGPIO const * pin = getPin(pin_p);
    return Chip_GPIO_ReadPortBit(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO);
}

void writePin(Pin const * pin_p, bool valor) {
    pinGPIO const * pin = getPin(pin_p);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO, valor);
    return;
}

void tooglePin(Pin const * pin_p) {
    pinGPIO const * pin = getPin(pin_p);
    Chip_GPIO_SetPinToggle(LPC_GPIO_PORT, pin->numRegistroGPIO, pin->bitRegistroGPIO);
}