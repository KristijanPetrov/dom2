#include<iostream>
using namespace std;


int main()
{
	const int MAXSIZE = 105;
	int arr[MAXSIZE][2];
	int N = 0;
	cout << "Number of pairs: ";
	do {
		cin >> N;
		if (N < 5 || N > 105)
		{
			cout << "Invalid value";
		}
	} while (N < 5 || N > 105);
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i < N;i++)
	{
		cout << arr[i][0] << " / " << arr[i][1] << " = " << (arr[i][0] * 100) / arr[i][1] << '%' << endl;
	}

	system("PAUSE");
	return 0;
}