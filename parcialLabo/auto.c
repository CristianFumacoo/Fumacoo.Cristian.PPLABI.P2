#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "auto.h"
#include "marca.h"
#include "color.h"

void init(eAuto autos[],int tam)
{
    for(int i = 0; i < tam; i++)
    {
        autos[i].isEmpty = 1;
    }
}

void harcodeoAutos(eAuto autos[])
{
    char patentes[10][7] = {"gf385","jf363","haf197","bp554","cgf645","dfd987","agf781","ejh895","qwe987","fxc332"};
    int idsMarcas[10] = {2,3,2,5,4,5,3,5,1,2};
    int idsColor[10] = {3,4,5,2,2,2,4,1,3,5};
    int modelo[10] = {1998,1990,2004,2021,2019,2015,1988,1200,3155,2000};
    int idAutos[10] = {50000,50001,50002,50003,50004,50005,50006,50007,50008,50009};

    for(int i = 0; i < 10; i++)
    {
        autos[i].id = idAutos[i];
        strcpy(autos[i].patente,patentes[i]);
        autos[i].idMarca = idsMarcas[i];
        autos[i].idColor = idsColor[i];
        autos[i].modelo = modelo[i];
        autos[i].isEmpty = 0;
    }
}

int altaAuto(eAuto autito[],eMarca marcas[],eColor colores[],int tam,int tamColor, int tamMarca,int id)
{
    int retorno = 0;

    for(int i = 0; i<tam; i++)
    {
        if(autito[i].isEmpty == 1)
        {
            printf("ID: %d\n",id);
            autito[i].id = id;

            printf("Ingrese patente: ");
            fflush(stdin);
            scanf("%s",&autito[i].patente);

            mostrarMarcas(marcas,tamMarca);
            printf("Ingrese el ID de la marca de su auto: ");
            scanf("%d",&autito[i].idMarca);

            while(autito[i].idMarca > 5 || autito[i].idMarca < 1)
            {
                printf("Error. Ingrese el ID de la marca de su auto: ");
                scanf("%d",&autito[i].idMarca);
            }

            mostrarColores(colores,tamColor);
            printf("Ingrese el ID del color de su auto: ");
            scanf("%d",&autito[i].idColor);

            while(autito[i].idColor > 5 || autito[i].idColor < 1)
            {
                printf("Error. Ingrese el ID del color de su auto: ");
                scanf("%d",&autito[i].idColor);
            }

            printf("Ingrese el modelo de su auto: ");
            scanf("%d",&autito[i].modelo);


            autito[i].isEmpty = 0;
            retorno = 1;

            break;
        }
    }

    return retorno;
}

int modificarAuto(eAuto autito[],eMarca marcas[],eColor colores[],int tam,int tamColor, int tamMarca)
{
    int retorno = 0;
    int auxId;
    char respuesta;
    int idAModificar;
    int opc;

    mostrarAutos(autito,marcas,colores,tam,tamColor,tamMarca);

    printf("Ingrese el ID del auto que desea modificar: ");
    scanf("%d",&auxId);

    idAModificar = buscarAuto(autito, tam, auxId);

    if(idAModificar != -1)
    {
        printf("¿Seguro que quiere Modificar a?\n");
        mostrarAuto(autito[idAModificar],marcas[idAModificar],colores[idAModificar]);
        printf("Ingrese 'S' para Modificar o 'N' para cancelar: ");
        fflush(stdin);
        scanf("%c",&respuesta);

        if(respuesta == 's')
        {
            switch(menuModificar())
            {
            case 1:
                mostrarColores(colores,tamColor);
                printf("\nIngrese el id de su nuevo color.\n");
                scanf("%d",&autito[idAModificar].idColor);

                while(autito[idAModificar].idColor > 5 || autito[idAModificar].idColor < 1)
                {
                    printf("Error. Ingrese el ID del nuevo color: ");
                    scanf("%d",&autito[idAModificar].idColor);
                }

                retorno = 1;
                break;
            case 2:
                printf("Ingrese su nuevo modelo: ");
                scanf("%d",&autito[idAModificar].modelo);
                break;
                retorno = 1;
            }
        }
    }

    return retorno;
}

int borrarAuto(eAuto autito[],eMarca marcas[],eColor colores[],int tam,int tamColor, int tamMarca)
{
    int retorno = 0;
    int auxId;
    char respuesta;
    int idAModificar;
    int opc;

    mostrarAutos(autito,marcas,colores,tam,tamColor,tamMarca);

    printf("Ingrese el ID del auto que desea Borrar: ");
    scanf("%d",&auxId);

    idAModificar = buscarAuto(autito, tam, auxId);

    if(idAModificar != -1)
    {
        printf("¿Seguro que quiere Borrar a?\n");
        mostrarAuto(autito[idAModificar],marcas[idAModificar],colores[idAModificar]);
        printf("Ingrese 'S' para Borrar o 'N' para cancelar: ");
        fflush(stdin);
        scanf("%c",&respuesta);

        if(respuesta == 's')
        {
            autito[idAModificar].isEmpty = 1;
            retorno = 1;
        }
    }

    return retorno;
}


/********************** MOSTRAR ************************/

void mostrarAuto(eAuto autito,eMarca marcas,eColor color)
{
    if(autito.isEmpty != 1)
    {
        printf("%d%15s%15s%15s%15d\n",autito.id,autito.patente,color.nombreColor,marcas.descripcion,autito.modelo);
    }
}

void mostrarAutos(eAuto autito[],eMarca marcas[],eColor color[],int cant,int cantMarcas,int cantColores)
{
    printf("%s%20s%15s%15s%15s\n\n","ID","PATENTE","COLOR","MARCA","MODELO");

    int idColor;
    int idMarca;

    for(int i = 0; i<cant; i++)
    {
        idColor = buscarColor(color,cantColores,autito[i].idColor);
        idMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

        mostrarAuto(autito[i],marcas[idMarca],color[idColor]);
    }
}

void mostrarAutosMain(eAuto autito[],eMarca marcas[],eColor color[],int cant,int cantMarcas,int cantColores)
{
    printf("%s%20s%15s%15s%15s\n\n","ID","PATENTE","COLOR","MARCA","MODELO");

    int idColor;
    int idMarca;
    ordenarAutos(autito,marcas,color,cant,cantMarcas,cantColores);

    for(int i = 0; i<cant; i++)
    {
        idColor = buscarColor(color,cantColores,autito[i].idColor);
        idMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

        mostrarAuto(autito[i],marcas[idMarca],color[idColor]);
    }
}

/************************ FIN MOSTRAR *****************************/

int buscarAuto(eAuto autito[],int tam,int id)
{
    int retorno = -1;

    for(int i=0; i<tam; i++)
    {
        if(autito[i].isEmpty != 1)
        {
            if(autito[i].id == id)
            {
                retorno = i;
            }
        }
    }

    return retorno;
}

void ordenarAutos(eAuto autos[],eMarca marca[],eColor color [],int tamAuto,int tamMarca,int tamColor)
{
    eAuto auxAuto;
    int auxId1;
    int auxId2;
    int auxPat1;
    int auxPat2;

    for(int i = 0; i < tamAuto - 1; i++)
    {
        for(int j = i; j < tamAuto; j++)
        {
            auxId1 = buscarMarca(marca,tamMarca,autos[i].idMarca);
            auxId2 = buscarMarca(marca,tamMarca,autos[j].idMarca);

            if(strcmp(marca[auxId1].descripcion,marca[auxId2].descripcion) == 0 && strcmp(autos[i].patente,autos[j].patente) > 0)
            {
                auxAuto = autos[i];
                autos[i] = autos[j];
                autos[j] = auxAuto;
            }
            else if(strcmp(marca[auxId1].descripcion,marca[auxId2].descripcion) > 0)
            {
                auxAuto = autos[i];
                autos[i] = autos[j];
                autos[j] = auxAuto;
            }
        }
    }
}

void mostrarPorColor(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int auxColor;
    int auxIdColor;
    int auxIdMarca;

    mostrarColores(color,cantColores);
    printf("Que color quiere ver?\n");
    printf("Ingrese opcion: ");
    scanf("%d",&auxColor);

    for(int i = 0; i < cantAutos; i++)
    {
        if(autito[i].isEmpty == 0)
        {
            auxIdColor = buscarColor(color,cantColores,autito[i].idColor);
            auxIdMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

            if(color[auxColor-1].id == autito[i].idColor)
            {
                mostrarAuto(autito[i],marcas[auxIdMarca],color[auxIdColor]);
            }
        }
    }
}

void mostrarPorMarca(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int auxMarca;
    int auxIdColor;
    int auxIdMarca;

    mostrarMarcas(marcas,cantMarcas);
    printf("Que marca quiere ver?\n");
    printf("Ingrese opcion: ");
    scanf("%d",&auxMarca);

    for(int i = 0; i < cantAutos; i++)
    {
        if(autito[i].isEmpty == 0)
        {
            auxIdColor = buscarColor(color,cantColores,autito[i].idColor);
            auxIdMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

            if(marcas[auxMarca-1].id == autito[i].idMarca)
            {
                mostrarAuto(autito[i],marcas[auxIdMarca],color[auxIdColor]);
            }
        }
    }
}

int contarMarcaColor(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int auxMarca;
    int auxColor;
    int auxIdColor;
    int auxIdMarca;
    int retorno = 0;

    mostrarMarcas(marcas,cantMarcas);
    printf("Que marca quiere ver?\n");
    printf("Ingrese opcion: ");
    scanf("%d",&auxMarca);

    mostrarColores(color,cantColores);
    printf("Que color quiere ver?\n");
    printf("Ingrese opcion: ");
    scanf("%d",&auxColor);

    for(int i = 0; i < cantAutos; i++)
    {
        if(autito[i].isEmpty == 0)
        {
            auxIdColor = buscarColor(color,cantColores,autito[i].idColor);
            auxIdMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

            if(marcas[auxMarca-1].id == autito[i].idMarca && color[auxColor-1].id == autito[i].idColor)
            {
                retorno++;
            }
        }
    }

    return retorno;
}

void mostrarMasViejos(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int auxModelo;
    int indice;
    int indiceColor;
    int indiceMarca;

    for(int i = 0; i < cantAutos; i++)
    {
        if(i == 0)
        {
            auxModelo = autito[i].modelo;
        }
        else if(autito[i].isEmpty == 0 && auxModelo > autito[i].modelo)
        {
            auxModelo = autito[i].modelo;
        }
    }

    for(int i = 0; i < cantAutos; i++)
    {
        indice = i;
        indiceColor = buscarColor(color,cantColores,autito[i].idColor);
        indiceMarca = buscarMarca(marcas,cantMarcas,autito[i].idMarca);

        if(autito[i].isEmpty == 0 && autito[i].modelo == auxModelo)
        {
            printf("El auto mas viejo es: \n");
            mostrarAuto(autito[indice],marcas[indiceMarca],color[indiceColor]);
        }
    }
}

void mostrarSeparadoPorMarca(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int indiceColor;

    for(int i = 0; i < cantMarcas; i++)
    {
        printf("\n");
        printf("La marca es: %s\n",marcas[i].descripcion);

        for(int j = 0; j < cantAutos; j++)
        {
            indiceColor = buscarColor(color,cantColores,autito[i].idColor);

            if(marcas[i].id == autito[j].idMarca)
            {
                mostrarAuto(autito[j],marcas[i],color[indiceColor]);
            }
        }
    }
}

void mostrarMarcaMasElegida(eAuto autito[],eMarca marcas[],eColor color[],int cantAutos,int cantMarcas,int cantColores)
{
    int ids[cantMarcas];
    int mayor = 0;

    for(int i = 0; i < cantMarcas; i++)
    {
        ids[i] = 0;
    }

    for(int i = 0; i < cantMarcas; i++)
    {
        for(int j = 0; j < cantAutos; j++)
        {
            if(marcas[i].id == autito[j].idMarca)
            {
                ids[i]++;
            }
        }
    }

    for(int i = 0;i < cantMarcas; i++)
    {
        if(ids[i] > mayor)
        {
            mayor=ids[i];
        }
    }

    printf("La marca/s mas elegida es/son: \n");

    for(int i = 0;i < cantMarcas; i++)
    {
        if(ids[i] == mayor)
        {
            printf("%s\n",marcas[i].descripcion);
        }
    }

}












