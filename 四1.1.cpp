#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int in[size];
	cout << "请输入10个数字：" << endl;
	for (int i = 0; i < size; i++)
		cin >> in[i];
	cout << "打印的数字为："<<in[0] << " " << endl;
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