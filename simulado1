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





