class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = size(numbers) - 1;

        while (left < right) {
            if (target == numbers[left] + numbers[right]) {
                return {left + 1, right + 1};
            }

            else if (target > numbers[left] + numbers[right]) {
                left++;
            } else {
                right--;
            }
        }

        return {0, 0};

    }
};
