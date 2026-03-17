/******************************************************************************
8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

char nombre[50];
char primero[50]="z";//declaro la variable que guardara al primero en orden alfabetico


int main()
{
    while(strcmp(nombre,"FIN")!=0){//ejecuto el while mientras que la palabra no sea FIN
        gets(nombre);//guardo el input del usuario
        if(strcmp(nombre,primero)<=-1 && strcmp(nombre,"FIN")!=0){//comparo, y si es -1 significa que nombre esta antes que primero en orden alfabetico si la palabra es distinta a 0 es que no es igual a FIN 
            strcpy(primero,nombre);                                 //copio el nombre a primero
        }
    }

    printf("El primero es %s",primero);//imprimo el primero
}
