#include <iostream>
#include<vector>
using namespace std;
int N = 10;
struct node
{
	int x, y;
	int* s;
};
void print(const vector<int>&a)//�ھ�����Ϊ�����Ч�ʣ������Ĳ����������ø�ʽ
//C++�к�������������һ��δ֪��С�����飬��������Ǵ���const
{
	/*int i = 0;
	for (i = 0; i < a.size(); i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;*/
	//�õ�����ʵ�ִ�ӡ����
	//for (vector<int>::const_iterator it = a.begin(); it != a.end(); it++)//const���εĶ������÷�const���εĵ�������vector�в����������ĵ�����Ҳ�б�const���εĵ�����const_iterator
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
	//���������е�����ʱ������ʹ���﷨�Ƿ�Χfor
	for (auto x : a)//��a�е�Ԫ�ش�ǰ����ĸ���x
	{
		cout << x << " ";
	}
	cout << endl;
}
int main()
{
	//����vector 
	vector<int>a1;//����һ����������仯������
	vector<int>a2(N);//����һ����ʼ����ΪN�����������Զ����ݵ�����
	vector<int>a3(N, 2);//����һ����ʼ����ΪN�����������Զ����ݵ����飬�ҽ�������ÿһ��Ԫ�ض���ʼ��Ϊ2
	vector<int>a4 = { 0,1,2,3,4,5,6 };//����һ������������ʱ�仯�ģ��Ѿ���ʼ��һ���ֵ�����
	vector<string>a5;//����һ��������ַ���
	vector<node>a6;//����һ�������ṹ��
	vector<vector<int>>a7;//����һ�����Ϳ����Զ�̬�仯�Ķ�ά����
	//�ص�
	vector<int>a8[10];//����һ�����ȶ�Ϊ10�����飬����Ԫ��ΪvectorҲ���������ά������Զ�̬�仯һ��ά�ȵĳ���

	//size��empty:size���ڲ�����̬����˿̴�С,�����������ͣ�empty�����пգ�����bool����
	cout << a4.size() << endl;
	print(a3);
	if (a1.empty()==true)
	{
		cout << "a1Ϊ��" << endl;
	}
	
	//������begin��end�����ڵ������������������﷨�ǣ���Χfor
	//beginָ���������λ��endָ�������ĩβ�ĺ�һλ

	//�����ӿ�
	a4.push_back(2);
	print(a4);
	a4.pop_back();
	print(a4);
	a4.resize(11);
	print(a4);
	cout << a4.size() << endl;
	a4.clear();
	cout << a4.size() << endl;
	system("pause");
	return 0;
}