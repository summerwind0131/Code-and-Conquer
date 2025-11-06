#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        a.push_back(number);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}