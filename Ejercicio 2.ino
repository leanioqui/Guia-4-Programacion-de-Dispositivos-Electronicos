/******************************************************************************
2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".
*******************************************************************************/
#include <stdio.h>

char palabra[50];//declaro el string, se puede no especificar el largo, pero especifico uno de 50 arbitrariamente.
int i;

int main()
{
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);//guardo la palabra que ingresa el usuario. Nota no hace falta el "&" para guardar strings en el scanf
    for(i=50; i>=0; i--){
        printf("%c",palabra[i]);//imprime caracter por caracter la plabra en sentido contrario
    }


}
