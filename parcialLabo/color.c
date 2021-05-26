#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include "auto.h"
#include "marca.h"


void harcodeoColores(eColor colores[],int tam)
{
    char coloresH[5][20] = {"Negro", "Blanco", "Gris", "Rojo", "Azul"};
    int idColores[5] = {1,2,3,4,5};
    int llenoColores[5] = {0,0,0,0,0};


    for(int i=0;i<tam;i++)
    {
        strcpy(colores[i].nombreColor,coloresH[i]);
        colores[i].id = idColores[i];
        colores[i].isEmpty = llenoColores;
    }
}


/********************* MOSTRAR ********************************/

void mostrarColor(eColor color)
{
    if(color.isEmpty != 1)
    {
        printf("%d%15s\n",color.id,color.nombreColor);
    }
}

void mostrarColores(eColor color[],int cant)
{
    printf("%s%15s\n\n","ID","COLOR");

    for(int i = 0; i<cant; i++)
    {
        mostrarColor(color[i]);
    }
}

/********************* FIN MOSTRAR ****************************/

int buscarColor(eColor color[],int cant,int idColor)
{
    int retorno = -1;

    for(int i = 0; i < cant; i++)
    {
        if(color[i].id == idColor)
        {
            retorno = i;
        }
    }

    return retorno;
}









