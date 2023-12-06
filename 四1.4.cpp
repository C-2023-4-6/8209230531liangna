#include<iostream>
using namespace std;

int main()
{
	int size1, size2;
	cout << "请输入第一个数组个数：\n";
	cin >> size1;
	cout << "请输入第一个数组的元素：\n";
	int list1[10000];
	//数组数不可动态输入
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "请输入第二个数组个数：\n";
	cin >> size2;
	cout << "请输入二个数组的元素：\n";
	int list2[10000];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	int list3[100000];

	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int j = 0; j < size2; j++)
		list3[j + size1] = list2[j];
	//排列新数组
	int temp = 0;
	for (int m = 0; m < size1 + size2 - 1; m++)
	{
		for (int k = 0; k < size1 + size2 - 1 - m; k++)
			if (list3[k] > list3[k + 1])
			{
				temp = list3[k];
				list3[k] = list3[k + 1];
				list3[k + 1] = temp;
			}

	}
	cout << "排列后新数组为：\n";
	for (int k = 0; k < size1 + size2; k++)
		cout << list3[k] << " ";
	cout << endl;

	system("pause");
	return 0;
}
