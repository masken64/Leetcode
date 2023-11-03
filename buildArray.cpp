class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int cur =1;
        int i =0;
        while(cur<=n && i<target.size()){
            if(cur==target[i]){
                ans.push_back("Push");
                cur++;
                i++;
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
                cur++;
            }
        }

        return ans;
    }
};
