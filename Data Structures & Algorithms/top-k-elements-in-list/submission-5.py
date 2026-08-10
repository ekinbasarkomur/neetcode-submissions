class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        number_inventory = {}

        output = []

        nums.sort()

        for index, number in enumerate(nums):
            if number in number_inventory.keys():
                number_inventory[number] += 1
                continue

            number_inventory[number] = 1



        inventory = sorted(number_inventory.items(), key = lambda c : c[1], reverse = True)
        #print(inventory)

        for i in range(0, k):
            output.append(inventory[i][0])

        return output