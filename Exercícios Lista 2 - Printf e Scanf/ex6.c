6 -  Desenvolva um programa que faça a conversão de um valor lido em dólares para um valor em reais. O usuário deve informar a quantidade em dólares e a cotação do dólar no dia.


#include <stdio.h>


int main()
{


float real, dolar, cotacao;


printf("Informe quanto você possui em R$:");
scanf("%f", &real);
printf("Informe a cotação atual do dólar:");
scanf("%f", &dolar);


cotacao = real * dolar;


printf(“O valor da conversão hoje é: %f”, cotacao);
}








