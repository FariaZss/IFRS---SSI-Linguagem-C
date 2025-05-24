2 - Escreva um programa que lê três numeros e imprima o resultado da multiplicação.
#include <stdio.h>


int main()
{


int valor1, valor2, valor3, res;


printf("Informe um valor:");
scanf("%d", &valor1);
printf("informe outro valor:");
scanf("%d", &valor2);
printf("informe outro valor:");
scanf("%d", &valor3);


res = (valor1 * valor2) * valor3;


printf("Resultado: %d", res);


    
}
