//백준 1330

#include <stdio.h>

int A, B;

int main(){
    scanf("%d %d", &A, &B);

    if(A > B){
        printf(">\n");
    }

    if(A < B){
        printf("<\n");
    }

    if(A == B){
        printf("==\n");
    }

    return 0;
}