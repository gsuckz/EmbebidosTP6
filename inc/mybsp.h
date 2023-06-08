#ifndef MYBSP_H
#define MYBSP_H
#include "myhal.h"
#include "poncho.h"
#include "display7seg.h"
#include <stdint.h>


typedef struct Poncho * Poncho_p;

/**
 * @brief Inicializa los pines del poncho, ademàs devuleve un puntero al obj. Poncho
 *
 * @return Poncho*
 */
Poncho_p PonchoInit(void);

bool PonchoBotonCancelar(Poncho * poncho);
bool PonchoBotonAceptar(Poncho * poncho);
bool PonchoBotonFuncion(Poncho * poncho, uint8_t i);

/**
 * @brief Escribe el numero en el Display del Poncho
 *
 * @param poncho El poncho
 * @param numero
 */
void PonchoWriteDisplay(Poncho_p poncho, unsigned numero);
/**
 * @brief Refresca el dispaly del poncho
 *
 * @param poncho El poncho
 */
void PonchoDrawDisplay(Poncho_p poncho);

#endif