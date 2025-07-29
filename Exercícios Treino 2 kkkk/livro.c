#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LIVROS 100

Livro biblioteca[MAX_LIVROS];

/*DECLARANDO ESTRUTURAS E REGISTROS*/
typedef struct{

    int codigo;
    char titulo[100];
    char autor[100];
    int ano_publicacao;

} Livro;

int cadastraLivro(){
    Livro l;

    //l.codigo++;
    printf("Informe o titulo do livro: "); scanf(" %99[^\n]", l.titulo);
    printf("Informe o nome do autor do livro: "); scanf(" %99[^\n]", l.autor);
    printf("Informe o ano de publicacao do livro(ddmmAAAA)): "); scanf("%d", &l.ano_publicacao);

}

int main(void){

    int opcMenu;

    printf("\tLivraria\n");
    printf("1 - Cadastrar livro\n2 - Listar livros\n3 - Buscar livro\n4 - Remover livro\n0 - Sair\n");
    getc(opcMenu);


    switch(opcMenu){
        case 1:
            cadastraLivro();
            break;
        case 2:
            //listaLivro();
            break;
        case 3: 
            //buscaLivro();
            break;
        case 4:
            //removeLivro();
            break;
        case 0:
            printf("Saindo\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}