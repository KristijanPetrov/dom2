#include<iostream>
using namespace std;


int main()
{
	const int MAXSIZE = 10;
	int arr1[MAXSIZE][MAXSIZE];
	int arr2[MAXSIZE][MAXSIZE];
	int arr3[MAXSIZE][MAXSIZE];
	int R = 0, K = 0, sum = 0;
	do {
		cout << "Rows = ";
		cin >> R;
		if (R < 3 || R > 10)
		{
			cout << "Invalid value" << endl;
		}
	} while (R < 3 || R > 10);
	do {
		cout << "Cols = ";
		cin >> K;
		if (K < 3 || K >10)
		{
			cout << "Invalid value" << endl;
		}
	} while (K < 3 || K > 10);

	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			do {
				cin >> arr1[i][j];
				if (arr1[i][j] < 0 || arr1[i][j]>22)
				{
					cout << "Invalid value" << endl;
				}
			} while (arr1[i][j] < 0 || arr1[i][j]>22);
		}
	}
	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			arr2[i][j] = 1;
			sum += arr2[i][j];
		}
	}
	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			arr3[i][j] = arr1[i][j] * sum;
		}
	}
	cout << endl;
	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < R;i++)
	{
		for (int j = 0;j < K;j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	system("PAUSE");
	return 0;
}