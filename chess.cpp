#include <iostream>
using namespace std;

// Chess board representation
char board[8][8] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

// Function to display the chess board
void displayBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int startX, startY, endX, endY;

    while (true) {
        displayBoard();

        // Get user input for the move
        cout << "Enter the starting position (x y): ";
        cin >> startX >> startY;
        cout << "Enter the ending position (x y): ";
        cin >> endX >> endY;

        // Check if the move is valid and update the board
        if (startX >= 0 && startX < 8 && startY >= 0 && startY < 8 &&
            endX >= 0 && endX < 8 && endY >= 0 && endY < 8) {
            board[endY][endX] = board[startY][startX];
            board[startY][startX] = ' ';
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    return 0;
}
