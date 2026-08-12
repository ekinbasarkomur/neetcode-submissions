class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        board_len = 9
        subbox_len = 3
        
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

                
        for i in range(0, board_len):

            # Check rows:
            row = []
            for j in range(0, board_len):
                row.append(board[i][j])
            
            if duplicate_exist(row):
                return False

            # Check cols:
            col = []
            for j in range(0, board_len):
                col.append(board[j][i])
            
            if duplicate_exist(col):
                return False


            # Check subbox
            subbox = []
            for j in range(0, board_len):
                row_num = (j // subbox_len) + (subbox_len * (i % subbox_len)) 
                col_num = (j % subbox_len) + (subbox_len * (i // subbox_len)) 
                subbox.append(board[row_num][col_num])
        

            if duplicate_exist(subbox):
                return False

            
        return True