////用递归函数实现阿克曼函数
//#include<iostream>
//using namespace std;
//int func_AKM(int m, int n)
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	if (m > 0 && n == 0)
//	{
//		return func_AKM(m - 1, 1);
//	}
//	if (m > 0 && n > 0)
//	{
//		return func_AKM(m - 1, func_AKM(m, n - 1));
//	}
//}
//int main()
//{
//	int m, n,result;
//	cout << "请输入m的值：";
//	cin >> m;
//	cout << "请输入n的值：";
//	cin >> n;
//	result = func_AKM(m, n);
//	cout << "结果为：" << result << endl;
//	system("pause");
//	return 0;
//}