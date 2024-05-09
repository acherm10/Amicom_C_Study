//백준 8958
#include <stdio.h>


int main(){

    int testcase;
    char arr[81];
    int totalscore = 0;
    int score = 0;
    int index = 0;


    scanf("%d", &testcase);
    
    for(int i = 0; i < testcase; i++){

        scanf("%s", arr);
        score = 0;
        index = 0;
        totalscore = 0;

        while(arr[index] != '\0'){

            if(arr[index] == 'O'){
                score += 1;
                totalscore += score;
            }
            else{
                score = 0;
            }
            index++;
        }

        printf("%d\n", totalscore);

    }
    
    return 0;

}

