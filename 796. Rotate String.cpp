class Solution {
public:
    bool rotateString(string p, string q) {
        if(p==q){
            return 1;
        }
        int len=p.length();
        string temp;
        temp.push_back(p[len-1]);
        
        for(int i=0;i<len-1;i++){
            temp.push_back(p[i]);
        }
        if(temp==q){
            return 1;
        }
        for(int i=0;i<len-2;i++){
            string str;
            int len1=temp.length();
            str.push_back(temp[len1-1]);
            for(int j=0;j<len1-1;j++){
                str.push_back(temp[j]);
            }
            if(str==q){
                return 1;
            }
            temp=str;
        }
        return 0;
    }
};
