#include<iostream>
#include<Cstring>
using namespace std;
void count(const char s[], int counts[]);
void tans(char &ch);
void count(const char s[], int counts[])
{
	//ȷ���ַ�������
	int size = strlen(s);
	//һ������ȡ����counts������ĸ��Ӧ��Ԫ���ۼ�
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 26; j++)
			if ((j + 97) == (int)s[i])
				counts[j]++;
	}
	//��ӡ
	for (int j = 0; j < 26; j++)
	{
		cout << (char)(j + 97) << "����=" << counts[j] << endl;
	}
}
//��д��ĸת��ΪСд��ĸ
void tans(char &ch)
{
	int asc = (int)ch;
	if (asc >= 65 && asc <= 90)
		ch = ch + 32;

}
//���õ�ַ���ݸı�ʵ��
int main()
{
	char str[999];
	int counts[26] = { 0 };
	//�����ַ���
	cout << "Enter a string:";
	cin.getline(str, 999);
	int size = strlen(str);
	//ת����Сд
	for (int i = 0; i < size; i++)
	{
		tans(str[i]);
	}
	
	count(str, counts);

	system("pause");
	return 0;
}