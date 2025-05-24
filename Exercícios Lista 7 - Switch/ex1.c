/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int cep;
    
    printf("Informe o CEP de destino: ");
    scanf("%d", &cep);
    
    switch (cep){
        case 0:
        case 1:
        case 2:
        case 3:
            printf("Enviar para: Região Sudeste (SP, RJ, ES, MG)");
            break;
        case 4:
            printf("Enviar para: Região 4 (BA, SE)");
            break;
        case 5: 
            printf("Enviar para: Região 5 (PE, AL, PB, RN)");
            break;
        case 6:
            printf("Enviar para: Região 6 (CE, PI, MA, PA, AP, AM, RR, AC ) ");
            break;
        case 7:
            printf("Enviar para: Região 7 (DF, GO, TO, MT, RO, MS)");
            break;
        case 8:
        case 9:
            printf("Enviar para: Região Sul (PR, SC, RS)");
            break;
        default:
            printf("CEP inválido");
    }
}

