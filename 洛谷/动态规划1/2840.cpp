#include<stdio.h>
#include<iostream>
using namespace std;
const int mod=1e9+7;
int f[10010],a[1010];

int main(){
    int n,w;
    scanf("%d %d",&n,&w);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    f[0]=1;
    for(int i=1;i<=w;i++){
        for(int j=1;j<=n;j++){
            if(i>=a[j]){
                f[i]=(f[i]+f[i-a[j]])%mod;
            }
        }
    }
    printf("%d",f[w]);
    return 0;

}
