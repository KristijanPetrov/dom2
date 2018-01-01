#include<iostream>
using namespace std;


int main()
{
	int n = 0;
	do {
		cin >> n;
		if (n < 1 || n > 40)
		{
			cout << "Invalid number" << endl;
		}
	} while (n < 1 || n > 40);
	int arr[40];
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2;i < 40;i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n-1] << endl;



	system("PAUSE");
	return 0;
}