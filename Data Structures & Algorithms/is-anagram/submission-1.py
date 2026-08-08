class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_new = list(s)
        t_new = list(t)

        s_new.sort()
        t_new.sort()

        return s_new == t_new
        