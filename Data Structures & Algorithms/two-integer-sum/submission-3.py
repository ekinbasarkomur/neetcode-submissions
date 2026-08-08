class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        differences = {}

        for i in range(0, len(nums)):
            num = nums[i]
            diff = target - num


            if diff in nums[i+1:]:
                return [i, nums[i+1:].index(diff) + i + 1]
            
            differences[diff] = i

        return []


        