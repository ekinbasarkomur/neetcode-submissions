class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        s_map = {}
        t_map = {}

        for index, s_char in enumerate(s):
            t_char = t[index]

            s_map[s_char] = s_map.get(s_char, 0) + 1
            t_map[t_char] = t_map.get(t_char, 0) + 1

        print(s_map)
        print(t_map)

        return s_map == t_map
