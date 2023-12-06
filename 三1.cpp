#include<iostream>
using namespace std;
//求自然数m，n的最大公因数
int f1(int x, int y)
{
	int j = 1;
	for (int i = 1; i <= x || i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
			j = i;
	}
	return j;

}
int main()
{
	int m, n;
	cout << "请输入自然数m和n" << endl;
	cin >> m >> n;
	cout << m << "与" << n << "最大公因数为：" << f1(m, n) << endl;
	//最小公倍数=两数之积/最大公因数
	cout << "最小公倍数为：" << m * n / f1(m, n) << endl;
	system("pause");
	return 0;
}