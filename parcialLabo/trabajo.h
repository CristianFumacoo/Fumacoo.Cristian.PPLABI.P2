#ifndef eTrabajo_H_INCLUDED
#define eTrabajo_H_INCLUDED

#include "fecha.h"
#include "auto.h"
#include "color.h"
#include "marca.h"
#include "servicio.h"

typedef struct
{
    int id;
    char patente[7];
    int idServicio;
    int isEmpty;
    eFecha fecha;
}eTrabajo;

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int Recibe el tama�o del Struct
 * \return void
 *
 */
void harcodeoTrabajos(eTrabajo[],int);

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int Recibe el tama�o del Struct
 * \return void
 *
 */
void initTrabajos(eTrabajo[],int);

/** \brief
 *
 * \param eTrabajo[] Recibe un array de la Struct
 * \param eAuto[] Recibe un array de la Struct
 * \param eMarca[] Recibe un array de la Struct
 * \param eColor[] Recibe un array de la Struct
 * \param eServicio[] Recibe un array de la Struct
 * \param eFecha Recibe una Struct
 * \param int Recibe el tama�o de Autos
 * \param int Recibe el tama�o de Servicios
 * \param int Recibe el tama�o de Marcas
 * \param int Recibe el tama�o de Colores
 * \param int Recibe el tama�o de Trabajos
 * \param int Recibe el ID del trabajo
 * \return int Retorna 1 si pudo completar, 0 si no pudo
 *
 */
int altaTrabajo(eTrabajo[],eAuto[],eMarca[],eColor[],eServicio[],eFecha,int,int,int,int,int,int);


/** \brief
 *
 * \param eTrabajo Recibe una Struct
 * \param eServicio Recibe una Struct
 * \return void
 *
 */
void mostrarTrabajo(eTrabajo,eServicio);

/** \brief
 *
 * \param eTrabajo[] Recibe un array de la Struct
 * \param eServicio[] Recibe un array de la Struct
 * \param int Recibe el tama�o de Trabajos
 * \param int Recibe el tama�o de Servicios
 * \return void
 *
 */
void mostrarTrabajos(eTrabajo[],eServicio[],int,int);

#endif
















