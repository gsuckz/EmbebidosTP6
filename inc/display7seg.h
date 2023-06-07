#ifndef DISPLAY7_SEG_H
#define DISPLAY7_SEG_H
#include "myhal.h"
#include <stdint.h>

typedef struct Display {
    /**
     * @brief Mapa de bits que determina el estado de encendido (1) o
     * apagado (0) de los segmentos de los display de 7 segmentos que
     * componen la pantalla. b<0> : A, b<1> : B, ..., b<6> : G
     * 
     */
    uint8_t segmentos_digito[10];
    uint8_t num_digitos;
    void (*set_segmento) (uint8_t,bool);
    void (*set_digito) (uint8_t,bool);

}Display;


/**
 * @brief Escribe en la memoria de video del controlador del Display
 * 
 * @param display Puntero al objeto  display
 * @param digito Digito que se quiere escribir
 * @param numero Numero que se quiere dibujar (0-9)
 */
void writeDisplayDig   (Display * display, uint8_t digito, uint8_t numero); //char?

/**
 * @brief Muestra lo que hay en la memoria de video en el Display
 * 
 */
void drawDisplay (Display * display);

/**
 * @brief Crea un Display
 * 
 * @return Display* Puntero al objeto display creado
 */
Display * displayInit (void (*set_segmento)(uint8_t,bool),void (*set_digito)(uint8_t,bool),uint8_t set_num_digitos );
#endif