#include<iostream>
using namespace std;


int main()
{
	int number = 1, count = 0;
	do {
		if (number % 2 == 1 && number % 3 == 2 && number % 4 == 3 && number % 5 == 4 && number % 6 == 5 && number % 7 == 6
			&& number % 8 == 7 && number % 9 == 8)
		{
			cout << number << " ";
			count++;
		}
		number++;
	} while (count < 4);


	system("PAUSE");
	return 0;
}