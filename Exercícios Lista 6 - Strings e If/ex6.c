#include <stdio.h>
#include <string.h>

/**
 * 
 * 6 - Escreva um programa que leia duas strings, compare as duas e indique o 
 * tamanho de cada string informada, o espaço em memória ocupado por cada variável. 
Concatenar as duas strings. Antes de concatenar, verifique se a string de 
destino tem  espaço suficiente para a concatenação, caso o espaço não seja 
suficiente, escreva uma mensagem de erro.

**/

int main(){

    char str1[10], str2[10];
    
    int sizePalavra1, sizePalavra2, memPalavra1, memPalavra2;

    printf("\nSe expresse com duas palavras!\n");

    //printf("\nDigite a primeira palavra: ");
    //    fgets(str1, stdin);
    
    printf("Digite uma palavra: ");
        fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove o '\n' do fgets
    
    printf("\nDigite a segunda palavra: ");
        fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';
            
    memPalavra1 = strlen(str1);
    memPalavra2 = strlen(str2);
    
    sizePalavra1 = sizeof(str1);
    sizePalavra2 = sizeof(str2);

    printf("\nO espaço da palavra 1 é de %d bytes\n",sizePalavra1);
        printf("\nO espaço da palavra 2 é de %d bytes\n",sizePalavra2);
    
    printf("\nO tamanho da palavra 1 é de: %d \n",memPalavra1);
        printf("\nO tamanho da palavra 2 é de: %d \n",memPalavra2);
    
    
    if (memPalavra1 == memPalavra2){
        printf("\nO tamanho das palavras são iguais\n");
    } else {
        printf("\nO tamanho das palavras são diferentes\n");
    }
    
    if ((memPalavra1 + memPalavra2) < sizePalavra1){
        strcat(str1, str2);
        printf("\nSua frase é: %s", str1);
    } else {
        printf("Espaço na memória insuficiente");
    }
    
    
}





