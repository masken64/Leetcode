class Solution {
public:
    string compute(string str){
        string result;
        for(char c : str){
            if(c=='#' && !result.empty()){
                result.pop_back();
            }
            else if( c != '#'){
                result.push_back(c);
            }
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return compute(s) == compute(t);
    }
};
