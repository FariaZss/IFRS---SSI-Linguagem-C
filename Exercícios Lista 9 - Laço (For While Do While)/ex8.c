/******************************************************************************

Apuração de votos
Em uma eleição presidencial há três candidatos. Os votos são registrados por meio de códigos:
Código  Candidato
1       Zezinho
2       Huguinho
3       Luizinho
4       Voto em Branco
5       Voto Nulo
    
Escreva um programa que:
Leia votos (códigos) até que seja digitado o valor 0, o que encerra a votação;
Desconsidere votos com códigos inválidos (diferentes de 0 a 5);
Ao final, exiba:
Total de votos para cada candidato;
Total de votos nulos e em branco;
Nome do candidato vencedor (em caso de empate, indique que houve empate).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int votos=0, 
        vZezinho=0, 
        vHuguinho=0,
        vLuizinho=0,
        vBranco=0,
        vNulo=0,
        codigo;
    
    printf(" Código --- Candidato --- \n");
    printf("    1        Zezinho      \n");
    printf("    2       Huguinho      \n");
    printf("    3       Luizinho      \n");
    printf("    4     Voto em Branco  \n");
    printf("    5       Voto Nulo     \n");

    do{
            printf("\nVote em um candidato\n\n");
            
            do {
            printf("Digite o codigo: ");
                scanf("%d", &codigo);
               
            
                switch(codigo){
                    case 0: 
                    
                    break;
                        
                    case 1:
                        votos++;
                        vZezinho++;
                            printf("+1 voto para Zezinho\n");
                    break;
                    
                    case 2:
                        votos++;
                        vHuguinho++;
                            printf("+1 voto para Huguinho\n");
                    break;
                    
                    case 3:
                        votos++;
                        vLuizinho++;
                            printf("+1 voto para Luizinho\n");
                    break;
                    
                    case 4:
                        votos++;
                        vBranco++;
                            printf("+1 voto em branco\n");
                    break;
                
                    case 5:
                        votos++;
                        vNulo++;
                            printf("+1 voto nulo\n");
                    break;
                    
                    default:
                            printf("Código inválido\n");
                }
              
              
                
            } while(codigo != 0);
            
        
            printf("O total de votos é: %d \n", votos);
            
            printf("O candidato Zezinho recebeu %d votos \n", vZezinho);
            printf("O candidato Huguinho recebeu %d votos \n", vHuguinho);
            printf("O candidato Luizinho recebeu %d votos \n", vLuizinho);
            printf("Votos em branco: %d \n", vBranco);
            printf("Votos nulos: %d \n", vNulo);
            
          
            if((vZezinho>vLuizinho)&&(vZezinho>vHuguinho)){
                printf("O candidato Zezinho ganhou");
            }else if((vHuguinho>vZezinho)&&(vHuguinho>vLuizinho)){
                printf("O candidato Huguinho ganhou");
            }else if((vLuizinho>vZezinho)&&(vLuizinho>vHuguinho)){
                printf("O candidato Luizinho ganhou");
            } else if((vLuizinho>vZezinho)&&(vLuizinho>vHuguinho)){
                printf("Há mais votos em branco do que em candidatos");
            } else if((vLuizinho>vZezinho)&&(vLuizinho>vHuguinho)){
                printf("Há mais votos nulos do que em candidatos");
            }else{
                printf("Os candidatos empataram\n");
            
            
              //Empate Zezinho
            if((vZezinho==vHuguinho)>vLuizinho){
                printf("Os candidatos Zezinho e Huguinho empataram\n") ;       
            } else if((vZezinho==vLuizinho)>vHuguinho){
                printf("Os candidatos Zezinho e Luizinho empataram\n");        
            } else if((vHuguinho==vLuizinho)>vZezinho){
                printf("Os candidatos Huguinho e Luizinho empataram\n");        
            }
    }
    }while(vZezinho!=vLuizinho!=vHuguinho);
    return 0;
    }


