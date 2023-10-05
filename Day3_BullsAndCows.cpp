Problem Link - https://leetcode.com/problems/bulls-and-cows/

class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0;
        int cow=0;
        string ans = "";
        int n = secret.size();
        for(int i =0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
                secret[i]=-1;
                guess[i]=-1;
            }
        }

        for(int i =0;i<n;i++){
            if(secret.find(guess[i])!=-1 && guess[i]!=-1){
                cow++;
                secret[secret.find(guess[i])]=-1;
            }
        }
        ans= to_string(bull)+"A"+to_string(cow)+"B";
        return ans;
    }
};