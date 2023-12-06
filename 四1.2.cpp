#include<iostream>
using namespace std;
void bubble(double arr[10])
{
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 10 - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}
int main()
{
	double arr[10];
	cout << "请输入十个数字：\n";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	bubble(arr);
	for (int i = 0; i < 10; i++)
		cout << arr[i]<<" ";
	cout << endl;

	system("pause");
	return 0;
}