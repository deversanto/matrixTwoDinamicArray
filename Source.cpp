#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int nRows;
	int nCols;
	
	cout << "Enter the numbre of rows and colomns" << endl;
	cin >> nRows >> nCols;
	cout << "Please your matrix" << endl;

	int** arr = new int* [nRows];

	for (int i = 0; i < nRows; i++) // 1-Step. Matrix creation
	{
		arr[i] = new int[nCols];
	}

	for (int i = 0; i < nRows; i++) // 2-Step. Matrix filing
	{
		for (int j = 0; j < nCols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < nRows; i++) //3-Step. Matrix display
	{
		for (int j = 0; j < nCols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < nRows; i++) // delete matrix!!!
	{
		delete[] arr[i];
	}

	delete[] arr;
	cin.get();
}