//백준 9086
#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    char arr[1001];

    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){

        scanf("%s", arr);
        printf("%c%c \n", arr[0], arr[strlen(arr) - 1]);

    }

    return 0;
}