class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto i:mp){
            int count=0;
            int dig=i.second;
            while(dig>0){
                dig-=3;
                count++;
            }
            if(dig<0){
                count=0;
                dig=i.second;
                while(dig>3){
                    dig-=3;
                    count++;
                }
                if(dig==2){
                    count++;
                }
                if(dig==1){
                    count=0;
                    dig=i.second;
                    while(dig>0){
                        if((dig-3)<3){
                            dig-=2;
                        }else{
                            dig-=3;
                        }
                        count++;
                    }
                    if(dig<0){
                        return -1;
                    }
                }
            }
            ans+=count;
        }
        return ans;
    }
};
