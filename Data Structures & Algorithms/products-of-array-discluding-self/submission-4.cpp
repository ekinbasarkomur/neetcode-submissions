class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix = {1};
        vector<int> suffix = {1};
        vector<int> output;

        int len = size(nums);

        for (int index = 0; index < len; index++) {
            prefix.push_back(prefix[index] * nums[index]);
            suffix.push_back(suffix[index] * nums[len - index - 1]);
        }

        for (int i = 0; i < len; i++) {
            output.push_back(prefix[i] * suffix[len - i - 1]);
        }
        return output;
    }
};
