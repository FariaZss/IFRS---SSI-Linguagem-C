/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float calc, salario, salarioN;
    int codigo;

    printf("-----------------------------\n");
    printf("Código  Cargo       Aumento  \n");
    printf("1     Escriturário  30%   \n");
    printf("2     Secretário    25%   \n");
    printf("3       Caixa       20%   \n");
    printf("4       Gerente     10%   \n");
    printf("5       Diretor     0    \n");
    printf("-----------------------------\n");
    
    printf("\nInforme seu cargo: ");
    scanf("%d", &codigo);
    
    printf("\nInforme seu salario: ");
    scanf("%f", &salario);
    
    switch(codigo){
        case 1:
            calc = salario * 0.30;
            salarioN = salario + calc;
            printf("\nO novo salário é %.2f", salarioN);
            break;
        case 2:
            calc = salario * 0.25;
            salarioN = salario + calc;
            printf("\nO novo salário é %.2f", salarioN);
            break;
        case 3:
            calc = salario * 0.20;
            salarioN = salario + calc;
            printf("\nO novo salário é %.2f", salarioN);
            break;
        case 4:
            calc = salario * 0.10;
            salarioN = salario + calc;
            printf("\nO novo salário é %.2f", salarioN);
            break;
        case 5:
            printf("\nO novo salário é %.2f", salario);
            break;
        default:
        printf("\nOpção inválida");
        
    }
}

