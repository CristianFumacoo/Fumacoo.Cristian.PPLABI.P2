#include <stdio.h>
#include <stdlib.h>
#include "servicio.h"



void harcodeoServicios(eServicio servicios[],int tam)
{
    char servicio[4][20] = {"Lavado","Pulido","Encerado","Completo"};
    int precioServis[4] = {250,300,400,600};
    int idServis[4] = {1,2,3,4};
    int llenoServis[4] = {0,0,0,0};

    for(int i = 0; i < 4; i++)
    {
        strcpy(servicios[i].descripcion,servicio[i]);
        servicios[i].precio = precioServis[i];
        servicios[i].id = idServis[i];
        servicios[i].isEmpty = llenoServis[i];
    }
}


/****************************** MOSTRAR ****************************/

void mostrarServicio(eServicio servicio)
{
    if(servicio.isEmpty != 1)
    {
        printf("%d%15s%15d\n",servicio.id,servicio.descripcion,servicio.precio);
    }
}

void mostrarServicios(eServicio servicios[],int cant)
{
    printf("%s%15s%15s\n\n","ID","TRABAJO","PRECIO");

    for(int i = 0; i<cant; i++)
    {
        mostrarServicio(servicios[i]);
    }
}

/************************* FIN MOSTRAR ******************************/

int buscarServis(eServicio servicio[],int tam,int id)
{
    int retorno = -1;

    for(int i=0; i<tam; i++)
    {
        if(servicio[i].isEmpty != 1)
        {
            if(servicio[i].id == id)
            {
                retorno = i;
            }
        }
    }

    return retorno;
}

















