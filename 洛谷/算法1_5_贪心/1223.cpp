#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<iomanip>
using namespace std;

struct student
{
    int time;
    int number;
};
bool cmp(const student &a,const student &b){
    return a.time<b.time;
}
int main(){
    int n;
    cin>>n;
    vector<student>time(n);
    for(int i=0;i<n;i++){
        cin>>time[i].time;
        time[i].number=i+1;
    }
    sort(time.begin(),time.end(),cmp);
    vector<int>waitingTime(n);
    int total_time=0;
    waitingTime[0]=0;
    for(int i=1;i<n;i++){
        waitingTime[i]=time[i-1].time+waitingTime[i-1];
        total_time+=waitingTime[i];
    }
    for(int i=0;i<n;i++){
        cout<<time[i].number<<" ";
    }
    cout<<endl;
    float tmp=(float)total_time/n;
    cout<<fixed<<setprecision(2)<<tmp<<endl;
    return 0;

}