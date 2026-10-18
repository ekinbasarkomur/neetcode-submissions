class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++)
        {   
            int diff = target - nums[i];
            //cout << i << " " << diff << endl;

            if(seen.contains(nums[i]))
            {
                return {seen[nums[i]], i};
            }
            seen[diff] = i;
        }

        return {};
    }
};
