#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int main() {
    int n,score[1000];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }

    qsort(score,n, sizeof(int), cmpfunc);

    for(int i=0;i<n;i++){
        printf("%d\n",score[i]);
    }

    return 0;
}