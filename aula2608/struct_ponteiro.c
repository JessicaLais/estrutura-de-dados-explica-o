#include <stdio.h>
#include <stdlib.h>

typedef struct P{
    int x;
    int y;

}P;


int main(int argc, char* argv[]){

    int a = 3;
    int b = a;
    int *p = &a;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("p = %d\n", p);
    printf("&a = %d\n", &a);

    //ponteiro apontando para SOMENTE UM espaço de um inteiro na memoria//
    int* p1;

    p1 = malloc(sizeof(int));   //p1 = malloc(sizeof(int)*3);  //caberá 3 inteiros
    printf("p1 = %d\n", p1);
    printf("*p1 = %d\n", *p1);
    *p1 = 2;
    printf("*p1 = %d\n", *p1);

    //andar pra frente ou para tras usando ponteiro//

    p1++;
    *p1= 5;
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);

    //ou desse jeito também//
    p1[1]=7;
    printf("p1 = %p\n", &p1[1]);
    printf("p1 = %d\n", p1[1]);

    return 0;
}
