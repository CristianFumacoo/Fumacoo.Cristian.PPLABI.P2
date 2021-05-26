#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "color.h"
#include "servicio.h"
#include "trabajo.h"
#include "fecha.h"
#include "menu.h"

#define AUTOS 20
#define MARCAS 5
#define COLORES 5
#define SERVICIOS 4
#define TRABAJOS 5
#define FECHAS 5

int main()
{
    int opc;
    int contMarcasColores;
    char respuesta = 's';

    int idTrabajo = 1;
    eTrabajo trabajos[TRABAJOS];
    initTrabajos(trabajos,TRABAJOS);

    eMarca marca[MARCAS];
    harcodeoMarca(marca,MARCAS);

    eColor color[COLORES];
    harcodeoColores(color,COLORES);

    eServicio servicio[SERVICIOS];
    harcodeoServicios(servicio,SERVICIOS);

    int idAuto = 50010;
    eAuto autos[AUTOS];
    init(autos,AUTOS);
    harcodeoAutos(autos);

    eFecha fecha;

    do
    {
        opc = menu();

        switch(opc)
        {
        case 1:
            if(altaAuto(autos,marca,color,AUTOS,MARCAS,COLORES,idAuto))
            {
                printf("El auto se ingreso correctamente.\n");
                idAuto++;
            }
            else
            {
                printf("Hubo un error.\n");
            }
            system("pause");
            break;
        case 2:
            if(modificarAuto(autos,marca,color,AUTOS,COLORES,MARCAS))
            {
                printf("Se modifico correctamente.\n");
            }
            else
            {
                printf("Hubo un error.\n");
            }
            system("pause");
            break;
        case 3:
            if(borrarAuto(autos,marca,color,AUTOS,COLORES,MARCAS))
            {
                printf("Se borro correctamente.\n");
            }
            else
            {
                printf("Hubo un error.\n");
            }
            system("pause");
            break;
        case 4:
            mostrarAutosMain(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        case 5:
            mostrarColores(color,COLORES);
            system("pause");
            break;
        case 6:
            mostrarMarcas(marca,MARCAS);
            system("pause");
            break;
        case 7:
            mostrarServicios(servicio,SERVICIOS);
            system("pause");
            break;
        case 8:
            if(altaTrabajo(trabajos,autos,marca,color,servicio,fecha,AUTOS,SERVICIOS,MARCAS,COLORES,TRABAJOS,idTrabajo))
            {
                printf("\nSe ingreso correctamente.\n");
                idTrabajo++;
            }
            else
            {
                printf("Hubo un error.\n");
            }
            system("pause");
            break;
        case 9:
            mostrarTrabajos(trabajos,servicio,TRABAJOS,SERVICIOS);
            system("pause");
            break;
        case 10:
            respuesta = 'n';
            break;
        case 11:
            mostrarPorColor(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        case 12:
            mostrarPorMarca(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        case 13:
            contMarcasColores = contarMarcaColor(autos,marca,color,AUTOS,MARCAS,COLORES);
            printf("Los autos con esa coincidencia son: %d\n",contMarcasColores);
            system("pause");
            break;
        case 14:
            mostrarMasViejos(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        case 15:
            mostrarSeparadoPorMarca(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        case 16:
            mostrarMarcaMasElegida(autos,marca,color,AUTOS,MARCAS,COLORES);
            system("pause");
            break;
        default:
            printf("Opcion incorrecta.\n");
            system("pause");
            break;
        }
    }
    while(respuesta == 's');
}
