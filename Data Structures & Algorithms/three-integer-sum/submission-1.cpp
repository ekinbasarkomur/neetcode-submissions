class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> output;
            vector<int> sorted_nums = nums;
            sort(sorted_nums.begin(), sorted_nums.end());

            for (size_t i = 0; i + 2 < sorted_nums.size(); i++) {

                if (i > 0 && sorted_nums[i] == sorted_nums[i - 1]) {
                    continue;
                }

                int target = -sorted_nums[i];
                size_t left = i + 1;
                size_t right = sorted_nums.size() - 1;

                while (left < right) {
                    int sum = sorted_nums[left] + sorted_nums[right];

                    if (sum < target) {
                        left++;

                    } else if (sum > target) {
                        right--;

                    } else {
                        output.push_back({sorted_nums[i], sorted_nums[left],
                                        sorted_nums[right]});

                        left++;
                        right--;

                        while (left < right &&
                            sorted_nums[left] == sorted_nums[left - 1]) {
                            left++;
                        }
                    }
                }
            }

            return output;
    }
};
