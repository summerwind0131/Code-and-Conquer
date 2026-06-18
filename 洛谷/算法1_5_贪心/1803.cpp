#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct activity{
    int begin;
    int end;
};
bool cmp(const activity &a,const activity &b){
    if(a.end!=b.end){
        return a.end<b.end;
    }
    return a.begin<b.begin;
}
int main(){

    int n;
    cin>>n;
    vector<activity>time(n);
    vector<activity>arange;
    for(int i=0;i<n;i++){
        cin>>time[i].begin>>time[i].end;
    }

    sort(time.begin(),time.end(),cmp);

    int current=time[0].end;
    arange.push_back(time[0]);
    for(int i=1;i<n;i++){
        if(time[i].begin>=current){
            arange.push_back(time[i]);
            current=time[i].end;
        }
    }
    cout<<arange.size()<<'\n';
    return 0;

}