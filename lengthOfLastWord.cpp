class Solution {
public:
    int lengthOfLastWord(string s) {
        int num = s.length();
        int ans =0;
        bool mark = false;
        for(int i = num-1;i>=0;i--){
            if(s[i]==' ' && mark==true){
                return ans;
            }
            if(s[i]==' '&& mark==false){
                continue;
            }
            mark =true;
            ans++;
            
        }
        return ans;
    }
};
