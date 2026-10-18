class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> inventory;

        for (int num : nums) {
            inventory[num]++;
        }

        vector<pair<int, int>> counts;

        for (auto &[num, count] : inventory) {
            counts.push_back({num, count});
        }

        sort(counts.begin(), counts.end(),
            [](const auto &a, const auto &b) { return a.second > b.second; });

        vector<int> output;
        for (int i = 0; i < k; i++) {
            output.push_back(counts[i].first);
        }
        return output;
    }
};
