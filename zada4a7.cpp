#include<iostream>
using namespace std;

bool equalNum(int num) {
	num *= 18;
	while (num >= 10)
	{
		if (num % 10 != num / 10 % 10)
		{
			return false;
		}
		num /= 10;
	}
	return true;
}
int main()
{
	for (int i = 1;; i++)
	{
		if (equalNum(i) == true) 
		{
			cout << i << endl;
			break;
		}
	}

	system("PAUSE");
	return 0;
}