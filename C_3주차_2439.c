
//백준 2439번
#include <stdio.h>

int main(){
    int input, i, j; //변수 지정
    
    scanf("%d", &input); //N번째 줄 지정       
    
    for(i = 1; i <= input; i++){ // input 보다 i 가 작거나 같을시 계속 진행
        for(j = 1; j <= (input - i); j++){ // input - i번째 행 만큼 빈칸 출력
            printf(" ");
        }
        for(j = 1; j <= i; j++){ // i 가 j 보다 크거나 작을시 그만큼 * 출력
            printf("*");
        }
        printf("\n"); // 줄바꿈 입력
    }
    
}