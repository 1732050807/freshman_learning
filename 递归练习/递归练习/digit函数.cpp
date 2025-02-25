////递归实现digit和函数
//#include<iostream>
//#include<cmath>
//using namespace std;
//int digit(int n,int k)
//{
//	if (k == 1)
//	{
//		return n % 10;
//	}
//	else
//	{
//		return digit(n / 10, k - 1);
//	}
//		//错误思想：
//		//int item1,item2,item3;
//		//item1 = pow(10, k);
//		//item2 = pow(10, k - 1);
//		//item3 = pow(10, k - 2);
//		//return ((n % item1) - digit(n,k-1) * item3) / item2;
//		
//		//错误总结：
//		//一个整型不会有小数点，在对整型做除法时，即使的数手算出有小数点，也会强转消去，利用这一点，我们就不必再想小数点怎么处理了
//		//则如func_digit(1286,3)就可以化小为digit(128,2)，以此类推
//}
//int main()
//{
//	int k,n,result;
//	cout << "请输入你想要查找的数字：";
//	cin >> n;
//	cout << "请输入你想查找的位数：";
//	cin >> k;
//	result = digit(n, k);
//	cout << "结果是：" << result << endl;
//	system("pause");
//	return 0;
//}