#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int num[130]={0};
    scanf("%s",&input);
    for(int i=0;i<strlen(input);i++){
        num[input[i]]++;
    }
    for(int i=128;i>=31;i--){
        if(num[i]!=0) printf("%d %d\n",i,num[i]);
    }

}