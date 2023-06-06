#ifndef MYBSP_H
#define MYBSP_H
#include "myhal.h"
#include "poncho.h"
#include <stdint.h>

static 

typedef struct Poncho
{
    Display display;

    pinGPIO ACEPTAR;
    pinGPIO CANCELAR;
    pinGPIO boton_A;
    pinGPIO boton_B;
    pinGPIO boton_C;
    pinGPIO boton_D;
}Poncho;


Poncho * PonchoInit(void);

char getDisplay     (Display * display, uint8_t digito);    //devolver un puntero a char, y usarlo como arreglo?
void writeDisplay   (Display * display, uint8_t digito, char caracter); //char?
void drawDisplay (void);
bool leerBoton (pinGPIO pin);



