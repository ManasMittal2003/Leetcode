class Solution {
public:
    string largestOddNumber(string num) {
        int strt=0;
        int end=-1;
        int i=0;
        while(i<num.length()){
            int dig=int(num[i]);
            if(dig%2!=0){
                end=i;
            }
            i++;
        }
        if(end==-1){
            string temp="";
            if(int(num[strt])%2!=0){
                temp.push_back(num[strt]);
            }
            return temp;
        }
        return num.substr(strt,end-strt+1);
    }
};
