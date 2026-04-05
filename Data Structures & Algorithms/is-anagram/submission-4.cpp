#include <array>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        array<int, 26> sCount{};
        array<int, 26> tCount{};
        for (auto ch: s) {
            sCount[ch - 'a']++;
        }
        for (auto ch: t) {
            tCount[ch - 'a']++;
        }

        return sCount == tCount;
    }
};
