class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> sorted_strings; 

        for (string& str : strs) 
        {   

            string sorted_string = str;
            sort(sorted_string.begin(), sorted_string.end());

            sorted_strings[sorted_string].push_back(str);

        }

        for (auto& [sorted_string, arr] : sorted_strings)
        {
            output.push_back(arr);
        }

        return output;
        
    }
};
