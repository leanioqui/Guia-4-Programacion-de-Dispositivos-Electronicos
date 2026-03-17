/******************************************************************************
3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.
*******************************************************************************/
#include <stdio.h>

char string_a[50];//creo las variables para almacenar los strings
char string_b[50]; 
int i,largo=0,verificador=0;

int main()
{
  printf("Ingrese un string: "); //pido el ingreso del string a
  gets(string_a);//lo guardo en la variable


  printf("Ingrese otro string: "); 
  gets(string_b);

  for(i=0; i<=50 && string_a[i]!='\0' ; i++){//hago un for con 2 condiciones, hasta que termine el string o hasta que i sea mayor a 50
      if(string_a[i]!='\0'){//si el string no termino sumo a largo
        largo++;
      }

      if(string_a[i]==string_b[i]){//si el caracter es igual sumo a verificador
        verificador++;
      }
  }
  if(verificador==largo){//si verificador y largo son iguales quiere decir que son iguales
      printf("Son iguales");
  }
  else{
      printf("No son iguales");//de no ser asi no imprimo "no son iguales"
  }
}
