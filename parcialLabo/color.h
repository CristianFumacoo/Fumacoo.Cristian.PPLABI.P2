#ifndef eColor_H_INCLUDED
#define eColor_H_INCLUDED

typedef struct
{
    int id;
    int isEmpty;
    char nombreColor[20];
}eColor;

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int Recibe el tamaño del Struct
 * \return void
 *
 */
void harcodeoColores(eColor[],int);

/** \brief
 *
 * \param eMarca Recibe la Strutc a mostrar
 * \return void
 *
 */
void mostrarColor(eColor);

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int El tamaño de la Struct
 * \return void
 *
 */
void mostrarColores(eColor[],int);


/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param int Recibe el tamaño del Struct
 * \param int Recibe el ID del Auto a buscar
 * \return int Retorna el indice en el que se encontro
 *
 */
int buscarColor(eColor[],int,int);

#endif
