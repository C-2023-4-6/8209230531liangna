#include<iostream>
using namespace std;
void main()
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
cout << "i = " << i << '\t' << "j = " << j << '\n' << "pi = " << pi << '\t' << "pj = " << pj << endl;

cout << "&i = " << &i << '\t' << "*&i = " << *&i << '\n' << "&j = " << &j << '\t' << "*&j = " << *&j << endl;
system("pause");

    }
