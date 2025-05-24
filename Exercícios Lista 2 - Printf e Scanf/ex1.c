1 - Escreva um programa que lê dois numeros e imprima o resultado da soma #include <stdio.h>


int main()
{
int valor1, valor2, res;


printf("Informe um valor:");
scanf("%d", &valor1);
printf("informe outro valor:");
scanf("%d", &valor2);


res = valor1 + valor2;
	
printf("Resultado: %d", res);
}


