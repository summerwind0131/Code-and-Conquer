#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<n;i++){
        int weight;
        cin>>weight;
        minHeap.push(weight);
    }

    long long cost=0;

    while (minHeap.size()>=2){
        int first=minHeap.top();
        minHeap.pop();

        int second=minHeap.top();
        minHeap.pop();

        int merged=first+second;
        cost+=merged;
        minHeap.push(merged);
    }

    cout<<cost<<"\n";
    return 0;
    
}