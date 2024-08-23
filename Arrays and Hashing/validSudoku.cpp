class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // check for rows
        for (int r = 0; r < 9; r++)
        {
            unordered_set<char> rows;
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] != '.' and rows.find(board[r][c]) != rows.end())
                {
                    return false;
                }
                rows.insert(board[r][c]);
            }
        }

        // check for cols
        for (int c = 0; c < 9; c++)
        {
            unordered_set<char> cols;
            for (int r = 0; r < 9; r++)
            {
                if (board[r][c] != '.' and cols.find(board[r][c]) != cols.end())
                {
                    return false;
                }
                cols.insert(board[r][c]);
            }
        }

        // check for 3x3 subgrids

        vector<unordered_set<char>> subGrids(9);

        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                int idx = (r / 3) * 3 + (c / 3);
                if (board[r][c] != '.' and subGrids[idx].find(board[r][c]) != subGrids[idx].end())
                {
                    return false;
                }
                subGrids[idx].insert(board[r][c]);
            }
        }

        return true;
    }
};
