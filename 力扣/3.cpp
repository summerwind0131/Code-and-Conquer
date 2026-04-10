#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int number=s.size();
        int left=0;
        int right=0;
        int max_lenghth=0;
        int current_length=0;
        int data[129]={0};
        while(left+max_lenghth<number){
            for(right;right<number;right++){
                if(data[s[right]-' ']==0||data[s[right]-' ']-1<left){
                    data[s[right]-' ']=right+1;
                    current_length++;
                    max_lenghth=max(max_lenghth,current_length);
                }
                else{
                    
                    left=data[s[right]-' ']-1+1;
                    data[s[right]-' ']=right+1;
                    current_length=right-left+1;
                    max_lenghth=max(max_lenghth,current_length);
                    right++;
                    break;
                }
            }
        }    
    cout<<max_lenghth;
    return 0;
}