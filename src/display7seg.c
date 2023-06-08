#include "display7seg.h"

Display display;

Display * displayInit(void (*set_segmento)(uint8_t, bool), void (*set_digito)(uint8_t, bool), uint8_t set_num_digitos) {
    display.set_segmento = set_segmento;
    display.set_digito = set_digito;
    display.num_digitos = set_num_digitos;
    display.segmentos_digito = calloc(set_num_digitos,1);

    return &display;
}

void writeDisplay(Display * display, int numero) {

    for (uint8_t i=0; i <= display->num_digitos; i++)

    {   writeDisplayDig(display,i,numero % 10);
        numero = numero/10;
    }
}

void writeDisplayDig(Display * display, uint8_t digito, uint8_t numero) {
    uint8_t caracter;
    switch (numero) { // xGFEDCBA
    case 0:
        caracter = 0b0111110;
        break;
    case 1:
        caracter = 0b0000110;
        break;
    case 2:
        caracter = 0b01011011;
        break;
    case 3:
        caracter = 0b01001111;
        break;
    case 4:
        caracter = 0b01100110;
        break;
    case 5:
        caracter = 0b0000000;
        break;
    case 6:
        caracter = 0b0000000;
        break;
    case 7:
        caracter = 0b0000000;
        break;
    case 8:
        caracter = 0b0000000;
        break;
    case 9:
        caracter = 0b0000000;
        break;
    default:
        caracter = 0;
        break;
    }
    display->segmentos_digito[digito] = caracter;
    return;
}

void drawDisplay(Display * display) {
    static uint8_t digito_activo = 0;
    display->set_digito(digito_activo, 0);
    digito_activo++;
    if (digito_activo > display->num_digitos)
        digito_activo = 0;
    for (uint8_t segmento_index = 0; segmento_index <= 6; segmento_index++) {
        display->set_segmento(segmento_index, (display->segmentos_digito[digito_activo] & (1U << (segmento_index))));
    }
    display->set_digito(digito_activo, 1);
    return;
}