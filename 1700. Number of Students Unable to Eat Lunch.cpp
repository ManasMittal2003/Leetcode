class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) {
        int n = stu.size();
        int i = 0, j = 0;
        int cnt = 0;
        while (n != 0) {
            if (stu[i] == sand[j]) {
                i++;
                j++;
                n--;
                cnt = 0;
            } else {
                int temp = stu[i];
                i++;
                stu.push_back(temp);
                cnt++;
            }
            if (cnt == n) {
                return n;
            }
        }
        return 0;
    }
};
