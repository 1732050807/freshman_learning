//递归实现进制转换
#include<iostream>
using namespace std;
string s = "0123456789ABCDEF";
void x_to_y(int x, int y)
{
	if (x >= y)
		x_to_y(x / y, y);
	//???
	//加上else咋就不对了？
	//因为如果加上else函数中的内容每次递归只只执行一半，归的时候就不会打印除了第一次之外的东西，这就失去了递归的整体性
	cout << s[x % y];
}
//取余再除以就是进制转换的本质
//要搞清楚递归是往哪个方向递，第一个归出来的又是什么，别因为分析不清楚而耗费精力
int main()
{
	int x, y;
	cin >> x >> y;
	x_to_y(x, y);
	cout << endl;
	system("pause");
	return 0;
}