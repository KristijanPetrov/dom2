#include<iostream>
using namespace std;
int sum(int num)
{
	int sum1 = 0;
	while (num > 0)
	{
		sum1 += num % 10;
		num /= 10;
	}
	return sum1;
}
bool kratno(int num, int sum)
{
	if (num % sum == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	int num = 0;
	do {
		cin >> num;
		if (num < 111 || num > 22222)
		{
			cout << "Invalid value" << endl;
		}
	} while (num < 111 || num > 22222);
	cout << kratno(num, sum(num)) << endl;

	system("PAUSE");
	return 0;
}