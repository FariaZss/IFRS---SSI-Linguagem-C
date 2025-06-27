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

==


/*
Criar uma matriz de inteiro de dimensão X (veja sobre o valor do X abaixo).
A matriz deve ser preenchida automaticamente, fazendo uso de laço, o primeiro número deve ser Y e ir
aumentando em Y unidades em cada célula.
********Você deve criar uma função que recebe como parâmetro a matriz e o número da coluna; essa função deve
        calcular a soma da coluna indicada.
Apresentar:
***a - A matriz preenchida (usando laço)
***b - Soma de cada uma das linhas; (usar função)
c - Média dos elementos; (usar laço)
d - Percorrer a matriz e verificar qual o Maior número ímpar; (usar laço)
e - Quantidade de números divisíveis por 3; (usar laço)
O programa deve imprimir o NOME e o CPF do programador.
Para calcular o X: pegue o segundo dígito do seu CPF, realize o resto da divisão por 6 e some 5; Por
exemplo, se o seu segundo dígito é 8, o resto da divisão por 6 é 2. Somando cinco dá 7.
Para calcular o Y: pegue o terceiro dígito do seu CPF e some 9. Se o seu terceiro dígito é 5, seu Y é 14.


CÁLCULO X E Y
870

7 mod 6 = 1 
1 + 5 = 6 = X

0 + 9  = 9
0 + 5 = 5 = Y


*/

#define DIMENSAO 6

#include <stdio.h>

//SOMA DAS COLUNAS
int somaColuna(int mtz[DIMENSAO][DIMENSAO], int y){
    
    int soma=0;
    int x;
    
    for(y=0;y<DIMENSAO;y++){
            soma = 0;
        for(x=0;x<DIMENSAO;x++){
            soma += mtz[x][y];
        }
        printf("A soma da coluna %d é %d\n", y, soma); 
    }

    return soma;
}

//SOMA DAS LINHAS
int somaLinha(int mtz[DIMENSAO][DIMENSAO], int x){
    
    int soma=0;
    int y;
    
    for(int x=0;x<DIMENSAO;x++){
            soma = 0;
        for(int y=0;y<DIMENSAO;y++){
            soma += mtz[x][y];
        }
            
        printf("A soma da linha %d é %d\n", x, soma); 
    }
    
    return soma;
}

int main(){

	int mtz[DIMENSAO][DIMENSAO];
    int x, y;
    int valorY = 5; 
    int count; // contador
    
    printf("\t\tMATRIZ 6X6 DE SOMA 5\n\n");
    
    
	for(x=0;x<DIMENSAO;x++){
		for(y=0;y<DIMENSAO;y++){
		    valorY += 5;
			mtz[x][y] = valorY;
			printf("\t%4d ", mtz[x][y]);
			
		
		}
	    printf("\n\n");
	}
	
	for(x=0;x<DIMENSAO;x++){
	    
	}
    
        
    somaColuna(mtz, y);
    somaLinha(mtz, x);
    
    printf("\n");

	return 0; 
}






