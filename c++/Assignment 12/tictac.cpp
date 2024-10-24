#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printBoard(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool checkWin(const vector<vector<char>> &board, char player)
{
    for (int i = 0; i < 3; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    return false;
}
int main()
{
    vector<vector<char>> board(3, vector<char>(3, '-'));
    bool player1_turn = true;
    bool game_over = false;
    char current_player = 'X';
    while (!game_over)
    {
        printBoard(board);
        int row, col;
        cout << "Player " << current_player << ", enter row and column (0-2): ";
        cin >> row >> col;
        if (board[row][col] != '-')
        {
            cout << "That cell is already occupied! Try again." << endl;
            continue;
        }
        board[row][col] = current_player;
        if (checkWin(board, current_player))
        {
            cout << "Player " << current_player << " wins!" << endl;
            game_over = true;
        }
        else
        {
            bool board_full = true;
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 3; ++j)
                {
                    if (board[i][j] == '-')
                    {
                        board_full = false;
                        break;
                    }
                }
                if (!board_full)
                {
                    break;
                }
            }
            if (board_full)
            {
                cout << "It's a draw!" << endl;
                game_over = true;
            }
            else
            {
                player1_turn = !player1_turn;
                current_player = (player1_turn) ? 'X' : 'O';
            }
        }
    }
    printBoard(board);
    return 0;
}
