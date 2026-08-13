class Solution:
    def isPalindrome(self, s: str) -> bool:

        clean = []

        for char in s:
            if char.isalnum():
                clean.append(char.lower())

        iteration = len(clean) // 2

        for i in range(0,iteration):
            if clean[i] != clean[-i - 1]:
                return False

        return True