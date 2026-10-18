class Solution {
public:
    static bool duplicate_exist(const vector<char> &arr) {
        unordered_set<char> nums;

        for (char num : arr) {
            if (num == '.') {
                continue;
            }

            if (nums.contains(num)) {
                return true;
            }

            nums.insert(num);
        }

        return false;
    }

    bool isValidSudoku(const std::vector<std::vector<char>> &board) {

        for (int i = 0; i < 9; i++) {
            vector<char> row;
            vector<char> col;
            vector<char> subbox;

            for (int j = 0; j < 9; j++) {
                row.push_back(board[i][j]);
                col.push_back(board[j][i]);

                int row_num = (j / 3) + (3 * (i % 3));
                int col_num = (j % 3) + (3 * (i / 3));
                subbox.push_back(board[row_num][col_num]);
            }

            if (duplicate_exist(row)) {
                return false;
            }

            if (duplicate_exist(col)) {
                return false;
            }

            if (duplicate_exist(subbox)) {
                return false;
            }
        }

        return true;
    }

};
