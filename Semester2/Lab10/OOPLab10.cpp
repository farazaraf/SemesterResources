// OOPLab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//task1
/*#include<iostream>
using namespace std;
const int X = 2;
template<typename T>
class Matrix
{
    T x[X], y[X];
    T tempMatrix[X];
public:
    Matrix(){
        for (int i = 0; i < X; i++)
        {
            cout << "\nEnter Elements of First Matrix.\n";
            cin >> x[i];
            cout << "\nEnter Elements of Second Matrix.\n";
            cin >> y[i];
        }  
    }
    void Addition()//addition
    {
        for (int i = 0; i < X; i++)
        {
            tempMatrix[i] = x[i] + y[i];
        }
        cout << "\nSum of Matrices:\n[";
        for (int i = 0; i < X; i++)
        {
            cout << tempMatrix[i] << " ";;
        }
        cout << "]\n";
    }
    void Subtraction()
    {
        for (int i = 0; i < X; i++)
        {
            tempMatrix[i] = x[i] - y[i];
        }
        cout << "\nDifference of Matrices:\n[";
        for (int i = 0; i < X; i++)
        {
            cout << tempMatrix[i] << " ";
        }
        cout << "]\n";
    }
};
int main()
{
    Matrix<int> obj1;
    obj1.Addition();
    obj1.Subtraction();
}*/