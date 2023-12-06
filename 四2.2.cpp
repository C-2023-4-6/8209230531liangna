#include<iostream>
#include<Cstring>
#include<math.h>
using namespace std;
//将字母转化为10进制
int tansf(char ch)
{
	if ((int)ch >= 65 && (int)ch <= 70)
		return (int)ch - 55;
}
int parseHex(const char* const hexString)
{
	int size = strlen(hexString), num = 0,time=0;
	for (int i = size - 1; i >= 0; i--)
	{
		if (hexString[i] >=65 && hexString[i] <=70)
			num += tansf(hexString[i]) * pow(16, time);
		else { num += (hexString[i] - '0') * pow(16, time); }
		time++;
	
	}
	return num;

}
int main()
{
	char str[999];
	cout << "Emter a string:";
	cin.getline(str, 999);
	cout << parseHex(str) << endl;


	system("pause");
	return 0;
}
