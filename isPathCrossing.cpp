class Solution {
public:
    bool isPathCrossing(string path) {
        int a=0,b=0;
        set<vector<int>> s;
        s.insert({0,0});
        for(char i : path){
            if(i=='N'){
                b++;
            }
            if(i=='E'){
                a++;
            }
            if(i=='S'){
                b--;
            }
            if(i=='W'){
                a--;
            }
            if(s.find({a,b})!=s.end()){
                return true;
            }
            s.insert({a,b});
        }
        return false;
    }
};
