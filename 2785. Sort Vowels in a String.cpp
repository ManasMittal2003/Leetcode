#include <iostream>
#include <algorithm>

class Solution {
public:
    static bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    string sortVowels(string s) {
        int len = s.length();
        int vowelCount = 0;
        for (int i = 0; i < len; i++) {
            if (isVowel(s[i])) {
                vowelCount++;
            }
        }

        string vowels="";

        int vowelIndex = 0;
        for (int i = 0; i < len; i++) {
            if (isVowel(s[i])) {
                vowels += s[i];
            }
        }

        sort(vowels.begin(), vowels.end());

        vowelIndex = 0;
        for (int i = 0; i < len; i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[vowelIndex++];
            }
        }

        return s;
    }
};
