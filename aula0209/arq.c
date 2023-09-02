#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    FILE *f;
            //"nome do arquivo", "modo de abrir o arquivo"
    f = fopen("teste.txt", "w");
    if(f == NULL){//verificar se a leitura do arquivo deu certo
        perror("Nao foi possivel abrir o arquivo");//perror serve para
        exit(1);
    }
    //fclose(f); encerra o arquivo//

    int r = fprintf(f, "texto na tela");//stdout escrever na saída(terminal), o f faz
    if(r < 0 ){
        perror("ao foi posssivel escrever no arquivo");
        exit(1);
    }

    char txt[100];
    while (!feof(f)){
        fgets(txt,100,f);
        //fscanf(f, "%f,%f", txt);
        printf("%s\n", txt);
    }
    
    fclose(f);
    exit(0);//encerra a execução do programa retornando no codigo//
}
