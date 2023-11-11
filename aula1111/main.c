#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <type.h>
#include "tabelas_hash.h"

int main(int argc, char const *argv[])
{
   char** tabela = tabela_hash();

   tabela_hash_put("abelha", "mel", tabela);
   tabela_hash_put("bola", "futebol", tabela);

   printf("Abelha => %s\n", tabela_hash_get("Abelha", tabela));
   printf("Bola => %s\n", tabela_hash_get("BALA", tabela));
exit(0);
}
