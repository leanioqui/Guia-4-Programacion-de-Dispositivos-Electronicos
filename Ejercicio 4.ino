/******************************************************************************
4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras "A" minúsculas contiene.
*******************************************************************************/
#include <stdio.h>

char palabra[50];//declaro la variable que guarda la palabra
int i,contador=0;
char a[2]="a";//declaro una variable que uso para comparar la palabra 

int main()
{
    printf("ingrese una palabra: \n");
    scanf("%[^\n]s",palabra);//el usuario ingresa la palabra

    for(i=0;i<50;i++){//recorro la palabra
        if(palabra[i]==a[0]){//si alguno de los caracteres de la palabra es igual al caracte a comparar "a"
            contador++;//se sumara 1 al contador
        }
    }
    printf("Hay %d a minusculas", contador);//imprimo el contador
}
