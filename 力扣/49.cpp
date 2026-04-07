#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>results;
        unordered_map<string,vector<string>>data;
        for(int i=0;i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            data[key].push_back(strs[i]);
        }
        for(auto i=data.begin();i!=data.end();i++){
            results.push_back(i->second);
        }
        return results;
    
    }
};