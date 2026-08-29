class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False

        s_map = {}
        t_map = {}

        for index, s_char in enumerate(s):
            t_char = t[index]

            if s_char in s_map.keys():
                s_map[s_char] += 1
            else:
                s_map[s_char] = 1

            if t_char in t_map.keys():
                t_map[t_char] += 1
            else:
                t_map[t_char] = 1

        
        print(s_map)
        print(t_map)

        return s_map == t_map
        