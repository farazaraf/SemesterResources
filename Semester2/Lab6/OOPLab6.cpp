// task1
// To write a C++ program to perform matrix manipulation using static variable, default argument and friend function.
/*
#include <iostream>
const int size = 5; 
class Matrix {      //Creating a row matrix then inputting values and performing multiplication with a static variable.
    int array_matrix[size];
    static int varX;
public:
    Matrix() { //Simple for loop to assign default values to matrix
        for (int i = 0; i < size; i++)
        {
            array_matrix[i] = i + 1;
        }
    }
    Matrix(int a, int b, int c, int d,int e) 
    { 
        std::cout << "Parameterized Constructor called.\n";
        array_matrix[0] = a;
        array_matrix[1] = b;
        array_matrix[2] = c;
        array_matrix[3] = d;
        array_matrix[4] = e;
    }
    friend void matrixManip(Matrix);
};
int Matrix::varX = 5;
void matrixManip(Matrix m)
{
    std::cout << "Matrix is:\n"
              << "[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << m.array_matrix[i] << " ";
    }
    std::cout << "]\n\n|Matrix Manipulation|\n\nMultiplying Matrix with Static Variable " << Matrix::varX << "\n[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << Matrix::varX * m.array_matrix[i] << " ";
    }
    std::cout << "]\n";
}

int main()
{
    Matrix m(10,20,30,40,50);
    matrixManip(m);
}
*/

