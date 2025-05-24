7 - A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro. Faça um programa que leia o preço unitário do produto adquirido pelo cliente, a quantidade e calcule o total gasto pelo cliente. Mostre o total e calcule o prêmio. Mostre o valor do prêmio (total da compra multiplicado por 2)
variaveis: preço unitário - quantidade produtos - total - calculo
#include <stdio.h>


int main()
{
	float pcoUnit, total, premio;
	int qtdProd;


printf("Informe o preço unitário do produto adquirido:");
scanf("%f", &pcoUnit);
printf("Quantos produtos você pegou?");
scanf("%d", &qtdProd);


total = pcoUnit * qtdProd;


premio = total * 2;
printf("O premio é de R$:%f", premio);
}
	


