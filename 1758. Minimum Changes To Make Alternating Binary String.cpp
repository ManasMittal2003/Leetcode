class Solution {
public:
    int count1(string s){
        int cnt=0;
        if(s[0]!='0'){
            s[0]='0';
            cnt++;
        }
        int i=1;
        while(i<s.length()){
            if(s[i]==s[i-1]){
                if(s[i-1]=='0'){
                    s[i]='1';
                }else{
                    s[i]='0';
                }
                cnt++;
            }
            i++;
        }
        return cnt;
    }
    int count2(string s){
        int cnt=0;
        if(s[0]!='1'){
            s[0]='1';
            cnt++;
        }
        int i=1;
        while(i<s.length()){
            if(s[i]==s[i-1]){
                if(s[i-1]=='0'){
                    s[i]='1';
                }else{
                    s[i]='0';
                }
                cnt++;
            }
            i++;
        }
        return cnt;
    }
    int minOperations(string s) {
        int ans1=count1(s);
        int ans2=count2(s);
        return min(ans1,ans2);
    }
};
