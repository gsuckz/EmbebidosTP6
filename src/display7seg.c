#include "display7seg.h"

Display display;

Display * displayInit(void (*set_segmento)(uint8_t,bool),void (*set_digito)(uint8_t,bool) )
{
    display.set_segmento = set_segmento;
    dispaly.set_digito = set_digito;
    return &display;
}

void writeDisplay(Display * display, uint8_t digito, uint8_t numero) {
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
    if (digito_activo > 4)
        digito_activo = 0;
    for (uint8_t segmento_index = 0; segmento_index <= 6; segmento_index++) {
        display->set_segmento(segmento_index, (display->segmentos_digito[digito_activo] & (1U << (segmento_index))));
    }
    display->set_digito(digito_activo, 1);
    return;
}