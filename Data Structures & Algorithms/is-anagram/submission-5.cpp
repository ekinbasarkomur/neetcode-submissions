class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for(int i = 0; i < s.size(); i++){
            char s_char = s[i];
            char t_char = t[i]; 

            if (s_map.contains(s_char)){
                s_map[s_char]++;
            }
            else{
                s_map[s_char] = 1;
            }

            if (t_map.contains(t_char)){
                t_map[t_char]++;
            }
            else{
                t_map[t_char] = 1;
            }


        }

        return s_map == t_map;
        
    }
};
