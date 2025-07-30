/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 5

typedef struct Funcionarios{
    char nome[100], cargo[50];
    int salario, jornada;
    
} FUNCIONARIOS;

int main()
{
    Funcionarios func[5];
    
    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        strcpy(func[i].nome, "NULL");
        strcpy(func[i].cargo, "NULL");
        func[i].salario = 0;
        func[i].jornada = 0; 
    }
    
    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        printf("Informe o nome do funcionario: "); scanf("%s", func[i].nome);
        printf("Informe o cargo do funcionario: "); scanf("%s", func[i].cargo);
        printf("Informe o salario do funcionario: "); scanf("%d", func[i].salario);
        printf("Informe a jornada em horas do funcionario: "); scanf("%d", func[i].jornada);
    }
    
    
    
    
    
    return 0;
}
