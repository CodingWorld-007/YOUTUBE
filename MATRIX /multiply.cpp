#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the row of Matrix 1 : ";
    cin >> row1;
    cout << "Enter the column of Matrix 1 : ";
    cin >> col1;
    cout << "Enter the row of Matrix 2 : ";
    cin >> row2;
    if(row2 != col1) {
        cout << "Column of Matrix 1 and Row of Matrix 2 must be Equal" << endl;
        return 0;
    }
    cout << "Enter the column of Matrix 2 : ";
    cin >> col2;

    int M1[row1][col1];
    int M2[row2][col2];
    int R[row1][col2] = {0};

    cout << "Enter the Values of Matrix 1 : " << endl;
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            cin >> M1[i][j];
        }
    }

    cout << "Enter the Values of Matrix 2 : " << endl;
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            cin >> M2[i][j];
        }
    }

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            for(int k = 0; k < col1; k++) {
                R[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    
    cout << "Resultant Matrix is : " << endl;
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            cout << R[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
