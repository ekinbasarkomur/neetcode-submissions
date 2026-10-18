impl Solution {
    pub fn is_valid_sudoku(board: Vec<Vec<char>>) -> bool {
        fn duplicate_exist(arr: Vec<char>) -> bool {
            let mut set: HashSet<char> = HashSet::new();

            for number in arr {
                if number == '.' {
                    continue;
                }

                match set.insert(number) {
                    true => continue,
                    false => return true,
                }
            }

            false
        }

        for i in 0..9 {
            let mut row: Vec<char> = vec![];
            let mut col: Vec<char> = vec![];
            let mut subbox: Vec<char> = vec![];

            for j in 0..9 {
                row.push(board[i][j]);
                col.push(board[j][i]);

                let row_num = (j / 3) + (3 * (i % 3));
                let col_num = (j % 3) + (3 * (i / 3));
                subbox.push(board[row_num][col_num]);
            }

            if duplicate_exist(row) {
                return false;
            }

            if duplicate_exist(col) {
                return false;
            }

            if duplicate_exist(subbox) {
                return false;
            }
        }

        true
    }

}
