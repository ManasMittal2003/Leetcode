class Solution {
public:
    bool dup(string s1,string s2){
        int arr[26]={0};
        for(auto i:s1){
            if(arr[i-'a']>0) return true;
            arr[i-'a']++;
        }
        for(auto i:s2){
            if(arr[i-'a']>0){
                return true;
            }
        }
        return false;
    }
    int solve(int ind,vector<string> arr,string temp){
        if(ind>=arr.size()){
            return temp.length();
        }
        int inc=0;
        int exc=0;
        if(dup(arr[ind],temp)){
            exc=solve(ind+1,arr,temp);
        }else{
            inc=solve(ind+1,arr,temp+arr[ind]);
            exc=solve(ind+1,arr,temp);
        }
        return max(inc,exc);
    }
    int maxLength(vector<string>& arr) {
        string temp="";
        int ans=solve(0,arr,temp);
        return ans;
    }
};
