class Solution {
public:
    int checkVovel(string x){
        int count = 0;
        int n = x.size();
        for(int i =0;i<n;i++){
            if(x[i]=='a'||x[i]== 'e'||x[i]=='i'||x[i]== 'o'||x[i]== 'u'||x[i]== 'A'||x[i]== 'E'||x[i]== 'I'||x[i]== 'O'||x[i]== 'U'){
                count++;
            }
        }

        return count;
        
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        string a = "";
        string b = "";
        for(int i =0;i<n/2;i++){
        a.append(1,s[i]);
        }
        for(int i = n/2;i<n;i++){
        b.append(1,s[i]);
        }

        int va = checkVovel(a);
        int vb = checkVovel(b);

        if(va==vb){
            return true;
        }
        else return false;
    }
};
