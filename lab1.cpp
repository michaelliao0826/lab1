#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int n;

	while(1)
	{
		cout << "Please enter an input: (Enter 0 to exit)" << endl;
		cin >> n;
		if (n == 0)// set a number(0) that can exit the program
		{
			exit(1);
		}

		cout << n << " ";

		while (n >= 1)
		{
			if(n % 2 == 0)// n is even than / 2
			{
				n = n / 2;
				cout << n << " ";
			}
			else if(n % 2 == 1 && n != 1)// when n is odd than * 3 + 1 (except it is 1)
			{
				n = n * 3 + 1;
				cout << n << " ";
			}
			else// when n is 1
			{
				break;
			}

		}
		cout << endl;
	}
	return 0;
}

