class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        std::unordered_map<char, char> sMap; // Mapping from characters in s to characters in t
        std::unordered_map<char, char> tMap; // Mapping from characters in t to characters in s

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            // Check if the mapping from s[i] to t[i] is consistent
            if(sMap.find(s[i]) != sMap.end() && sMap[s[i]] != t[i]){
                return false;
            }
            // Check if the mapping from t[i] to s[i] is consistent
            if(tMap.find(t[i]) != tMap.end() && tMap[t[i]] != s[i]){
                return false;
            }
            // Create mappings
            sMap[s[i]] = t[i];
            tMap[t[i]] = s[i];
        }

        return true;
    }
};
