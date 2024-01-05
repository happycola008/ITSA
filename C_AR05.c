#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool arr[30][25];

    for(int i=0;i<30;i++){
        for(int j=0;j<25;j++){
            arr[i][j]=true;
        }
    }

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int start,end;
        scanf("%d %d",&start,&end);

        for(int j=0;j<30;j++){
            bool test=true;
            for(int k=start+1;k<=end-1;k++){
                if(arr[j][k]==false){
                    test=false;
                    break;
                }
            }
            if(test){
                for(int k=start;k<=end;k++){
                    arr[j][k]=false;
                }
                break;
            }
        }
    }


    int carnum=0;
    for(int i=0;i<30;i++){
        for(int j=0;j<25;j++){
            if(arr[i][j]==false) {
                carnum++;
                break;
            }
        }
    }
    printf("%d\n",carnum);

    return 0;
}