#include<iostream>
using namespace std;


int main()
{
	int num = 0, k = 0,numberOfRooms = 0;
	cout << "Number = ";
	do {
		cin >> num;
		if (num < 40 || num > 10040)
		{
			cout << "Invalid value" << endl;
		}
	} while (num < 40 || num > 10040);
	do {
		cin >> k;
		if (k < 10 || k > 20)
		{
			cout << "Invalid value" << endl;
		}
	} while (k < 10 || k > 20);
	numberOfRooms = num / k;
	if (num % k != 0)
	{
		numberOfRooms++;
	}
	int arr[100];
	for (int i = 0;i < numberOfRooms - 1;i++)
	{
		arr[i] = num / numberOfRooms;
	}
	arr[numberOfRooms-1] = num - (numberOfRooms - 1)*(num / numberOfRooms);
	for (int i = 0;i < numberOfRooms;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("PAUSE");
	return 0;
}