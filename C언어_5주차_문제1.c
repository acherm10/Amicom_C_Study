
#include <stdio.h>

void evenodd(int A){

    if(A % 2 == 0){
        printf("짝수입니다.\n");
    }
    else if(A % 2 == 1){
        printf("홀수입니다.\n");
    }
    else{
        printf("error\n");
    }
}

int main(){

    int A;
    scanf("%d", &A);
    evenodd(A);
}
    