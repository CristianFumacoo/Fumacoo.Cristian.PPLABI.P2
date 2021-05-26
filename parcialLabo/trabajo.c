#include <stdio.h>
#include <stdlib.h>
#include "trabajo.h"

void initTrabajos(eTrabajo trabajos[],int tam)
{
    for(int i=0; i<tam;i++)
    {
        trabajos[i].isEmpty = 1;
    }
}

void harcodeoTrabajos(eTrabajo trabajos[],int tam)
{
    for(int i = 0; i < tam; i++)
    {
        trabajos[i].isEmpty = 1;
    }

}

int altaTrabajo(eTrabajo trabajos[],eAuto autito[],eMarca marca[],eColor color[],eServicio servicio[],eFecha fecha,int tamAuto, int tamServicio,int tamMarca,int tamColor,int tamTrabajos,int id)
{
    int retorno = 0;
    int idAutoSelec;
    int idServicioSelec;
    int auxId;

    for(int i = 0; i < tamTrabajos; i++)
    {
        if(trabajos[i].isEmpty == 1)
        {
            mostrarAutos(autito,marca,color,tamAuto,tamMarca,tamColor);
            printf("Ingrese la patente del auto al que desea brindar un servicio: ");
            scanf("%d",&auxId);

            idAutoSelec = buscarAuto(autito, tamAuto, auxId);

            if(idAutoSelec != -1)
            {
                strcpy(trabajos[i].patente,autito[idAutoSelec].patente);

                mostrarServicios(servicio,tamServicio);
                printf("¿Que servicio le quiere hacer?\n");
                scanf("%d",&trabajos[i].idServicio);
                while(trabajos[i].idServicio > 4 || trabajos[i].idServicio < 1)
                {
                    printf("Error. Ingrese el ID del servicio a hacer: ");
                    scanf("%d",&trabajos[i].idServicio);
                }
                printf("Eligio bien\n");

                trabajos[i].fecha = ingresarFecha();

                trabajos[i].id = id;
                trabajos[i].isEmpty = 0;
                retorno = 1;
                break;
            }
        }
    }

    return retorno;
}

/***************************** MOSTRAR ************************************/

void mostrarTrabajo(eTrabajo trabajo,eServicio servicio)
{
    if(trabajo.isEmpty != 1)
    {
        printf("%d%15s%15s%15d/%d/%d\n",trabajo.id,trabajo.patente,servicio.descripcion,trabajo.fecha.dia,trabajo.fecha.mes,trabajo.fecha.anio);
    }
}
void mostrarTrabajos(eTrabajo trabajo[],eServicio servicio[],int cant,int cantServis)
{
    int idServis;
    printf("%s%15s%15s\n\n","ID","PATENTE","SERVICIO");

    for(int i = 0; i<cant; i++)
    {
        idServis = buscarServis(servicio,cantServis,trabajo[i].idServicio);
        mostrarTrabajo(trabajo[i],servicio[idServis]);
    }
}

/*************************** FIN MOSTRAR **************************************/










