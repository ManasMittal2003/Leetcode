class Solution {
public:
long long n,m;
bool _contains(map<char,long long>&mp2,map<char,long long>&mp1){
    bool ans=true;
    for(auto [ch1,freq1]:mp1){
        if(mp2.find(ch1)==mp2.end() or mp2[ch1]<freq1){
           ans=false;
           break;
        }
    }
    return ans;
}
    string minWindow(string s, string t) {
        n=s.size();
        m=t.size();
        map<char,long long>mp1,mp2;
        for(auto ch:t){
            mp1[ch]++;
        }
        pair<int,int> p;            // when we will find any valid substring present inside s, we will store the left and right indices of that substring in this pair. (and we will modify this range if we encounter any further shorter valid substring inside s).
        long long length=INT_MAX;  // length of valid substring found in s
        long long l=0;
        for(long long r=0;r<n;r++){
            mp2[s[r]]++;
            while(_contains(mp2,mp1)){     // thsi will return true if sting is completely present inside any substring of s (as per the description of the question)
               if((r-l+1)<length){
                   length=r-l+1;
                   p.first=l;
                   p.second=r;
               }
               mp2[s[l]]--;
               l++;
            }
        }
        if(length==INT_MAX){    //no valid substring were there inside s 
            return "";
        }

        string res="";       // the left and right indices of shortest valid substring (inside s) is stored inside this pair p (p.first is the the left index and p.second is the right index) 
        for(int i=p.first;i<=p.second;i++){
          res+=s[i];
        }
        return res;
    }
};
