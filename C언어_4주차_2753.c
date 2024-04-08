//백준 2753

#include <stdio.h>

int A;

int main(){

    scanf("%d", &A);

    if(A % 4 == 0 && A % 100 != 0){
        pirntf("1\n");
    }

    else if(A % 400 == 0){
        printf("1\n");
    }

    else{
        printf("0\n");
    }

    return 0;
}
