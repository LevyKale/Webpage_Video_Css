#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define MAX 30


void putNumbersIn(int *rPtr);
void modify(int *rPtr);


int main(void){

    int randomNUmbers[MAX] = {0};
    int *ptr = &randomNUmbers[0];

    srand(time(NULL));
    putNumbersIn(ptr);

    puts("Estes sao os numeros escolhidos: \n");
    for(size_t each = 0; each < MAX; each++){
        if(each == 29){
            printf("%d\n", randomNUmbers[each]);
        }else{
        printf("%d-", randomNUmbers[each]);
        }}

    puts("");
    puts("Agora vamos para o processo onde organizaremos os dados em ordem crescente: ");
    int sizeArr = sizeof(randomNUmbers) / sizeof(randomNUmbers[0]);
    srand(time(NULL));

    modify(ptr);

    puts("Todos os dados estao organizados agora!!");
    puts("");
    for(size_t each = 0; each < MAX; each++){
        if(each == 29){
            printf("%d\n", randomNUmbers[each]);
        }else{
        printf("%d-", randomNUmbers[each]);
    }}
}


void putNumbersIn(int *rPtr){

    for(size_t i = 0; i < MAX; i++){

        int pick = 10 + rand() % 91;
        *rPtr = pick;
        *rPtr++;
    }
}


void modify(int *rPtr){

    for(size_t i = 0; i < MAX - 1; i++){
        for(size_t j = 0; j < MAX - 1; j++){

            if(rPtr[j] > rPtr[j+1]){

                int hold = rPtr[j];
                rPtr[j] = rPtr[j+1];
                rPtr[j+1] = hold;

            }
        }
    }
}
