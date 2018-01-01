#include<iostream>
using namespace std;


int main()
{
	const int MAXSIZE = 6;
	int arr[MAXSIZE][MAXSIZE] =
	{
		11,12,13,14,15,16,
		21,22,23,24,25,26,
		31,32,33,34,35,36,
		41,42,43,44,45,46,
		51,52,53,54,55,56,
		61,62,63,64,65,66
	};
	int sum = 0, sumAll = 0;
	for (int i = 0;i < MAXSIZE;i++)
	{
		for (int j = 0;j < MAXSIZE;j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				cout << "  ,";
			}
			else
			{
				cout << arr[i][j] << ',';
				sum += arr[i][j];
			}
		}
		cout << " Sum = " << sum << endl;
		sumAll += sum;
		sum = 0;
	}
	cout << "Sum of all odd numbers = " << sumAll << endl;

	system("PAUSE");
	return 0;
}