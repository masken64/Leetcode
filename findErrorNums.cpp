class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int exsum = n*(n+1)/2;
        int currsum = 0;
        int tempsum =0;
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int dup;
        for(auto x : mp){
            if(x.second>1){
                dup = x.first;
                ans.push_back(dup);
            }
        }
        for(int i =0;i<n;i++){
            tempsum+=nums[i];
        }
        currsum=tempsum-dup;
        int rem = exsum-currsum;
        ans.push_back(rem);
        return ans;


    }
};
