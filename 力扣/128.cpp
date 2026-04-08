#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>number(nums.begin(),nums.end());
        int max_number=0;
        for(int num:number){
            // 必须是找不到 num-1 才说明 num 是序列的起点
            if(!number.count(num-1)){
                int current=1;
                while(number.count(num+current)){
                    current++;
                }
                max_number=max(current,max_number);
            }
        }
        return max_number;
    }
};