/******************************************************************************
5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.
*******************************************************************************/
#include <stdio.h>

char palabra[50];
char comparador[10]="aeiouAEIOU"; //creo la variable contra la que voy a comparar la palabra
int i,j=0,contador=0;

int main()
{
  printf("Ingrese una palabra: "); 
  scanf("%[^\n]s",palabra);//almaceno la palabra

  for(i=0;i<=50;i++){//recorro letra por letra la palabra
    for(j=0;j<10;j++){//recorro todo el comparador
     if(palabra[i]==comparador[j]){//si la letra es igual a alguna de las vocales del comparador entra al if

       contador++; //sumo si se cumple la igualdad


     }      
    }   
  }

 printf("%d",contador);  //imprimo el contador

}
