class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num > 0 && (num & (num - 1)) == 0) {
            return (num & 0x55555555) != 0;//0x is a prefix in cpp for representing in hexadecimal, 55555555 in binary will be a 32 bit integer where 1 will be on every even place
        }
        return false;
    }
};
