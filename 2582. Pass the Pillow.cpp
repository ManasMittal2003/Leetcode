class Solution {
private:
    bool isOdd(int q) {
        if (q % 2 == 0)
            return false;
        return true;
    }

public:
    int passThePillow(int n, int time) {
        int q = time / (n - 1);

        int rem = time % (n - 1);

        if (isOdd(q))
            return n - rem;

        return rem + 1;
    }
};
