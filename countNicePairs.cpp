class Solution {
public:
    int rev(int n){
        int a=0;
        while(n){
            a = a*10+n%10;
            n=n/10;
        }
        return a;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int M = 1e9+7;
        int n = nums.size();
        int ans=0;
        for(int i = n-1;i>=0;i--){
            int d = nums[i]-rev(nums[i]);
            if(mp.count(d)==true){
                ans = (ans + mp[d]) % M;
            }
            mp[d]++;
        }

        return ans;
    }
};
