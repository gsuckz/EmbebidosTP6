#ifndef MYBSP_H
#define MYBSP_H
#include "myhal.h"
#include "poncho.h"
#include "display7seg.h"
#include <stdint.h>

typedef struct Poncho Poncho;



typedef struct Pin Pin;



/**
 * @brief Inicializa los pines del poncho, ademàs devuleve un puntero al obj. Poncho
 * 
 * @return Poncho* 
 */
Poncho * PonchoInit(void);


/**
 * @brief Leer un boton del Poncho
 * 
 * @param boton  
 * @return true Si fue pulsado 
 * @return false Si no fue pulsado
 */
bool leerBoton (pinGPIO boton);



#endif