/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N1, N2, compara;
        
    printf("Informe um valor: ");
    scanf("%d", &N1);
    
    printf("Informe um valor: ");
    scanf("%d", &N2);
    
    if(N1 > N2){
        printf("O número %d é maior.", N1);
    } else if (N1 == N2){
        printf("Os números são iguais.");
    } else {
        printf("O número %d é maior.", N2);
    }
}

==

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int NumPar;
    
    printf("Digite um valor: ");
    scanf("%d", &NumPar);
    
    if((NumPar % 2) == 0){
        printf("O número %d é par.", NumPar);
    } else {
        printf("O número %d é ímpar.", NumPar);
    }
}


==

#include <stdio.h>
#include <string.h>
int main()
{ 
    char login[100], senha[20];
    char user[] = "admin";
    char passwd[] = "1234";
    
    printf("Informe o usuário: ");
    scanf("%s", login);
    
    printf("Informe a senha: ");
    scanf("%s", senha); 
    
    if((strcmp(login,user) == 0) && (strcmp(passwd, senha) == 0)){
        printf("Login realizado com sucesso!");
    } else {
        printf("Usuário ou senha incorretos.");
    }
   
}

==

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{ 
   int N1, N2, soma, mult, divi, sub, operacao;
   
   printf("Digite um valor: ");
   scanf("%d", &N1);
   
   printf("Digite mais um valor: ");
   scanf("%d", &N2);
   
   printf("Informe a operação que deseja ( 1 - soma | 2 - subtracao | 3 -  multiplicacao | 4 - divisao ): ");
   scanf("%d", &operacao);
   
   if (operacao == 1){
        printf("Operação: Soma");
       
        soma = N1 + N2;
       
        printf("\nO resultado é: %d", soma);
        
   } else if (operacao == 2){
        printf("Operação: Subtracao");
       
        sub = N1 - N2;
       
        printf("\nO resultado é: %d", sub);
        
    } else if (operacao == 3){
        printf("Operação: Multiplicacao");
       
        mult = N1 * N2;
       
        printf("\nO resultado é: %d", mult);
        
    } else if (operacao == 4){
        printf("Operação: Divisao");
       
        divi = N1 / N2;
       
        printf("\nO resultado é: %d", divi);
    } else {
       printf("\nDados inválidos");
    }
    
}

==

#include <stdio.h>
#include <string.h>
int main()
{ 
   float nota;
   
   printf("Informe a nota final do aluno: ");
   scanf("%f", &nota);
   
   if(nota < 6){
       printf("Aluno reprovado");
   } else if (nota < 7){
       printf("Aluno em recuperacao");
   } else if (nota < 9.5){
      printf("Aluno aprovado");
   } else {
       printf("Aluno aprovado com excelência!!!");
   }
}


==

#include <stdio.h>
#include <string.h>
int main()
{ 
    int ano;
    
    printf("Informe um ano: ");
    scanf("%d", &ano);
    
    if(((ano % 4) == 0) && ((ano % 100) != 0)) {
        printf("O ano %d é bissexto.", ano);
    } else {
        printf("O ano %d não é bissexto.", ano);
    }
}

