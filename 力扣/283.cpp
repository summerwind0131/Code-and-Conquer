#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_number=0;
        int start=0;
        int end=0;
        while(start<nums.size()){
            if(nums[start]==0){
                zero_number++;
                end=start+1;
                while(end<nums.size()){
                    if(nums[end]==0||end==nums.size()-1){
                        for(int i=start+1;i<end+1;i++){
                            nums[i-zero_number]=nums[i];
                        }
                        break;
                    }
                    end++;
                }
            start=end;
            }
            else{
                start++;
                end++;
            }
        }
        for(int i=nums.size()-zero_number;i<nums.size();i++){
            nums[i]=0;
        }
    }
};