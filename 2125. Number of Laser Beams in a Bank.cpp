class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int t_laser=0;
        int n=bank.size();
        vector<int> ones(n,0);
        for(int i=0;i<bank.size();i++){
            string temp=bank[i];
            int numone=0;
            for(int j=0;j<temp.length();j++){
                if(temp[j]=='1'){
                    numone++;
                }
            }
            ones[i]=numone;
        }
        int prev=0;
        for(int j=0;j<ones.size();j++){
            t_laser=t_laser+prev*ones[j];
            if(ones[j]!=0){
                prev=ones[j];
            }
        }
        return t_laser;
    }
};
