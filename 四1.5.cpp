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
	size1 = strlen(s1);//s1字符串长度
	size2 = strlen(s2);//s2字符串长度
	for (int i = 0; i < size2; i++)
	{
		if (s1[0] == s2[i])//确认是否存在s2的第i个字符与s1的首字母相同
		{
			index[num] = i;//记录s2下标i
			num++;
		}
	}
	
	
	if (index[0] == -1)//不存在满足条件的i
	{
		return -1;
	}
	
	else {

		for (int m = 0; m < num; m++)//验证拥有s2中与s1首字母相同的字符串元素是否为s1
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
		//筛选出为字串首字母的i
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
	cout << "请输入第一个字符串\n";
	cin.getline(s1, size);
	cout << "请输入第二个字符串：\n";
	cin.getline(s2, size);
	cout << indexof(s1, s2);
	system("pause");
	return 0;

}