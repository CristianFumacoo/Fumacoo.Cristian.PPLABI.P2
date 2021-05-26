#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"

eFecha ingresarFecha()
{
    int dia, mes, anio;
    eFecha fecha;
    int flag = 0;

    printf("Ingrese fecha dd/mm/aaaa: ");
    scanf("%d/%d/%d",&dia,&mes,&anio);


    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 :
            if ( dia >= 1 && dia <= 31 )
            {
                printf( "\nFECHA CORRECTA\n" );
                flag = 1;
            }
            else
                printf( "\nFECHA INCORRECTA\n" );
            break;

        case  4 :
        case  6 :
        case  9 :
        case 11 :
            if ( dia >= 1 && dia <= 30 )
            {
                printf( "\nFECHA CORRECTA\n" );
                flag = 1;
            }
            else
                printf( "\nFECHA INCORRECTA\n" );
            break;

        case  2 :
            if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                if ( dia >= 1 && dia <= 29 )
                {
                    printf( "\nFECHA CORRECTA\n" );
                    flag = 1;
                }
                else
                    printf( "\n   FECHA INCORRECTA\n" );
            else if ( dia >= 1 && dia <= 28 )
            {
                printf( "\nFECHA CORRECTA\n" );
                flag = 1;
            }
            else
                printf( "\nFECHA INCORRECTA\n" );
        }
    }
    else
        printf( "\nFECHA INCORRECTA\n" );

    if(!flag)
    {
        ingresarFecha();
    }


    fecha.dia = dia;
    fecha.mes = mes;
    fecha.anio = anio;

    return fecha;
}














