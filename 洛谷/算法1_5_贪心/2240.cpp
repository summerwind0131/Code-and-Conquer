#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Coin{
    int weight;
    int number;
    float value;
};
bool cmp(const Coin &a,const Coin &b){
    return a.value>b.value;
}
int main(){
    int N,T;
    cin>>N>>T;
    vector<Coin> coin(N);
    for(int i=0;i<N;i++){
        cin>>coin[i].weight;
        cin>>coin[i].number;
        coin[i].value= (float)coin[i].number / coin[i].weight;
    }
    sort(coin.begin(),coin.end(),cmp);
    float result=0.0;
    for(int i=0;i<N;i++){
        if(T==0)break;
        int load=min(coin[i].weight,T);
        T-=load;
        result+=load*coin[i].value;
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
    return 0;
}