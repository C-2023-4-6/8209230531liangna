#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{//循环，若2到n-1存在n的因数则n不为素数
	bool flag = 1;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
bool is_prime(int num);
int main()
{//利用函数和循环打印前200个素数，每行10个输出
	int count = 0;
	int number = 2;
	const int line = 10;
	while (count < 200)
	{  if(is_prime(number))
	   {
		count++;
		if (count % line == 0)
			cout << setw(5) << number << '\t'<<endl;
		else cout <<setw(5)<< number;
	    //通过操纵符setw设置输出宽度，右对齐，空格填充，注意添加头文件#include<iomanip>
	   
	    }
	number++;

	}



	system("pause");
	return 0;
}