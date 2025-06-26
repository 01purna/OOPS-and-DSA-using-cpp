/*
Write a Program to find sum of two 3 X 3 matrix by overloading binary operator +.
*/
#include <iostream>
using namespace std;
class Matrix {
    int mat[3][3];
    public:
    void input(){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> mat[i][j];
            }
        }
    }
    Matrix operator +(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }
    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Matrix m1, m2, m3;
    cout << "Enter elements for Matrix 1:" << endl;
    m1.input();
    cout << "Enter elements for Matrix 2:" << endl;
    m2.input();
    m3 = m1 + m2;
    cout << "Sum of Matrices:" << endl;
    m3.display();
    return 0;
}
