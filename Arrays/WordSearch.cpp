class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0, visited)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index, vector<vector<bool>>& visited) {
        if (index == word.size()) {
            return true;
        }
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index] || visited[i][j]==1) {
            return false;
        }
        
        visited[i][j] = true;
        
        bool found = dfs(board, word, i + 1, j, index + 1, visited) ||
                     dfs(board, word, i - 1, j, index + 1, visited) ||
                     dfs(board, word, i, j + 1, index + 1, visited) ||
                     dfs(board, word, i, j - 1, index + 1, visited);
        
        visited[i][j] = false;
        return found;
    }
};
