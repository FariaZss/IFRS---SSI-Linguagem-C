/******************************************************************************

Sistema de lancheria
Uma lancheria possui o seguinte cardápio:
Código   Produto             Preço
100      Cachorro Quente     11,00
101      Bauru Simples       13,00
102      Bauru com Ovo       15,00
103      Hamburger           11,00
104      Cheeseburger        13,00
105      Refrigerante         3,00
    
Escreva um programa que:
Leia repetidamente o código do item e a quantidade desejada;
Calcule o valor parcial do item e acumule o total a pagar;
Encerre a leitura quando for digitado um código fora do intervalo entre 100 e 105;
Ao final, mostre o valor total do pedido.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int codigo, qtdProd;
  float valorParcial, valorTotal, preco;
  
  //tabela de produtos
    printf("Código     Produto         Preço\n");
    printf("100      Cachorro Quente   11,00\n");
    printf("101      Bauru Simples     13,00\n");
    printf("102      Bauru com Ovo     15,00\n");
    printf("103       Hamburger        11,00\n");
    printf("104      Cheeseburger      13,00\n");
    printf("105      Refrigerante       3,00\n");

    printf("\n\n\n");
    
    do{
    printf("Informe o código do produto que deseja: ");
            scanf("%d", &codigo);

    printf("Informe a quantidade deste produto: ");
            scanf("%d", &qtdProd);
            
    switch (codigo){
        case 100:
            valorParcial += qtdProd*11.00;
                printf("+ %d Cachorro Quente: %.2f \n", qtdProd, valorParcial);
                break;
        case 101:
            valorParcial += qtdProd*13.00;
            printf("+ %d Bauru Simples: %.2f \n", qtdProd, valorParcial);
            break;
        case 102:
            valorParcial += qtdProd*15.00;
                printf("+ %d Bauru com Ovo: %.2f \n", qtdProd, valorParcial);
                break;
        case 103:
            valorParcial += qtdProd*11.00;
                printf("+ %d Hamburger: %.2f \n", qtdProd, valorParcial);
                break;
        case 104:
            valorParcial += qtdProd*13.00;
                printf("+ %d Cheeseburger: %.2f \n", qtdProd, valorParcial);
                break;
        case 105:
        valorParcial += qtdProd*3.00;
            printf("+ %d Refrigerante: %.2f \n", qtdProd, valorParcial);
            break;
        default:
            printf("Código inválido");
    }
            
  
    } while ((codigo >= 100)&&(codigo <= 105));
    
    valorTotal += valorParcial;
    
    printf("\n O valor total é: R$%.2f", valorTotal);
    
  
    
}


