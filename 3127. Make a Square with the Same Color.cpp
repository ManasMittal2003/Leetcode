class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int B = 0, W = 0;

                if (grid[i][j] == 'B')
                    B++;
                else
                    W++;
                if (grid[i][j + 1] == 'B')
                    B++;
                else
                    W++;
                if (grid[i + 1][j] == 'B')
                    B++;
                else
                    W++;
                if (grid[i + 1][j + 1] == 'B')
                    B++;
                else
                    W++;

                if ((B == 3 && W == 1) || (B == 1 && W == 3) ||
                    (B == 4 && W == 0) || (B == 0 && W == 4))
                    return true;
            }
        }
        return false;
    }
};
