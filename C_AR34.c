#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    bool temp;
    char input[20];
    int amount=0;
    gets(input);
    if(strlen(input)!=10){
        printf("WRONG!!!\n");
        return 0;
    }

    int firstnum=input[0]-55;
    int secondnum=input[1]-48;
    if(firstnum>35||firstnum<10||(secondnum!=1&&secondnum!=2)){
        printf("WRONG!!!\n");
        return 0;
    }

    amount+=firstnum/10;
    amount+=9*(firstnum%10);

    for(int i=1;i<10;i++){
        int num=input[i]-48;
        if(num<0||num>9){
            printf("WRONG!!!\n");
            return 0;
        }
        if(i==9){
            amount+=num;
            break;
        }
        amount+=num*(9-i);
    }
    if(amount%10==0) printf("CORRECT!!!\n");
    else printf("WRONG!!!\n");
    return 0;
}