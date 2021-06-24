#include <stdio.h>
#include <stdbool.h>

#define QTD 5

int resposta_sim(char resposta[]);
int resposta_nao(char resposta[]);
int resposta_mulheres_sim(char resposta[], char sexo[]);
bool gostaram(char resposta[]);

int main() {
   
    char resposta[QTD];
    char sexo[QTD];

    for (int i = 0; i < QTD; i++){
        printf("Qual o sexo: (M, F, T)\n");
        scanf("%s", &sexo[i]);
        printf("Gostou do produto ? (S ou N)\n");
        scanf("%s", &resposta[i]);
    }

    // Letra a
    printf("Numero de pessoas que responderam sim: ");
    printf("%i", resposta_sim(resposta));
    printf("\n");
    // Letra b
    printf("Numero de pessoas que responderam nao: ");
    printf("%i", resposta_nao(resposta));
    printf("\n");
    // Letra c
    printf("Numero de mulheres que responderam sim: ");
    printf("%i", resposta_mulheres_sim(resposta, sexo));
    printf("\n");
    // Letra D
    printf("Gostaram do produto: \n");
    if(gostaram(resposta)){
        printf("Siiim, gostaram !! \n");
    } else {
        printf("Não gostaram. \n");
    }
    return 0;
}

int resposta_sim(char resposta[]){
    int count = 0;
    for(int i = 0; i < QTD; i++){
        if (resposta[i] == 'S'){
            count = count + 1;
        }
    }
    return count;
}

int resposta_nao(char resposta[]){
    int count = 0;
    for(int i = 0; i < QTD; i++){
        if (resposta[i] == 'N'){
            count += 1;
        }
    }
    return count;
}

int resposta_mulheres_sim(char resposta[], char sexo[]){
    int count = 0;
    for(int i = 0; i < QTD; i++){
        if(sexo[i] == 'F' && resposta[i] == 'S'){
            count++;
        }
    }
    return count;
}

bool gostaram(char resposta[]){
    float razao = 1.0 * resposta_sim(resposta)/resposta_nao(resposta);

    if (razao >= 1.857){
        return true;
    } else {
        return false;
    }
}