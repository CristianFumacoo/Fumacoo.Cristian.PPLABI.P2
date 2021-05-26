#ifndef eMarca_H_INCLUDED
#define eMarca_H_INCLUDED

typedef struct
{
    int id;
    int isEmpty;
    char descripcion[20];
}eMarca;

/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int Recibe el tamaño del Struct
 * \return void
 *
 */
void harcodeoMarca(eMarca[],int);


/** \brief
 *
 * \param eMarca Recibe la Strutc a mostrar
 * \return void
 *
 */
void mostrarMarca(eMarca);


/** \brief
 *
 * \param eMarca[] Recibe un array de la Struct
 * \param int El tamaño de la Struct
 * \return void
 *
 */
void mostrarMarcas(eMarca[],int);

/** \brief
 *
 * \param eAuto[] Recibe un array de Struct
 * \param int Recibe el tamaño del Struct
 * \param int Recibe el ID del Auto a buscar
 * \return int Retorna el indice en el que se encontro
 *
 */
int buscarMarca(eMarca[],int,int);
#endif // eMarca_H_INCLUDED
