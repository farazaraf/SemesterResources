#include <iostream>

using namespace std;

int main()
{
	const int row = 3;
	const int col = 4;
	int numbers[row][col];
	int sumRows[row], sumColumns[col];
	int sum;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "input number at row " << i << " col " << j << " : ";
			cin >> numbers[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
	sum = 0;
	for (int j = 0; j < col; j++)
	{
	sum += numbers[i][j];
	}
	sumRows[i] = sum;
	}
	for (int i = 0; i < col; i++)
	{
	sum = 0;
	for (int j = 0; j < row; j++)
	{
	sum += numbers[j][i];
	}
	sumColumns[i] = sum;
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
	cout << "Sum of row " << i << " is " << sumRows[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < col; i++)
	{
	cout << "Sum of col " << i << " is " << sumColumns[i] << endl;
	}
}