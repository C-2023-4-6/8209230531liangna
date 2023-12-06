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
	cout << "第一天猴子共摘" << sum << "个桃子" << endl;

	system("pause");
	return 0;
}