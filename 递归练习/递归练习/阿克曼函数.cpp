////�õݹ麯��ʵ�ְ���������
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
//	cout << "������m��ֵ��";
//	cin >> m;
//	cout << "������n��ֵ��";
//	cin >> n;
//	result = func_AKM(m, n);
//	cout << "���Ϊ��" << result << endl;
//	system("pause");
//	return 0;
//}