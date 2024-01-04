class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto a : nums){
            mp[a]++;
        }
        for(auto &it : mp){
            if(it.second == 1){
                return -1;
                break;
            }
            ans += ceil(it.second/(3*1.0));
        }
        return ans;
    }
};
