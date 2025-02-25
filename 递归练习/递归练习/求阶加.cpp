////用递归的方式求1+2+3+4+...+N的和
//#include<iostream>
//using namespace std;
//int func_sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//		return n + func_sum(n - 1);
//	//将一个较大的问题：1到n的求和，剥离成一个数据和一个小一些的问题的组合也就是：n+“1到n-1的和”
//	//发现当一直剥离到1时剥离不下去了，则结束在1
//}
//int main()
//{
//	int n;
//	cout << "请输入你想计算的阶数：";
//	cin >> n;
//	cout << "结果为：" << func_sum(n) << endl;
//	system("pause");
//	return 0;
//}