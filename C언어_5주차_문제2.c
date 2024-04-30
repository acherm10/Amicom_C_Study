
#include <stdio.h>

void printstar(int k){
    int i, j;

    for(i = 1; i <= k; i++){
        printf("\n");
        for(j = 1; j <= i ; j++){
            printf("*");
        }
    }
    printf("\n");

    return 0;
}

int main(){

    int n;

    scanf("%d", &n);

    printstar(n);


}