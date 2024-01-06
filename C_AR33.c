#include <stdio.h>
int main(){
    int n,m,matrix[100][100];
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("%d\n",matrix[n-1][i]);
    }
}