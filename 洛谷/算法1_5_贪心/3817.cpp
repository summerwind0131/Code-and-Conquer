#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int>weight(n);
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    long long cost=0;

    if(n==1){
        cout<<max(0,x-weight[0])<<'\n';
        return 0;
    }
    for(int i=0;i<n-1;i++){
        int current=weight[i]+weight[i+1];
        if(current>x){
            if(weight[i+1]>=(current-x)){
                weight[i+1]-=(current-x);
            }
            else{
                weight[i+1]=0;
                weight[i]-=(current-x-weight[i+1]);
            }
            cost+=current-x;
        }
    }
    cout<<cost<<"\n";
    return 0;
}