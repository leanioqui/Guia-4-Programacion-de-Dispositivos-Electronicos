/******************************************************************************
7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

char nombre[50];
char joven[50];
int i,edad,masJoven=8888;
//Declaro las variables
int main()
{
    for(i=0;i<=5;i++){//hago un for que recorre todo 5 veces
        printf("\ningrese el nombre : ");
        scanf("%s",nombre);//guardo el input en nombre
        printf("\ningrese la edad : ");
        scanf("%d",&edad);//guardo la edad

        if(edad<masJoven){//si edad es menor a mas joven:
            masJoven=edad;//igualo masJoven a edad
            strcpy(joven,nombre);//y copio el nombre actual a mas joven

        }
    }

    printf("\nel mas joven es %s con %d años", joven, masJoven);//imprimo el resultado

}
