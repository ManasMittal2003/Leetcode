class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        if(n==0){
            return true;
        }
        else if(m==1&&flowerbed[0]==0){
            return true;
        }
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i==0&&flowerbed[i+1]==0){
                    n=n-1;
                    flowerbed[i]=1;
                }
                else if(i==(m-1)&&flowerbed[i-1]==0){
                    n=n-1;
                    flowerbed[i]=1;
                }
                else if(i!=0&&i!=(m-1)&&(flowerbed[i+1]==0)&&(flowerbed[i-1]==0)){
                    n=n-1;
                    flowerbed[i]=1;
                }
            }
            if(n==0){
                return true;
            }
        }
        return false;
    }
};
