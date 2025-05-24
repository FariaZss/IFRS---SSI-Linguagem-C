/******************************************************************************

Simulador de poupança
Um valor de R$100,00 é depositado todo mês em uma poupança que rende 0,5% ao mês.
Escreva um programa que calcule e mostre o valor acumulado mês a mês durante 24 meses (2 anos).
Use um laço de repetição. Não é necessário arredondar ou decompor o valor.


*******************************************************************************/

#include <stdio.h>

int main()
{
   
    int valor=100;
    float poupanca=0.005, saldo=0;

    //printf("Valor depositado no mês %d", mes);
    //valor = 100;
    
    for(int i=1;i<=24;i++){
      
      //Deposita o valor
      saldo += valor;
      
      //Acumula Juros
      saldo += saldo*poupanca;
    printf("Mês %d: R$%.2f\n", i, saldo);

      
    }
    printf("O valor acumulado durante os 2 anos foi: %.2f", saldo);
    
}


