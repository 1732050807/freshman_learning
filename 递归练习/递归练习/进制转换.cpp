//�ݹ�ʵ�ֽ���ת��
#include<iostream>
using namespace std;
string s = "0123456789ABCDEF";
void x_to_y(int x, int y)
{
	if (x >= y)
		x_to_y(x / y, y);
	//???
	//����elseզ�Ͳ����ˣ�
	//��Ϊ�������else�����е�����ÿ�εݹ�ִֻֻ��һ�룬���ʱ��Ͳ����ӡ���˵�һ��֮��Ķ��������ʧȥ�˵ݹ��������
	cout << s[x % y];
}
//ȡ���ٳ��Ծ��ǽ���ת���ı���
//Ҫ������ݹ������ĸ�����ݣ���һ�������������ʲô������Ϊ������������ķѾ���
int main()
{
	int x, y;
	cin >> x >> y;
	x_to_y(x, y);
	cout << endl;
	system("pause");
	return 0;
}