class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIdx = 0; // Index for string s
        int tIdx = 0; // Index for string t
        
        while (sIdx < s.length() && tIdx < t.length()) {
            if (s[sIdx] == t[tIdx]) {
                // If the characters match, move to the next character in s.
                sIdx++;
            }
            // Always move to the next character in t.
            tIdx++;
        }
        
        // If we've reached the end of s, it means s is a subsequence of t.
        return sIdx == s.length();
    }
};
