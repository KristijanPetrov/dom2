#include<iostream>
using namespace std;


int main()
{
	int num = 0, k = 0,i = 0,j = 0,arr[100];
	cout << "Number = ";
	do {
		cin >> num;
		if (num < 1000 || num > 1000000)
		{
			cout << "Invalid value" << endl;
		}
	} while (num < 1000 || num > 1000000);
	cin >> k;
	while (num > 0)
	{
		arr[i] = num % 2;
		i++;
		num /= 2;
	}
	int countZero = 0, maxZero = 0;
	cout << "Binary number = ";
	for (j = i - 1;j >= 0;j--)
	{
		cout << arr[j];
		if (arr[j] == 0)
		{
			countZero++;
		}
		else
		{
			countZero = 0;
		}
		if (countZero > maxZero)
		{
			maxZero = countZero;
		}
	}
	cout << endl;
	if (maxZero >= k)
	{
		cout << "The number has at least " << k << " zeroes in a row" << endl;
	}
	else
	{
		cout << "The number does not have " << k << " zeroes in a row" << endl;
	}



	system("PAUSE");
	return 0;
}