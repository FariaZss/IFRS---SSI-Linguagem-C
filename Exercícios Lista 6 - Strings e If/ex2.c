
/**
2 - escreva um programa que cria uma string, peça para o usuário digitar 
uma palavra. se a palavra digitada for "senha secreta", escreva a mensagem: 
"senha correta", senão escreva "senha incorreta". 
**/

#include <stdio.h>
#include <string.h>

int main()
{
    
    char palavra[] = "senha secreta";
    char palavraUsuario[100];

    printf("\n Digite uma palavra ou frase: \n");
        gets(palavraUsuario);
        
    //strcmp = palavra
    if (strcmp(palavraUsuario, palavra) == 0) {
        printf("Ok");
    } else {
        printf("Errado");
    }
    
}
