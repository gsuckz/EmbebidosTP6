#ifndef MYBSP_H
#define MYBSP_H
#include "myhal.h"
#include "poncho.h"
#include <stdint.h>

typedef struct Poncho Poncho;

typedef struct Display {
    /**
     * @brief Mapa de bits que determina el estado de encendido (1) o
     * apagado (0) de los segmentos de los display de 7 segmentos que
     * componen la pantalla. b<0> : A, b<1> : B, ..., b<6> : G
     * 
     */
    uint8_t segmentos_digito[4];
}Display;

struct Poncho
{
    Display display;

    pinGPIO ACEPTAR;
    pinGPIO CANCELAR;
    pinGPIO F1;
    pinGPIO F2;
    pinGPIO F3;
    pinGPIO F4;
};



/**
 * @brief Inicializa los pines del poncho, ademàs devuleve un puntero al obj. Poncho
 * 
 * @return Poncho* 
 */
Poncho * PonchoInit(void);

/**
 * @brief Escribe en la memoria de video del controlador del Display
 * 
 * @param display Puntero al objeto  display
 * @param digito Digito que se quiere escribir
 * @param numero Numero que se quiere dibujar (0-9)
 */
void writeDisplay   (Display * display, uint8_t digito, uint8_t numero); //char?

/**
 * @brief Muestra lo que hay en la memoria de video en el Display
 * 
 */
void drawDisplay (Display * display);

/**
 * @brief Leer un boton del Poncho
 * 
 * @param boton  
 * @return true Si fue pulsado 
 * @return false Si no fue pulsado
 */
bool leerBoton (pinGPIO boton);



#endif