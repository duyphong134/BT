//B7

#include <iostream>
using namespace std;

void printLine(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int rows; cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        printLine(rows - i, 2 * i - 1);
    }
    return 0;
}


