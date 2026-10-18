class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        prefix = [1]
        suffix = [1]

        number_len = len(nums)

        for index, number in enumerate(nums):
            prefix.append(prefix[index] * number)
            suffix.append(suffix[index] * nums[number_len - index - 1])

        prefix = prefix[:-1]
        suffix = suffix[:-1]
        suffix = list(reversed(suffix))

        for i in range(0, number_len):
            output.append(prefix[i] * suffix[i])

        return output