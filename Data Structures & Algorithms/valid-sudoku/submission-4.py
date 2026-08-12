class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:      
        def duplicate_exist(array):
            number_inventory = set()
            #print(array)

            for number in array:
                if number == ".":
                    continue

                if number in number_inventory:
                    return True

                number_inventory.add(number)
            return False

                
        for i in range(0, 9):
            # Check rows:
            row = []
            col = []
            subbox = []
            for j in range(0, 9):
                row.append(board[i][j])

                col.append(board[j][i])
                
                row_num = (j // 3) + (3 * (i % 3)) 
                col_num = (j % 3) + (3 * (i // 3)) 
                subbox.append(board[row_num][col_num])
            
            if duplicate_exist(row):
                return False
            if duplicate_exist(col):
                return False
            if duplicate_exist(subbox):
                return False
            
        return True