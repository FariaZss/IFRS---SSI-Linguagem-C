/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float calc;
    int codigo, qtdProd;
    
    printf("-------------- CARDAPIO --------------\n");
    printf("Código  Especificação   Preço Unitário\n");
    printf("100      Cachorro Quente    R$10,00   \n");
    printf("101     Bauru Simples       R$13,00   \n");
    printf("102      Bauru c/ ovo       R$16,00   \n");
    printf("103        Hambuguer        R$14,00   \n");
    printf("104       Cheeseburguer     R$16,00   \n");
    printf("105        Refrigerante      R$4,00   \n");
    printf("--------------------------------------");
    
    printf("\nEscolha um produto: ");
    scanf("%d", &codigo);
    
    printf("\nInforme quantos deste produto você deseja comprar: ");
    scanf("%d", &qtdProd);
    
    switch(codigo){
        case 100:
            calc = qtdProd * 10.00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        case 101:
            calc = qtdProd * 13.00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        case 102:
            calc = qtdProd * 16,00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        case 103:
            calc = qtdProd * 14,00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        case 104:
            calc = qtdProd * 16,00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        case 105:
            calc = qtdProd * 4,00;
            printf("\nO valor a ser pago é: %.2f", calc);
            break;
        default:
        printf("\nOpção inválida");
        
    }
}

