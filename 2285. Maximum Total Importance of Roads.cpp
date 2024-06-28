class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long> count(n);
        for (vector<int> road : roads) {
            count[road[0]]++; 
            count[road[1]]++; 
        }
        long sum = 0;
        sort(count.begin(), count.end());
        for (int i = 0; i < n; i++)
            sum += count[i] * (i + 1);
        return sum;    
    }
};
