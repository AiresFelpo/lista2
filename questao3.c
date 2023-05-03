#include <stdio.h>

#define MIN_TIMES 3
#define MAX_TIMES 9
#define MIN_JOGADORES 6
#define MAX_JOGADORES 11

int main() {
    int num_times, num_jogadores, idade, peso, i, j, count_idade, count_peso;
    float media_idade, media_peso;
    
    do {
        printf("Digite o número de times participantes (entre %d e %d): ", MIN_TIMES, MAX_TIMES);
        scanf("%d", &num_times);
    } while (num_times < MIN_TIMES || num_times > MAX_TIMES);
    
    count_idade = 0;
    count_peso = 0;
    
    for (i = 1; i <= num_times; i++) {
        printf("\nTime %d\n", i);
        
        do {
            printf("Digite o número de jogadores inscritos (entre %d e %d): ", MIN_JOGADORES, MAX_JOGADORES);
            scanf("%d", &num_jogadores);
        } while (num_jogadores < MIN_JOGADORES || num_jogadores > MAX_JOGADORES);
        
        media_idade = 0;
        media_peso = 0;
        
        for (j = 1; j <= num_jogadores; j++) {
            printf("\nJogador %d\n", j);
            
            printf("Digite a idade do jogador: ");
            scanf("%d", &idade);
            media_idade += idade;
            
            printf("Digite o peso do jogador: ");
            scanf("%d", &peso);
            if (idade > 25 && peso > 80) {
                count_peso++;
            }
            
            if (idade < 18) {
                count_idade++;
            }
        }
        
        media_idade /= num_jogadores;
        printf("Média de idade dos jogadores do time %d: %.2f\n", i, media_idade);
        
        media_peso /= num_jogadores;
        printf("Média de peso dos jogadores acima de 25 anos do time %d: %.2f\n", i, media_peso);
    }
    
    printf("\nEstatísticas gerais:\n");
    
    printf("Quantidade de jogadores menores de idade (18 anos): %d\n", count_idade);
    
    float porcentagem_peso = (float) count_peso / (num_times * num_jogadores) * 100;
    printf("Quantidade de jogadores com mais de 80 quilos: %d (%.2f%%)\n", count_peso, porcentagem_peso);
    
    return 0;
}