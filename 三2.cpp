#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{//ѭ������2��n-1����n��������n��Ϊ����
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
{//���ú�����ѭ����ӡǰ200��������ÿ��10�����
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
	    //ͨ�����ݷ�setw���������ȣ��Ҷ��룬�ո���䣬ע�����ͷ�ļ�#include<iomanip>
	   
	    }
	number++;

	}



	system("pause");
	return 0;
}