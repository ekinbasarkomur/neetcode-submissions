class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> single_nums;
        int max_count = 0;
        unordered_map<int, int> inc_map;

        for (const int &num : nums) {
            single_nums.insert(num);
        }

        for (const int &num : single_nums) {
            if (single_nums.contains(num - 1)) {
                continue;
            }

            inc_map.insert({num, 1});
        }

        for (auto &[start, count] : inc_map) {
            int inc = start + 1;

            while (true) {
                if (single_nums.contains(inc)) {
                    inc_map[start]++;
                    inc++;
                    continue;
                }
                break;
            }

            if (inc_map[start] > max_count) {
                max_count = inc_map[start];
            }
        }
        return max_count;
        }
};
