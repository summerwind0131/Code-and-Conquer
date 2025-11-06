#include<iostream>
using namespace std;
int n,m;

int main(){
    cin>>n>>m;
    int *data=new int[n+1]{0};
    for(int i=0;i<m;i++){
        int number;
        cin>>number;
        data[number]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<data[i];j++){
            cout<<i<<" ";
        }
    }
}