class Solution {
public:
    int count(int n){
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if(count(arr[j])>count(arr[j+1])){
                    swap(arr[j],arr[j+1]);
                }
                if(count(arr[j])==count(arr[j+1])){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
        }
        return arr;
    }
};
