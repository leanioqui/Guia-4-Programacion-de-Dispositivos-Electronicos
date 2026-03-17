/******************************************************************************
6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. 
Para simplificar el problema, trabaje solo con mayúsculas. 
*******************************************************************************/
#include <stdio.h>

char palabra[50];
int i,j,largo,auxiliar=0;
char abc[28]="ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
//declaro las variables
int main()
{
    printf("ingrese una  palabra en mayusculas: ");
    scanf("%s",palabra);

   for(i=0;i<50 && palabra[i]!='\0';i++){//recorro el string hasta su final

       largo++;//sumo a largo en cada ciclo
   }
   int contador[largo];//hago un vector con el largo de la palabra
   int posicion;

    for(i=0;i<largo && palabra[i]!='\0';i++){//recorro la palabra
        for(j=0;j<28;j++){//recorro el abcdario
            if(palabra[i]==abc[j]){//si la letra esta en el abcdario:
                contador[i]++;//le sumo a contador en la posisicon de la letra
            }
        }

        if(contador[i]>auxiliar){//si contador es mayo que el auxiliar:
            auxiliar=contador[i];//auxiliar se iguala al contador que lo supera
            posicion=i;//y la posicion se guarda en la letra del momento
        }

    }


    printf("La letra que mas aparece es la %c",palabra[posicion]);//imprimo el caracter de la palabra en posicion


}
