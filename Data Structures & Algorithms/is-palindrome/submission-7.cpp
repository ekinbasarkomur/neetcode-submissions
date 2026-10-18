class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> clean;

        for (auto i = s.begin(); i != s.end(); i++) {

            if (isalnum(*i)) {
                clean.push_back(tolower(*i));
            }
        }

        if (size(clean) == 0) {
            return true;
        }

        int left = 0;
        int right = size(clean) - 1;

        while (right > left) {
            if (clean[left] != clean[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
