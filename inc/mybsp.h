#ifndef MYBSP_H
#define MYBSP_H
#include "myhal.h"
#include "poncho.h"
#include "display7seg.h"
#include <stdint.h>

typedef  struct Poncho * Poncho_p;



/**
 * @brief Inicializa los pines del poncho, ademàs devuleve un puntero al obj. Poncho
 * 
 * @return Poncho* 
 */
Poncho_p PonchoInit(void);

/**
 * @brief Lee un boton del poncho
 * 
 * @param poncho El poncho
 * @param numBoton Número de botón, 0 a 5
 * @return true Pulsado
 * @return false No pulsado 
 */
bool PonchoBoton(Poncho_p poncho,uint8_t numBoton);

/**
 * @brief Escribe el numero en el Display del Poncho
 * 
 * @param poncho El poncho
 * @param numero 
 */
void PonchoWriteDisplay(Poncho_p poncho,unsigned numero);

#endif