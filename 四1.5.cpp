#include<iostream>
#include<string>
#include<Cstring>
#define size 999
using namespace std;

int indexof(const char s1[],const char s2[])
{
	int size1, size2, num = 0;
	int index[size], k[size];
	for (int i = 0; i < size; i++)
	{
		index[i] = -1;
		k[i] = 0;
	}
	size1 = strlen(s1);//s1�ַ�������
	size2 = strlen(s2);//s2�ַ�������
	for (int i = 0; i < size2; i++)
	{
		if (s1[0] == s2[i])//ȷ���Ƿ����s2�ĵ�i���ַ���s1������ĸ��ͬ
		{
			index[num] = i;//��¼s2�±�i
			num++;
		}
	}
	
	
	if (index[0] == -1)//����������������i
	{
		return -1;
	}
	
	else {

		for (int m = 0; m < num; m++)//��֤ӵ��s2����s1����ĸ��ͬ���ַ���Ԫ���Ƿ�Ϊs1
		{
			for (int i = 1; i < size1; i++) {
				for (int j = index[m] + 1; j < index[m] + size1; j++) {
					if (s1[i] == s2[j]) {
						k[m]++;
						break;
					}
				}
			}
		}
	}
		//ɸѡ��Ϊ�ִ�����ĸ��i
		for (int i = 0; i < num; i++) {
			
			if (k[i] == size1 - 1) {
				return index[i];
			}
			else return -1;
		}
	
		

	
}
int main()
{
	char s1[size], s2[size];
	cout << "�������һ���ַ���\n";
	cin.getline(s1, size);
	cout << "������ڶ����ַ�����\n";
	cin.getline(s2, size);
	cout << indexof(s1, s2);
	system("pause");
	return 0;

}