////�ݹ�ʵ��digit�ͺ���
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
//		//����˼�룺
//		//int item1,item2,item3;
//		//item1 = pow(10, k);
//		//item2 = pow(10, k - 1);
//		//item3 = pow(10, k - 2);
//		//return ((n % item1) - digit(n,k-1) * item3) / item2;
//		
//		//�����ܽ᣺
//		//һ�����Ͳ�����С���㣬�ڶ�����������ʱ����ʹ�����������С���㣬Ҳ��ǿת��ȥ��������һ�㣬���ǾͲ�������С������ô������
//		//����func_digit(1286,3)�Ϳ��Ի�СΪdigit(128,2)���Դ�����
//}
//int main()
//{
//	int k,n,result;
//	cout << "����������Ҫ���ҵ����֣�";
//	cin >> n;
//	cout << "������������ҵ�λ����";
//	cin >> k;
//	result = digit(n, k);
//	cout << "����ǣ�" << result << endl;
//	system("pause");
//	return 0;
//}