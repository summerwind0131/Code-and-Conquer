#include<iostream>
#include<queue>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    deque<int>data;
    int times=0;
    for(int i=0;i<m;i++){
        int number;
        cin>>number;
        if(find(data.begin(),data.end(),number)==data.end()){
            if(data.size()<n){
                data.push_back(number);
            }
            else{
                data.pop_front();
                data.push_back(number);
            }
            times++;
        }
    }
    cout<<times<<endl;
    return 0;
}