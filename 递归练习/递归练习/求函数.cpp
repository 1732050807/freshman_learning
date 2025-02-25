////用递归完成f(x,n)函数
//#include<iostream>
//using namespace std;
//double func_f(double x, int n)
//{
//	if (n == 1)
//		return x / (x + 1);
//	else
//		return x / (n + func_f(x, n - 1));
//}
//int main()
//{
//	int n;
//	double x;
//	cin >> x >> n;
//	double result = func_f(x, n);
//	printf("%.2lf", result);//保留小数点就直接用c内容简单
//	system("pause");
//	return 0;
//}