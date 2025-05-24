/**
 * 5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00

Escrever um programa que leia o código do item pedido, a quantidade e calcule o
valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.

Ao final escreva um resumo do pedido:
Ex
" Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00"


    printf("Pedido: %f unidade(s) de %s", qtdProd, nomeProd);
*/
#include <stdio.h>
#include <string.h>

int main()
{
    
    char codProd[4], nomeProd[100];
    float pcoUnit, valorTotal, qtdProd;
    
    printf("\n  Cardápio  ");
    printf("\n------------------------------------------");
    printf("\n100 - Cachorro Quente ");
    printf("\n101 - Bauru simple ");
    printf("\n102 - Bauru c/ovo ");
    printf("\n103 - Hamburger ");
    printf("\n104 - Cheeseburger ");
    printf("\n105 - Refrigerante ");
    
    printf("\nInforme quais produtos você deseja comprar: ");
        gets(codProd);
        
        
    printf("\nInforme quantos deste produto você comprou: ");
        scanf("%f", &qtdProd);
    
    
    if(strcmp(codProd,"100") == 0){
        //printf("\nCachorro Quente");
            strcpy(nomeProd, "Cachorro Quente");
            pcoUnit = 5.00;
            
    } else if(strcmp(codProd,"101") == 0){
       strcpy(nomeProd, "Bauru Simples");
            pcoUnit = 6.00;

    } else if (strcmp(codProd,"102") == 0){
       strcpy(nomeProd, "Bauru C/ Ovo");
            pcoUnit = 8.00;
    } else if (strcmp(codProd,"103") == 0){
       strcpy(nomeProd, "Hamburger");
            pcoUnit = 5.00;
    } else if (strcmp(codProd,"104") == 0){
       strcpy(nomeProd, "Cheeseburger");
            pcoUnit = 7.50;
    } else if (strcmp(codProd,"105") == 0){
       strcpy(nomeProd, "Refrigerante");
            pcoUnit = 2.00;
    } else {
        printf("Erro não identificado");
    }

    valorTotal = (pcoUnit * qtdProd);

    
    printf("Pedido: %.0f unidade(s) de %s", qtdProd, nomeProd);
    
    printf("\nO valor pago pelo lanche é de R$%.2f", valorTotal);


    }        


