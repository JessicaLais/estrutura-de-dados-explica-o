#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    FILE *f;
            //"nome do arquivo", "modo de abrir o arquivo"
    f = fopen("teste.dat", "w");
    if(f == NULL){//verificar se a leitura do arquivo deu certo
        perror("Nao foi possivel abrir o arquivo");//perror serve para
        exit(1);
    }
    Pessoa p;
    p.nome ="joao"
    p.cpf = 05129107032
    p.dat_nascimento = "11/11/1111"
    //fclose(f); encerra o arquivo//

    chat *txt = "texto na tela";
     fwrite(txt, sizeof(char), 14 , f);//escrevdno 14 caracteres
    }

    fclose(f);
    exit(0);//encerra a execução do programa retornando no codigo//

