#include<iostream>
using namespace std;
//����Ȼ��m��n���������
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
	cout << "��������Ȼ��m��n" << endl;
	cin >> m >> n;
	cout << m << "��" << n << "�������Ϊ��" << f1(m, n) << endl;
	//��С������=����֮��/�������
	cout << "��С������Ϊ��" << m * n / f1(m, n) << endl;
	system("pause");
	return 0;
}