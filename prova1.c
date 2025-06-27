*******************************************************************************
Questão 1: Faça um programa em linguagem C que execute as seguintes tarefas:
a) Peça ao usuário números inteiros positivos, deve parar de pedir números
quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
uma estrutura de repetição (for, while ou do.. while);b) Para cada número inteiro
positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
ímpares e a tabuada dos valores pares;
c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
todos os itens.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, resp, novoN=1;
    int mImpar=0, nImpar=0, nPar=0, maiorPar=2, menorPar=0, nTotal=0;

    printf("Informe números positivos inteiros. \n");
    printf("O programa será finalizado ao digitar 0\n");
    
        //Looping 
        do{
            
            printf("\nDigite: ");
                scanf("%d", &n);
            
            //Desconsidera o número 0
                if(n==0){
                    printf("Bye-bye\n");
                    continue;
                }
            
            //Valida negativo
            if(n < 0){
                printf("Informe um número positivo inteiro\n");
            }
           
            //Valida impar
            if(n % 2 != 0){

            printf("Divisores do N° %d: ", n);
                
                for(int i=1; i<=n; i++){
                    if(i % 2 != 0){
                        printf("%d, ", i);
                    }
                }
                
                nImpar++;
                mImpar += n;
                
            //Valida maior número par    
            } else {
               
                if (novoN) {
                    menorPar = maiorPar = n;
                    novoN = 0;
                } else {
                    if (n < menorPar) menorPar = n;
                    if (n > maiorPar) maiorPar = n;
                }
            
                printf("\nTabuada do N° %d\n", n);
                
                for(int i=1; i<=10; i++){
                    resp = i * n;
                    printf("%d x %d = %d\n", i, n, resp);
                }
                
                nPar++;
            }
            
        }while(n!=0);
        
        
    nTotal = nPar + nImpar;
    mImpar /= nTotal;

    
    
    printf("Quantidade par: %d\n", nPar);
    printf("Quantidade impar: %d\n", nImpar);
    printf("Quantidade total de numeros: %d\n", nTotal);
    printf("Média de numeros impares: %d\n", mImpar);
    printf("Menor número par: %d \n", menorPar); 
    printf("Maior número par: %d \n", maiorPar);
    

    printf("\n\n\n"); 
    printf("Desenvolvido por Andrius Farias");
    
    return 0;


}
===

/******************************************************************************
Questão 2: Cálculo de Investimento: O usuário deve informar:
i) o percentual de rendimento mensal de uma aplicação;
ii) o valor mensal de depósito;
iii) Meta a ser atingida (Valor objetivo).
Calcular em quantos meses a meta será atingida
Por exemplo, se o usuário informar que o rendimento mensal é 0,5%; o valor de
depósito mensal é de R$100,00; meta a ser atingida é 1000, (1 mil reais) teremos:

*******************************************************************************/

#include <stdio.h>

int main()
{
    float depositoM, saldo=0, metaValor;
    double percentualM, juros;
    int mes=0;
    
    printf("Informe um percentual de rendimento mensal: ");
        scanf("%lf", &percentualM);
    
    
    percentualM = percentualM / 100;  //Converte o percentual para decimal   
    
    printf("Informe um valor mensal de depósito: ");
        scanf("%f", &depositoM);
        
    printf("Informe o valor da meta: ");
        scanf("%f", &metaValor);
        
        
    printf("    Mês    |       Saldo              |   Método\n");
    printf("    %d      |        %.2f              |   \n", mes, saldo);
    
    //Soma dos depositos + juros
    do{
        mes++;
        juros += saldo * percentualM;
        saldo += juros + depositoM;
        
        printf("    %d      |        %f        |       %lf + %.f de deposito \n", mes, saldo, juros, depositoM);
        
    } while(saldo <= metaValor); //Looping até atingir o valor esperado
    
    printf("\n\nA meta final de %.2f foi atingida em %d meses.", metaValor, mes);
printf("\n\n\n");
printf("Desenvolvido por Andrius Farias");    

    return 0; 
}
==
/******************************************************************************
Questão 3: - Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.

Os votos são informados através de códigos.

Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são: 66666 para candidato A; 77777 para candidato B;
88888 para candidato C; 99999 para candidato D
Para prefeito os códigos são: 99 para candidato X , 88 para Candidato Y; 77 para
candidato Z;
111 = voto em branco (para ambas as votações);
-Outro valor: Voto Nulo;

Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois
para prefeito) leia os códigos do candidato que receberá o voto. O programa
deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.

Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os
votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições)
Votos válidos são todos os votos - nulos.

Lembre-se: os votos em branco e nulos podem ser diferentes nas duas
eleições.
a - Leitura correta dos dados;
b - Estrutura de repetição ;
c - Cálculo correto da Contagem de Votos ;

Nota: o Programa deve conter comentários e o nome do autor.
Ao FINAL deve ser exibido o nome do programador.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    //VARIAVEIS DE TOTAL
    int totalVotos=0, eleicao=14;
    
    //VARIAVEIS VEREADOR 
    int a=0, b=0, c=0, d=0;
    int verCod, verVB=0, verVN=0, verTotal=0;
    int verVotVal=0;
    float percentA=0, percentB=0, percentC=0, percentD=0, percentVerVB=0, percentVerVN=0;
    
    //VARIAVEIS PREFEITO
    int x=0, y=0, z=0;
    int prefCod, prefVB=0, prefVN=0, prefTotal=0;
    int prefVotVal=0;
    float percentPref=0, percentX=0,percentY=0,percentZ=0, percentPrefVB=0, percentPrefVN=0;
    
system("clear"); // Limpa a tela

    //LOOPING DE CONTADOR / ALTERNADO PAR OU IMPAR
    
    for(int count=1;count<=eleicao;count++){ 
        if((count % 2) != 0){ //LOOPING IMPAR   
                printf("====== ELEIÇÕES VEREADOR ======\n\n");
                printf("    Código     |   Candidato  \n");
                printf("    66666      |       A       \n");
                printf("    77777      |       B       \n");
                printf("    88888      |       C       \n");
                printf("    99999      |       D       \n");
                printf("     111       | Voto em Branco\n");
                printf("Outros dígitos |    Voto Nulo  \n");
            
                
                printf("Informe o código: "); 
                    scanf("%d", &verCod);
                
                verTotal++; //SOMA +1 NA CONTAGEM DE ELEICAO VEREADOR
                
                switch (verCod){
                    case 66666:
                        a++;
                        printf("+1 voto no candidato A\n");
                    break;
                    case 77777:
                        b++;
                        printf("+1 voto no candidato B\n");
                    break;
                    case 88888:
                        c++;
                        printf("+1 voto no candidato C\n");
                    break;
                    case 99999:
                        d++;
                        printf("+1 voto no candidato D\n");
                    break;
                    case 111:
                        verVB++;
                        printf("+1 voto em branco\n");
                    break;
                    default:
                        verVN++;
                        printf("+1 voto nulo\n");
                    break;
                }
        
        } else { // LOOPING PAR
                
            printf("====== ELEIÇÕES PREFEITO ======\n\n");
            printf("    Código      |   Candidato  \n");
            printf("    99          |       X       \n");
            printf("    88          |       Y       \n");
            printf("    77          |       Z       \n");
            printf("    111         | Voto em Branco\n");
            printf("Outros dígitos  |    Voto Nulo  \n");
        
            
            prefTotal++;//SOMA +1 NA CONTAGEM DE ELEICAO PREFEITO
            
            printf("Informe o código: "); 
                scanf("%d", &prefCod);
            
            switch (prefCod){
                case 99:
                    x++;
                    printf("+1 voto no candidato X\n");
                break;
                case 88:
                    y++;
                    printf("+1 voto no candidato Y\n");
                break;
                case 77:
                    z++;
                    printf("+1 voto no candidato Z\n");
                break;
                case 111:
                    prefVB++;
                    printf("+1 voto em branco\n");
                break;
                default:
                    prefVN++;
                    printf("+1 voto nulo\n");
                break;
            }
        }  
            
    
    }

      system("clear"); // Limpa a tela

        //TOTAIS
        totalVotos = verTotal + prefTotal;

        
        //RESULTADO VEREADOR
        verVotVal = verTotal - verVN;
        
        percentVerVB = ((float)verVB / verVotVal) * 100;
        percentVerVN = ((float)verVN / verVotVal) * 100;
        
        percentA = ((float)a / verVotVal) * 100;
        percentB = ((float)b / verVotVal) * 100;
        percentC = ((float)c / verVotVal) * 100;
        percentD = ((float)d / verVotVal) * 100;
        
        
        printf("======== ELEIÇÕES VEREADOR =======\n");
        printf("Candidato A: %d | %.f% \n", a, percentA);
        printf("Candidato B: %d | %.f% \n", b, percentB);
        printf("Candidato C: %d | %.f% \n", c, percentC);
        printf("Candidato D: %d | %.f% \n", d, percentD);
        printf("==================================\n");
        printf("Votos válidos nesta eleição: %d \n", verVotVal);
        printf("Votos em Branco: %d | %.f% \n", verVB, percentVerVB);
        printf("Votos Nulo: %d | %.f%\n", verVN, percentVerVN);
        printf("==================================\n");
        
     
        //VALIDA EMPATE
        int maiorVotoVer = a;
        
        if (b > maiorVotoVer) maiorVotoVer = b;
        if (c > maiorVotoVer) maiorVotoVer = c;
        if (d > maiorVotoVer) maiorVotoVer = d;
            
        int empateVer = 0;
        
        if (a == maiorVotoVer) empateVer++;
        if (b == maiorVotoVer) empateVer++;
        if (c == maiorVotoVer) empateVer++;
        if (d == maiorVotoVer) empateVer++;
            
        if (empateVer > 1) {
            printf("Houve empate entre os candidatos mais votados!\n");
        } else {
            printf("Não houve empate! Temos um ganhador!\n");
        
        if (a == maiorVotoVer){
            printf("O candidato A ganhou!\n");
            printf("==================================\n");
        } else if (b == maiorVotoVer){
            printf("O candidato B ganhou!\n");
            printf("==================================\n");
        } else if (c == maiorVotoVer){
            printf("O candidato C ganhou!\n");
            printf("==================================\n");
        } else if (d == maiorVotoVer){
            printf("O candidato D ganhou!\n");
            printf("==================================\n");
        }
        
        }
        
        printf("\n\n");
        
       //RESULTADO PREFEITO
        prefVotVal = prefTotal - prefVN;
        
        
        percentPrefVB = ((float)prefVB / prefVotVal) * 100;
        percentPrefVN = ((float)prefVN / prefVotVal) * 100;
        
        percentX = ((float)x / prefVotVal) * 100;
        percentY = ((float)y / prefVotVal) * 100;
        percentZ = ((float)z / prefVotVal) * 100;
        
        printf("======== ELEIÇÕES PREFEITO =======\n");
        printf("Candidato X: %d | %.f% \n", x, percentX);
        printf("Candidato Y: %d | %.f% \n", y, percentY);
        printf("Candidato Z: %d | %.f% \n", z, percentZ);
        printf("==================================\n");
        printf("Votos válidos nesta eleição: %d \n", prefVotVal);
        printf("Votos em Branco: %d | %.f% \n", prefVB, percentPrefVB);
        printf("Votos Nulo: %d | %.f%\n", prefVN, percentPrefVN);
        printf("==================================\n");
        
        
        //VALIDA EMPATE
        int maiorVotoPref = x;
        
        if (x > maiorVotoPref) maiorVotoPref = x;
        if (y > maiorVotoPref) maiorVotoPref = y;
        if (z > maiorVotoPref) maiorVotoPref = z;
            
        int empatePref = 0;
        
        if (x == maiorVotoPref) empatePref++;
        if (y == maiorVotoPref) empatePref++;
        if (z == maiorVotoPref) empatePref++;
            
            
        if (empatePref > 1) {
            printf("Houve empate entre os candidatos mais votados!\n");
        } else {
            printf("Não houve empate! Temos um ganhador!\n");
            
        
        
        //VALIDANDO GANHADOR            
        if (x == maiorVotoPref){
            printf("O candidato X ganhou!\n");
            printf("==================================\n");
        } else if (y == maiorVotoPref){
            printf("O candidato Y ganhou!\n");
            printf("==================================\n");
        } else if (z == maiorVotoPref){
            printf("O candidato Z ganhou!\n");
            printf("==================================\n");
        }
        
        }

        printf("\n\n\n");
        printf("Desenvolvido por Andrius Farias");

    return 0;

        //RESPONSÁVEL
        //Andrius Farias

    
    
}//FINAL DO ARQUIVO
