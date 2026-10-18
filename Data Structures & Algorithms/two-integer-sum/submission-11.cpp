class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++)
        {   
            int num = nums[i];
            int diff = target - num;
            //cout << i << " " << diff << endl;

            if(seen.contains(num))
            {
                return {seen[num], i};
            }
            seen[diff] = i;
        }

        return {};
    }
};
