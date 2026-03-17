/******************************************************************************
1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.
*******************************************************************************/
#include <stdio.h>

int i,contador=0;
char palabra[20]; //declaro el string

int main(){

printf("Ingrese una palabra de hasta 20 letras: \n");
scanf("%[^\n]s",palabra); //le pido al usuario que ingrese uh string y lo guardo en la variable. "%[^\n]" lee hasta que detecte un enter

for(i=0;i<21;i++){//recorro la palabra
    if(palabra[i]!=0){
        contador++;}//cuento cuantas letras tiene la palabra
}

printf("\nLa plabara tiene %d letras",contador-1);//imprimo el contador -1 porque cuenta el caracter de finalizacion del string "\0"

}
