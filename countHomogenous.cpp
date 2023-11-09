class Solution {
public:
    int countHomogenous(string s) {
        int res = s.size();
        int cnt = 1;
        int mod = 1000000007;
        for(int i =1;i<s.size();i++){
            if(s[i]==s[i-1]){
                res = (res+cnt)%mod;
                cnt++;
            }
            else{
                cnt=1;
            }
        }

        return res;
    }
};
