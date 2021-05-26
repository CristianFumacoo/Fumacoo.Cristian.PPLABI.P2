#ifndef eServicio_H_INCLUDED
#define eServicio_H_INCLUDED

typedef struct
{
    int id;
    int isEmpty;
    char descripcion[25];
    char servicio[20];
    int precio;
}eServicio;

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int Recibe el tamaño del Struct
 * \return void
 *
 */
void harcodeoServicios(eServicio[],int);

/** \brief
 *
 * \param eMarca Recibe la Strutc a mostrar
 * \return void
 *
 */
void mostrarServicio(eServicio);

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int El tamaño de la Struct
 * \return void
 *
 */
void mostrarServicios(eServicio[], int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param int Recibe el tamaño del Struct
 * \param int Recibe el ID del Auto a buscar
 * \return int Retorna el indice en el que se encontro
 *
 */
int buscarServis(eServicio[],int,int);

#endif // eServicio_H_INCLUDED

