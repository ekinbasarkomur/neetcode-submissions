class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sorted_strings = {}
        output = []

        
        # Sort all
        for index, string in enumerate(strs):
            sorted_string = ''
            sorted_string = sorted_string.join(sorted(string))

            if sorted_string in sorted_strings.keys():
                sorted_strings[sorted_string].append(string)
                continue
            
            sorted_strings[sorted_string] = [string]
        
        for anagram in sorted_strings:
            output.append(sorted_strings[anagram])
        

        return output