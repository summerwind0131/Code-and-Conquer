#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    vector<int>twoSum(vector<int>& nums, int target){
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }

};
class Solution{
    public:
    vector<int>twoSum(vector<int>&nums,int target){
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++){
            auto tmp=hashtable.find(target-nums[i]);
            if(tmp==hashtable.end()){
                hashtable[nums[i]]=i;
            }
            else{
                return {tmp->second,i};
            }
        }
    }

};