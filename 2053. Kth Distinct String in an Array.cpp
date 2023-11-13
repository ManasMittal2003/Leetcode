class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mapping;
        for (auto i : arr) {
            mapping[i]++;
        }

        string ans = "";
        for (auto i : arr) {
            if (mapping[i] == 1) {
                k--;
                if (k == 0) {
                    ans = i;
                    break;
                }
            }
        }

        return ans;
    }
};
