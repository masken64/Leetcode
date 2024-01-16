int help(int currLen, int &reqLen, int currNum,int &m){
        if(currNum>m) return 0;
        if(currLen == reqLen) return 1;
        // For each number checking next possiblities after 2*number
        int temp = currNum*2;
        int res = 0;
        for(int i=temp;i<=m;i++){
            res += help(currLen+1,reqLen,i,m);
        }
        return res;
    }
    
    int numberSequence(int m, int n){
        // code here
        int ans = 0;
        //For every number calling help
        for(int i=0;i<m;i++){
            ans+=help(1,n,i+1,m);
        }
        
        return ans;
    }
