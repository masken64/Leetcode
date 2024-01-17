class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(auto it : arr){
            mp[it]++;
        }
        unordered_map<int,int> ans;
        for(auto x : mp){
            ans[x.second]++;
        }

        for(auto a : ans){
            if(a.second>1) return false;
        }
        return true;
    }
};
