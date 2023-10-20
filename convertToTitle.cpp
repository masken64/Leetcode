class Solution {
public:
    string convertToTitle(int n) {
        string answer = "";
        while(n>0){
            n--;
            int result = n%26;
            n = n/26;
            answer += (char('A')+ result);
   }
        reverse(answer.begin(), answer.end());
        return answer;

    }
};
