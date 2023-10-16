class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxs = INT_MIN;
        for(int i =1; i<n;i++){
            if(s[i]==s[i-1]){
                count=0;
            }
            else{
                count++;                    
            }

            maxs = max(maxs,count);
        }        
    }
};      