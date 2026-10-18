class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for (const string &str : strs) {
            encoded_string += to_string(size(str)) + "#" + str;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> output;

        size_t pos = 0;
        while (pos < s.size()) {
            size_t hash = s.find('#', pos);
            int len = stoi(s.substr(pos, hash - pos));

            output.push_back(s.substr(hash + 1, len));

            pos = hash + 1 + len;
        }

        return output;
    }
};
