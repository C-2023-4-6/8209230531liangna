#include<iostream>
using namespace std;

int main()
{
	int size1, size2;
	cout << "�������һ�����������\n";
	cin >> size1;
	cout << "�������һ�������Ԫ�أ�\n";
	int list1[10000];
	//���������ɶ�̬����
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "������ڶ������������\n";
	cin >> size2;
	cout << "��������������Ԫ�أ�\n";
	int list2[10000];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	int list3[100000];

	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int j = 0; j < size2; j++)
		list3[j + size1] = list2[j];
	//����������
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
	cout << "���к�������Ϊ��\n";
	for (int k = 0; k < size1 + size2; k++)
		cout << list3[k] << " ";
	cout << endl;

	system("pause");
	return 0;
}
