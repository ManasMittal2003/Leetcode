class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, bool> count;
        unordered_map<int, int> ind;
        for (int i = 0; i < edges.size(); i++) {
            if (count[edges[i][0]] != true) {
                count[edges[i][0]] = true;
            }
            if (count[edges[i][1]] != true) {
                count[edges[i][0]] = true;
            }
            ind[edges[i][0]]++;
            ind[edges[i][1]]++;
        }
        int n = count.size();
        for (auto i : ind) {
            if (i.second == n - 1) {
                return i.first;
            }
        }
        return 0;
    }
};
