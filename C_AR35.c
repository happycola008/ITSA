#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int num=year%12;
    if(num==4) printf("rat\n");
    else if(num==5) printf("ox\n");
    else if(num==6) printf("tiger\n");
    else if(num==7) printf("rabbit\n");
    else if(num==8) printf("dragon\n");
    else if(num==9) printf("snake\n");
    else if(num==10) printf("horse\n");
    else if(num==11) printf("sheep\n");
    else if(num==0) printf("monkey\n");
    else if(num==1) printf("rooster\n");
    else if(num==2) printf("dog\n");
    else if(num==3) printf("pig\n");
}