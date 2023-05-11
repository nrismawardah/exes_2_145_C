#include <iostream>
using namespace std;

int nr[41];
int n;
int lowerbound = 0;
int upperbound = n - 1;
int mid;

while (lowerbound <= upperbound) {
	mid = (lowerbound + upperbound) / 2;
}

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 41))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 41 elements.\n\n";
	}
	cout << "\n-----------------\n";
	cout << "Enter array element\n";
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> nr[i];
	}
}


void Search()
{
	int ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n - 1; i++)
		{
			ctr++;
			for (i = 0; i < n - 1; i++)
			{
				cout << "\n" << item << " Found " << (i + 1) << endl;
				break;
			}
		}

		if (nr[mid] == n) {
			cout <<
		}
			cout << "\n" << 
	} while ((ch == 'y') || (ch == 'Y'));
}