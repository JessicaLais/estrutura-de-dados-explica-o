#include <stdio.h>
#include <stdlib.h>

typedef struct P{
    int x;
    int y;
}P;//ESSE P SERVE PARA PODER DEIXAR CRIAR UMA VARIAVEL LA NO "P ponto", pode ser qualquer outra letra//

int main(int argc, char* argv[]){
    P ponto;
    ponto.x = 1;
    ponto.y = 2;
    printf("(%d, %d)", ponto.x, ponto.y);
    
    int qtd_pontos = atoi(argv[1]);
    P* pontos = malloc(sizeof(P)*qtd_pontos);
    for(int i= 0;i < qtd_pontos; i++){
        scanf("%d", &pontos[i].x);
        scanf("%d", &pontos[i].y);
    }
    for(int i = 0; i < qtd_pontos; i++){
        printf("(%d, %d)\n", pontos[i].x, pontos[i].y);
    }
    
    return 0;
}

