#ifndef eAuto_H_INCLUDED
#define eAuto_H_INCLUDED
#include "marca.h"
#include "color.h"

typedef struct
{
    int id;
    int isEmpty;
    char patente[7];
    int idColor;
    int idMarca;
    int modelo;
}eAuto;

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param int Recibe el tamaño de la struct
 * \return void
 *
 */
void init(eAuto[],int);

/** \brief
 *
 * \param eAuto[]
 * \return void
 *
 */
void harcodeoAutos(eAuto[]);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 * \param int Recibe el id del auto
 * \return int retorna 1 si pudo, 0 si no pudo
 *
 */
int altaAuto(eAuto[],eMarca[],eColor[],int,int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 * \param int Recibe el id del auto
 * \return int retorna 1 si pudo, 0 si no pudo
 *
 */
int modificarAuto(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 * \param int Recibe el id del auto
 * \return int retorna 1 si pudo, 0 si no pudo
 *
 */
int borrarAuto(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto
 * \param eMarca
 * \param eColor
 * \return void
 *
 */
void mostrarAuto(eAuto,eMarca,eColor);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarAutos(eAuto[],eMarca[],eColor[],int,int,int);


/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarAutosMain(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void ordenarAutos(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param int Recibe el tamaño del Struct
 * \param int Recibe el ID del Auto a buscar
 * \return int Retorna el indice en el que se encontro
 *
 */
int buscarAuto(eAuto[],int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarPorColor(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarPorMarca(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
int contarMarcaColor(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarMasViejos(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarSeparadoPorMarca(eAuto[],eMarca[],eColor[],int,int,int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param eMarca[] Recibe un array de Struct
 * \param eColor[] Recibe un array de Struct
 * \param int Recibe tamaño de Autos
 * \param int Recibe tamaño de Marcas
 * \param int Recibe tamaño de Colores
 *
 */
void mostrarMarcaMasElegida(eAuto[],eMarca[],eColor[],int,int,int);


#endif // eAuto_H_INCLUDED























