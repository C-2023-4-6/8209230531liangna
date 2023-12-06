#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side3 + side2 > side1 &&side1 + side3 > side2)
	{
		if (side1 == 0 || side2 == 0 || side3 == 0)
			return false;
		else return true;
	}
	else 
			return false;
	
}
double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return area;
}
int main()
{
	double m, n, z;
	cout << "请输入三角形三边：" << endl;
	cin >> m >> n >> z;
	if (is_valid(m, n, z))
		cout << "该三角形面积为：" << area(m, n, z) << endl;
	else cout << "输入存在错误,请重新输入" << endl;


	system("pause");
	return 0;
}