/******************************************************************************
2 - Escreva um programa que leia do usuário 6 valores INT a,b,c,d,e,f. (2,0pts)
a- Leitura dos valores e apresentar os resultados dos itens b,c,d (0,5pts)
    b- Escreva uma função que recebe como parâmetro os valores do tipo int
    A,B,C,D,E,F e retorne o maior elemento. (0,5 pts)
    c- Escreva uma função que recebe como parâmetro os valores do tipo int
    A,B,C,D,E,F e retorne a quantidade de elementos pares. (0,5 pts)
    d- Escreva uma função que recebe como parâmetro os valores do tipo float
    A,B,C,D,E,F e escreve na tela a SOMA dos valores (0,5pts)
Nota: os Programas devem conter comentários e o nome do autor.
Cada um dos programas deve escrever o nome do programador em algum
momento.

*******************************************************************************/
#include <stdio.h>

float numSoma(float a, float b, float c, float d, float e, float f){
    
    float soma;
    
    soma = a+b+c+d+e+f;
    
    return soma;
}

int numPar(int a, int b, int c, int d, int e, int f){
    
    int par=0;
    
    if(a%2==0) par++;
    if(b%2==0) par++;
    if(c%2==0) par++;
    if(d%2==0) par++;
    if(e%2==0) par++;
    if(f%2==0) par++;
    
    return par;
}

int maiorNum(int a, int b, int c, int d, int e, int f){
    
    int maior=a;
    int contador[6]; 
    
    if(maior<b) maior=b;
    if(maior<c) maior=c;
    if(maior<d) maior=d;
    if(maior<e) maior=e;
    if(maior<f) maior=f;

    return maior;
}


int main(){
    
    int a,b,c,d,e,f;
    
    printf("Informe 6 valores para as variáveis A,B,C,D,E,F\n");
    
    printf("Digite os valores: ");
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    printf("A: %d| B: %d| C: %d| D: %d| E: %d| F: %d\n", a, b, c, d, e, f);
    
    printf("O maior número é %d\n", maiorNum(a,b,c,d,e,f));
    
    printf("A quantidade de elementos pares é %d\n", numPar(a,b,c,d,e,f));
    
    printf("A soma dos valores é %.2f\n", numSoma(a,b,c,d,e,f));
    
    printf("\n\nDesenvolvido por Andrius Farias");
    
}




