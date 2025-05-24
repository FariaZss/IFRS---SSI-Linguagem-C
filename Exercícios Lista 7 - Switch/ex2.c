/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, calc;
    char op;
    
    printf("Informe a operação que você deseja: ");
    scanf("%c", &op);
   
    printf("Informe o valor 1: ");
    scanf("%d", &n1);
    
    printf("Informe  o valor 2: ");
    scanf("%d", &n2);
    

    switch(op){
        case '+':
            calc = n1 + n2;
            printf("O valor do cálculo é: %d", calc);
            break;
        case '-':
            calc = n1 - n2;
            printf("O valor do cálculo é: %d", calc);
            break;
        case '*':
            calc = n1 * n2;
            printf("O valor do cálculo é: %d", calc);
            break;
        case '/':
            calc = n1 / n2;
            printf("O valor do cálculo é: %d", calc);
            break;
        
    }
}

