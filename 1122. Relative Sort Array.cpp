class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freqMap;

        for(int num: arr1)
            freqMap[num]++;

        int index = 0;
        for(int num: arr2)
        {
            while(freqMap[num]--)
                arr1[index++] = num;
            freqMap.erase(num);
        }

        for(auto &num: freqMap)
            while(num.second--)
                arr1[index++] = num.first;

        return arr1;
    }
};
