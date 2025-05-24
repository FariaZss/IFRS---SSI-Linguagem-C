/******************************************************************************
Música dos Elefantes (se balançando)
Escreva um programa que imprima a letra da música “Elefantes se balançavam” até o número informado pelo usuário.
Use um laço de repetição (for, while ou do while).
O padrão da música deve seguir:

1 elefante se balançava numa teia de aranha,
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

2 elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Foram chamar outro elefante.

...

N elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Todos foram para o chão!
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i=0;
        
    printf("Informe um número: ");
        scanf("%d", &n);
    
    printf("1 elefante se balançava numa teia de aranha,\n");
    printf("Mas como a teia não se arrebentou,          \n");
    printf("Foi chamar outro elefante.                  \n");
    
    //printf("\n");
    
    for(i=2;i<n;i++){
        printf("\n");
        printf("%d elefantes se balançavam numa teia de aranha,\n", i);
        printf("Mas como a teia não se arrebentou,            \n");
        printf("Foram chamar outro elefante.                  \n");
        
        
    }
    
    if(n==i){
            printf("\n");
            printf("%d elefantes se balançavam numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,            \n");
            printf("Todos foram para o chão!                      \n");
        }
     return 0;
}

