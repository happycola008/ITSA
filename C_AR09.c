#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

int main() {
    int n=0,arr[100];
    char input[200];
    gets(input);
    n=strlen(input);
    int r=0;
    for(int i=0;i<2*n-1;i++){
        if(input[i]!=',') {
            arr[r]=input[i]-48;
            r++;
        }
    }

    n=(n+1)/2;
    qsort(arr,n, sizeof(int), cmpfunc);

    
    
    int maxnum=0,minnum=0,test=1;

    if(arr[0]==0) test=0;

    for(int i=0;i<n;i++){
        maxnum+=arr[i]*pow(10,i);
        minnum+=arr[i]*pow(10,n-i-1);
    }

    int answer=maxnum-minnum;
    printf("%d\n",answer);

    return 0;
}