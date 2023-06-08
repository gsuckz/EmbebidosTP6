
#define MUX_NUM_PUERTOS 7
#define MUX_NUM_PINES 18

pinGPIO const tablaConfigPinGpio[MUX_NUM_PUERTOS][MUX_NUM_PINES] = {
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