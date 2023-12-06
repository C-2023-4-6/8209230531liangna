#include<iostream>
#include<Cstring>
using namespace std;
void count(const char s[], int counts[]);
void tans(char &ch);
void count(const char s[], int counts[])
{
	//确定字符串总数
	int size = strlen(s);
	//一个个读取并在counts数组字母对应的元素累加
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 26; j++)
			if ((j + 97) == (int)s[i])
				counts[j]++;
	}
	//打印
	for (int j = 0; j < 26; j++)
	{
		cout << (char)(j + 97) << "数量=" << counts[j] << endl;
	}
}
//大写字母转化为小写字母
void tans(char &ch)
{
	int asc = (int)ch;
	if (asc >= 65 && asc <= 90)
		ch = ch + 32;

}
//采用地址传递改变实参
int main()
{
	char str[999];
	int counts[26] = { 0 };
	//输入字符串
	cout << "Enter a string:";
	cin.getline(str, 999);
	int size = strlen(str);
	//转化大小写
	for (int i = 0; i < size; i++)
	{
		tans(str[i]);
	}
	
	count(str, counts);

	system("pause");
	return 0;
}