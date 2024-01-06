#include <stdio.h>
#include <string.h>
int input[100]={0};
void swap(int a,int b){
    int temp=input[a];
    input[a]=input[b];
    input[b]=temp;
}

int main() {
    int len;
    while(scanf("%d",&input[len])!=EOF){
        len++;
    }
    for(int j=0;j<len-1;j++){
            printf("%d,",input[j]);
        }
    printf("%d\n",input[len-1]);


    int point=0;
    for(int i=0;i<len;i++){
        int max=-10000,maxid=-1;
        for(int j=point;j<len;j++){
            if(max<input[j]){
                max=input[j];
                maxid=j;
            }
        }
        
        if(maxid==point) {
            point++;
            continue;
        }
        
        swap(maxid,point);
        point++;
        
        for(int j=0;j<len-1;j++){
            printf("%d,",input[j]);
        }
        printf("%d\n",input[len-1]);
    }

}