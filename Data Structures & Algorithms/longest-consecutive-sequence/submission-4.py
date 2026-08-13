class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        single_nums = set()
        inc_map = {}
        max_count = 0


        for num in nums:
            if num in single_nums:
                continue
            single_nums.add(num)
        
        for num in single_nums:
            if num - 1 in single_nums:
                continue

            inc_map[num] = 1
            

        for start in inc_map.keys():
            inc = start + 1
            while True:
                if inc in single_nums:
                    inc_map[start] += 1
                    inc += 1
                    continue
                break
            
            if inc_map[start] > max_count:
                max_count = inc_map[start]

        print(inc_map)

        return max_count