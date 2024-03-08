class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i =0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int maxf=0;
        for(auto &it : mpp){
            maxf = max(maxf,it.second);
        }
        int maxe =0;
        for(auto &it : mpp){
            if(it.second==maxf) maxe++;
        }
        return maxf*maxe;
    }
};
