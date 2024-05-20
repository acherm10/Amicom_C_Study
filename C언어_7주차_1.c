#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    printf("int a; \n");
    printf("int *ptr = &a\n");

    for(int i = 2; i <= N; i++){
        printf("int ");
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("ptr%d = &ptr", i);
        if(i > 2){
            printf("%d", i-1);
        }
        printf(";\n");
    }

}