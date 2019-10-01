#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int nRows;
	int nCols;

	cout << "Введите количество сторок и колонок" << endl;
	cin >> nRows >> nCols;
	cout << "Пожалуйста, ваша матрица" << endl;

	int** arr = new int* [nRows];
	for (int i = 0; i < nRows; i++)
	{
		arr[i] = new int[nCols];
	}

	for (int i = 0; i < nRows; i++)
	{
		for (int j = 0; j < nCols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < nRows; i++)
	{
		for (int j = 0; j < nCols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < nRows; i++) // delte matrix
	{
		delete[] arr[i];
	}

	delete[] arr;

	cin.get();
}