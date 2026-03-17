/******************************************************************************
9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

char abc[28]="abcdefghijklmnñopqrstuvwxyz";
char palabra[10];
int i,j,largo;
//creo las variables
int main()
{
    printf("Ingrese una palabra de 10 letras maximo: ");
    scanf("%s",palabra);

    largo =strlen(palabra);//el largo sera el largo de la palabra introducida
    int posicion[largo];

    for(i=0;i<largo;i++){//recorro la palabra caracter por caracter
        for(j=0;j<28;j++){//recorro el abcdario caracter por caracter
            if(palabra[i]==abc[j]){//si los caracteres son iguales:
               posicion[i]=j; //guardo la posicion de la letra en el abcdario
            }
        }
    }

    for(i=0;i<largo;i++){
        if(posicion[i]==25){//si es la x lo igualo a la a
            palabra[i]='a'; 
        }

        else if(posicion[i]==26){//si es la y la igualo a la b
            palabra[i]='b'; 
        }

        else if(posicion[i]==27){// si es la z la igualo a la c
            palabra[i]='c'; 
        }

        else{
        palabra[i]=abc[posicion[i]+3];//modifico el caracter de la palabra igualandolo  a la letra +3 de la posicion del abcdario
        }
    }

    printf("%s",palabra);//imprimo la palabra modificada


}
