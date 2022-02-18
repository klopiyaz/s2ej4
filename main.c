#include <stdio.h>
#include <stdlib.h>

void funcPrint(char *pstring);

int main(void){
    funcPrint("Sistemas Computacionales\n");
    return EXIT_SUCCESS;
}

void funcPrint(char *pstring){
    printf("%s\n",pstring);
}