#include <stdio.h>
#include <stdlib.h>
#include "marca.h"

void harcodeoMarca(eMarca marcas[],int tam)
{
    char marcasH[5][20] = {"Renault", "Fiat", "Ford", "Chevrolet", "Peugeot"};
    int idMarcas[5] = {1,2,3,4,5};
    int llenoMarcas[5] = {0,0,0,0,0};

    for(int i=0; i<tam; i++)
    {
        strcpy(marcas[i].descripcion,marcasH[i]);
        marcas[i].id = idMarcas[i];
        marcas[i].isEmpty = llenoMarcas[i];
    }


}

/************************** MOSTRAR **********************************/

void mostrarMarca(eMarca marca)
{
    if(marca.isEmpty != 1)
    {
        printf("%d%15s\n",marca.id,marca.descripcion);
    }
}

void mostrarMarcas(eMarca marca[],int cant)
{
    printf("%s%15s\n\n","ID","NOMBRE");

    for(int i = 0; i<cant; i++)
    {
        mostrarMarca(marca[i]);
    }
}

/************************ FIN MOSTRAR **********************************/

int buscarMarca(eMarca marca[],int cant,int idMarca)
{
    int retorno = -1;

    for(int i = 0; i < cant; i++)
    {
        if(marca[i].id == idMarca)
        {
            retorno = i;
        }
    }

    return retorno;
}





















