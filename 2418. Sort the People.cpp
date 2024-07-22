class Solution {
public:
    static bool cmp(pair<int, string>& a, pair<int, string>& b) {
        return a.first > b.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.begin(), people.end(), cmp);
        vector<string> ans;
        for (auto i : people) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
