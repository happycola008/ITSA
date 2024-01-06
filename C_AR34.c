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

    int firstnum;
    if(input[0]=='A') firstnum=10;
    else if(input[0]=='B') firstnum=11;
    else if(input[0]=='C') firstnum=12;
    else if(input[0]=='D') firstnum=13;
    else if(input[0]=='E') firstnum=14;
    else if(input[0]=='F') firstnum=15;
    else if(input[0]=='G') firstnum=16;
    else if(input[0]=='H') firstnum=17;
    else if(input[0]=='I') firstnum=34;
    else if(input[0]=='J') firstnum=18;
    else if(input[0]=='K') firstnum=19;
    else if(input[0]=='L') firstnum=20;
    else if(input[0]=='M') firstnum=21;
    else if(input[0]=='N') firstnum=22;
    else if(input[0]=='O') firstnum=35;
    else if(input[0]=='P') firstnum=23;
    else if(input[0]=='Q') firstnum=24;
    else if(input[0]=='R') firstnum=25;
    else if(input[0]=='S') firstnum=26;
    else if(input[0]=='T') firstnum=27;
    else if(input[0]=='U') firstnum=28;
    else if(input[0]=='V') firstnum=29;

    else if(input[0]=='W') firstnum=32;
    else if(input[0]=='X') firstnum=30;
    else if(input[0]=='Y') firstnum=31;
    else if(input[0]=='Z') firstnum=33;

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
