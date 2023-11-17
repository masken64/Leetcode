class Solution {
public:
    int minPairSum(vector<int>& nums) {
     priority_queue<int> pq;
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int i=0;
        while(i<j){
            pq.push(nums[i]+nums[j]);
            i++;
            j--;
        }
        return pq.top();
    }
};
