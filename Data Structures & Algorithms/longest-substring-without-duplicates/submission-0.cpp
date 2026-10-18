class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> letters;
        int max_len = 0;
        size_t left = 0;

        for (size_t right = 0; right < s.size(); right++) {

            while (letters.contains(s[right])) {
                letters.erase(s[left]);
                left++;
            }

            letters.insert(s[right]);
            max_len = max(max_len, (int)(right - left + 1));
        }
        return max_len;
    }
};
