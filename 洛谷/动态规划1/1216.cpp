#include<iostream>
using namespace std;
int r[1010][1010];

int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&r[i][j]);
        }
    }
    for(int i=m;i>1;i--){
        for(int j=1;j<=i-1;j++){
            r[i-1][j]+=max(r[i][j],r[i][j+1]);
        }
    }
    printf("%d",r[1][1]);
    return 0;

}