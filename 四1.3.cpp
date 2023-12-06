#include<iostream>
using namespace std;

int main()
{
	bool locker[100];
	for (int i = 0; i < 100; i++)
	{
		locker[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int k = j; k < 100; k += j + 1)
			if (locker[k])
				locker[k] = false;
			else
				locker[k] = true;

	}
	for (int i = 0; i < 100; i++)
	{
		if (locker[i])
			cout << i + 1 << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

