#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int in[size];
	cout << "������10�����֣�" << endl;
	for (int i = 0; i < size; i++)
		cin >> in[i];
	cout << "��ӡ������Ϊ��"<<in[0] << " " << endl;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (in[i] != in[j])
			{
				if (j == i - 1)
					cout << in[i] << endl;
				else 
					continue;
			}
			else 
				break;
		}
	}

	system("pause");
	return 0;
}