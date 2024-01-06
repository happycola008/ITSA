#include <stdio.h>
int main(){
    int month,day;
    scanf("%d %d",&month,&day);
    if(month==1&&day>=21||(month==2&&day<=18)) printf("Aquarius\n");
    if(month==2&&day>=19||(month==3&&day<=20)) printf("Pisces\n");
    if(month==3&&day>=21||(month==4&&day<=20)) printf("Aries\n");
    if(month==4&&day>=21||(month==5&&day<=21)) printf("Taurus\n");
    if(month==5&&day>=22||(month==6&&day<=21)) printf("Gemini\n");
    if(month==6&&day>=22||(month==7&&day<=22)) printf("Cancer\n");
    if(month==7&&day>=23||(month==8&&day<=23)) printf("Leo\n");
    if(month==8&&day>=24||(month==9&&day<=23)) printf("Virgo\n");
    if(month==9&&day>=24||(month==10&&day<=23)) printf("Libra\n");
    if(month==10&&day>=24||(month==11&&day<=22)) printf("Scorpio\n");
    if(month==11&&day>=23||(month==12&&day<=21)) printf("Sagittarius\n");
    if(month==12&&day>=22||(month==1&&day<=20)) printf("Capricorn\n");
        
    return 0;
}