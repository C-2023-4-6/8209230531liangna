#include<iostream>
using namespace std;
int f(int num);
int f(int num )
{
	return 2 * (num + 1);
}
int main()
{
	int sum = 1;
	for (int i = 1; i < 10; i++)
	{
		sum = f(sum);
	}
	cout << "��һ����ӹ�ժ" << sum << "������" << endl;

	system("pause");
	return 0;
}