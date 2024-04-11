#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printBoard(char** board, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void placeMines(char** board, int numRows, int numCols, int numMines) {
    while (numMines > 0) {
        int row = rand() % numRows;
        int col = rand() % numCols;

        if (board[row][col] != '*') {
            board[row][col] = '*';
            numMines--;
        }
    }
}

char** createBoard(int numRows, int numCols, int numMines) {
    char** board = new char*[numRows];
    for (int i = 0; i < numRows; ++i) {
        board[i] = new char[numCols];
        for (int j = 0; j < numCols; ++j) {
            board[i][j] = '.';
        }
    }

    placeMines(board, numRows, numCols, numMines);

    return board;
}

int main(int argc, const char * argv[]) {
    if (argc != 4) {
        cout << "Usage: " << argv[0] << " <numRows> <numCols> <numMines>" << endl;
        return 1;
    }

    int numRows = atoi(argv[1]);
    int numCols = atoi(argv[2]);
    int numMines = atoi(argv[3]);

    srand(time(nullptr));

    if (numRows <= 0 || numCols <= 0 || numMines <= 0 || numMines >= numRows * numCols) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    char** board = createBoard(numRows, numCols, numMines);

    printBoard(board, numRows, numCols);

    // Free memory
    for (int i = 0; i < numRows; ++i) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
