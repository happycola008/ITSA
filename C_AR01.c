#include <stdio.h>  
  
int main(void) {  
    int arr[100],input,i=0;
    while(scanf("%d ",&input)!=EOF)  {  
        arr[i++]=input;
    }  
    int j;  
    for(j=i-1;j>0;j--)  {  
        printf("%d ",arr[j]);     
    }  
    printf("%d\n",arr[0]);  
    return 0;  
}
