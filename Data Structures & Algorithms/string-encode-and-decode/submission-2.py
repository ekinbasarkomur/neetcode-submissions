class Solution:

    split_char = "#"

    def encode(self, strs: List[str]) -> str:

        encoded_string = ""           
        
        for string in strs:
            encoded_string = encoded_string + str(len(string)) + self.split_char + string
        
        return encoded_string

    def decode(self, s: str) -> List[str]:
        output = []
        rest = s

        while len(rest) > 0:
            len_of_string, rest = rest.split(self.split_char, 1)
            output.append(rest[:int(len_of_string)])            
            rest = rest[int(len_of_string):]
        
        return output
