class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        
        // Calculate the sum of the first 'k' elements.
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxAvg = sum / k;

        // Use a sliding window to calculate the maximum average.
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            maxAvg = max(maxAvg, sum / k);
        }

        return maxAvg;
    }
};

//my code
// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n=nums.size();
//         if(n==1){
//             return nums[0]/1.0;
//         }
//         int i=0,j=0;
//         double avg=INT_MIN;
//         while(i<=(n-k)){
//             j=i;
//             double sum=0;
//             while(j<(i+k)){
//                 sum=sum+nums[j];
//                 j++;
//             }
//             if((sum/k)>avg){
//                 avg=sum/k;
//             }
//             i++;
//         }
//         return avg;
//     }
// };
