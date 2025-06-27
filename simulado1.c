/******************************************************************************
Questão 1(5,0): Desenvolver um programa que cria uma matriz 7 X 7 de INT e
efetuar as seguintes operações:
O programa deve preencher automaticamente a matriz com múltiplos de 7, iniciando
no 7 conforme segue:
Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*7

*****a) preenchimento correto da matriz e exibir corretamente a matriz (0,5pts). (usar repetição)
*****b) Apresentar o maior Elemento da matriz (usar repetição). (1pt)
*****c) Quantidade de elementos pares diagonal principal (usar repetição) (1pt)
*****d) MÉDIA dos elementos de cada linha (usar repetição), apresentar a MÉDIA de cada linha (1pt)

*****e) Definir função que calcula a quantidade números ímpares de uma coluna
    (função recebe a matriz como parâmetro e o número da coluna)
*****f) Usando a função definida no item e, definir função que calcula a
    quantidade de números ímpares da matriz (definir função que recebe a
    matriz como parâmetro)
*****g) Apresentar o resultado dos itens b/c/d/e/f
*******************************************************************************/

#define dimensao 7


#include <stdio.h>

//FUNCAO QUE MOSTRA IMPARES DE UMA COLUNA DA MATRIZ
int imparColuna(int mtz[7][7], int coluna){
    
    int qtdImpar=0, linha;

    for(linha=0;linha<dimensao;linha++){
        if((mtz[linha][coluna])% 2 == 1){
            qtdImpar++;
        }
    }

    return qtdImpar;
}

//FUNCAO QUE MOSTRA TODOS OS IMPARES DA MATRIZ
int impares(int mtz[7][7]){
    
    int resp=0, coluna;
    
    for(coluna=0;coluna<7;coluna++){
        resp=resp+imparColuna(mtz, coluna);
    }    
    
    return resp;
}

//FUNCAO QUE MOSTRA A MATRIZ
void mostraMatriz(int mtz[dimensao][dimensao]){
    
    int somaLinha;
    int maior=0, media=0, qtdPar=0;
    int linha, coluna;
    
    //CRIA A MATRIZ
    for( linha=0;linha<7;linha++){
        for( coluna=0;coluna<7;coluna++){
            mtz[linha][coluna]=(linha*dimensao+coluna+1)*7;
        
        }
    }
    
    maior = mtz[0][0];
    
    //PRINTA A MATRIZ
    
    for( linha=0;linha<7;linha++){
        for( coluna=0;coluna<7;coluna++){
            printf("\t %d ", mtz[linha][coluna]);
            
            if(mtz[linha][coluna] > maior){
                maior = mtz[linha][coluna];
            }
        }
    printf("\n\n"); 
    }
    
    //SOMA LINHA E FAZ MEDIA
    
    for(linha=0;linha<7;linha++){
            somaLinha=0;
        for(coluna=0;coluna<7;coluna++){
            somaLinha += mtz[linha][coluna];
        }
            media+=somaLinha / dimensao;
            printf("A média das linhas é: %d\n", media);
    }
    printf("A quantidade de números pares na diagonal principal é: %d\n", qtdPar);
    printf("O maior número é: %d\n", maior);

}

int main(){
    
    int mtz[dimensao][dimensao];
    int qtdPar=0, qtdImpar=0, media=0; 
    int linha, coluna, maior, menor, somaLinha;
    
    
    printf("\t\t\t Matriz 7 x 7 \n\n");
    
    mostraMatriz(mtz);
    
    for(coluna=0;coluna<7;coluna++){
        printf("Impares da coluna %d: %d\n", coluna, imparColuna(mtz,coluna));
    } 
    
    printf("Total de impares: %d", impares(mtz));
    
    return 0;
}

==


/******************************************************************************
    a) preenchimento correto da matriz/exibir corretamente a matriz
    b) Média dos elementos da diagonal secundária (usar repetição).
    c) SOMA dos elementos da diagonal principal (usar repetição)
    d) Média dos elementos de cada coluna (usar repetição), apresentar a média de cada coluna
e) Encontrar a Média da matriz valor (definir função que recebe a matriz como parâmetro)
f) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 5 valor (definir função que recebe a matriz
como parâmetro)
*******************************************************************************/
#define dimensao 4

#include <stdio.h>

int mediaMtz(int mtz[4][4]){
    
    int media=0, soma=0;
    int i, j; 
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            soma+=mtz[i][j];
        }
    }
    
    media = soma/dimensao;
    
    printf("\nA média da matriz é %d\n", media);

        
    return 0;
}

int main()
{

    int mtz[4][4];
    int i, j;
    int media, somaDiagSec=0, somaDiagPrinc=0, somaCol=0;
    int diagSec, diagPrinc;
    
    printf("\t\tMatriz 4x4\n\n");
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mtz[i][j]=(i*dimensao+j+1)*dimensao;
            printf("\t%d ", mtz[i][j]);
        }
        printf("\n\n");
    }
    
    //DIAGONAL PRINCIPAL E SECUNDÁRIA
    
    //MÉDIA DIAGONAL SECUNDÁRIA
    for(i=0;i<4;i++){
        diagSec=mtz[i][j-i-1];
        somaDiagSec+=diagSec;
        printf("O valor da diagonal secundária na posição %d é %d\n", i, diagSec);
    }
    printf("\n");
    media = somaDiagSec / dimensao;
    printf("A média da diagonal secundária é %d\n", media);
        
    //SOMA DIAGONAL PRINCIPAL 
    for(i=0;i<4;i++){
        diagPrinc=mtz[i][i];
        somaDiagPrinc+=diagPrinc;
    }
    
    printf("A soma da diagonal principal é %d\n\n", somaDiagPrinc);
    
    //SOMA DE CADA COLUNA E MÉDIA
    for(j=0;j<4;j++){
        somaCol=0;
        for(i=0;i<4;i++){
            somaCol+=mtz[i][j];
        }
        media=somaCol / dimensao;
        printf("A média da coluna %d: %d\n", j, media);
    }
    
    mediaMtz(media);
    
    return 0;
}

==

/*2 - Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)
*****a- Leitura dos valores (0,5pts)
*****b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
     maior valor ímpar. (0,5 pts)
*****c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
     menor valor par. (0,5 pts)
*****d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a média inteira dos valores (0,5pts)
Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d.
================================================================================================*/

#include <stdio.h>

int menorPar(int a, int b, int c, int d, int e, int f,int g){
    
    int menor;
    
    
    menor = a;

    if(menor > b) menor=b;
    if(menor > c) menor=c;
    if(menor > d) menor=d;
    if(menor > e) menor=e;
    if(menor > f) menor=f;
    if(menor > g) menor=g;
    
    return menor;
}


int maiorImpar(int a, int b, int c, int d, int e, int f,int g){
    
    int maior;
    
    maior = a;
    
    if((maior % 2) == 0) {
        if(maior < b) maior=b;
        if(maior < c) maior=c;
        if(maior < d) maior=d;
        if(maior < e) maior=e;
        if(maior < f) maior=f;
        if(maior < g) maior=g;
    }

    return maior;   
}

int main(){
    
    int a, b, c, d, e, f, g;
    
    printf("Informe valores para as variaveis a, b, c, d, e, f, g\n");
    
    printf("Digite: ");
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
        
    printf("O maior valor Impar é %d\n", maiorImpar(a, b, c, d, e, f, g));
    printf("O menor valor par é %d\n", menorPar(a, b, c, d, e, f, g));
    
    
}










