class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        stack<char>st;
          for(int i=0;i<num.size();i++){
            while(st.size()>0 && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
          }
          while(k){
            st.pop();
            k--;
          } 
           int n=st.size();
       
       string ans;
       while(st.size()>0){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       int i=0;
       while(i<n && ans[i]=='0') i++;
       string nandu;
       for(int j=i;j<n;j++){
        nandu+=ans[j];
       }
       if(nandu.size()==0) return "0";
        return nandu;
    }
};
