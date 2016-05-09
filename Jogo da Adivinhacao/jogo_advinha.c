#include<stdlib.h>
#include<stdio.h>
#include<time.h>



int main(){
	
	int segundos = time(0);
	srand(segundos);
	
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

	
	
	
	int numerosecreto = 1 + (rand() % 100);
	int chute;
	int acertou = 0;
	int tentativa = 1;
	int pontos = 1000;
	
		printf("O jogo inicia com %d pontos, e a cada tentativa vc vai perdendo \
1 ponto\n\n", pontos);	
	
	while(!acertou){
		
	printf("Tentativa %d.\n", tentativa);
	printf("Digite um numero: ");
	scanf("%d", &chute);
	
		
	if(chute < 0){
		printf("Voce nao pode digitar numero negativo, perdeu 5 pontos.\n");
		pontos = pontos - 5;
		continue;
	}
	
	
	int acertou = (chute == numerosecreto);
	int maior = chute > numerosecreto;
	
	if(acertou){
		printf("Parabens vc acertou...\n");
		printf("\n");
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
		break;
	}
	else if(maior){
			
		printf("Seu chute foi %d, palpite muito alto diminui ai.\n", 
		chute);
		}
	
	else{
		printf("Ai cara vc chutou %d diminuiu demais.\n", chute);
		}
		tentativa++;	
	}
	
	pontos = pontos - tentativa+1;
	
	printf("Fim de Jogo.\n");
	printf("Voce acertou na %d tentativas.\n", tentativa);
	printf("Total de pontos: %d\n",pontos);	
}

