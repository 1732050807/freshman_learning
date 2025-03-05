#include<iostream>
using namespace std;
int a[10010];
int n;
void print()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;
}
//��
//β��
void push_back(int x)
{
	a[++n] = x;
}
//ͷ��
void push_front(int x)
{
	for (int i = n; i >= 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[1] = x;
	n++;
}
//����λ�ò���
void insert(int p,int x)
{
	if (p > n || p <= 0)
	{
		cout << "ѡ��λ�ò��Ϸ�" << endl;
	}
	for (int i = n; i >= p; i--)
	{
		a[i + 1] = a[i];
	}
	a[p] = x;
	n++;
}
//ɾ
//βɾ
void pop_back()
{
	n--;
}
//ͷɾ
void pop_front()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//����λ��ɾ��
void erase(int p)
{
	for (int i = p; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	if (p <= 0 || p > n)
	{
		cout << "ɾ��λ�ò��Ϸ�" << endl;
	}
}
//��
void change(int p, int x)
{
	a[p] = x;
}
//��
//��ֵ����
void find_num(int x)
{
	int count=0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == x)
		{
			cout << i<<" ";
			count++;
		}
	}
	if (count == 0)
		cout << "û�ҵ�" << endl;
	else
		cout << "λ���ҵ�" << endl;
}
void find_pos(int p)
{
	if (p > n || p <= 0)
		cout << "����λ�ò��Ϸ�" << endl;
	cout << a[p] << endl;
}
//���
void delete_all()
{
	n = 0;
}
int main()
{
	push_back(1);
	push_back(2);
	push_back(1);
	print();
	push_back(1);
	push_back(5);
	push_front(6);
	print();
	pop_back();
	print();
	pop_front();
	print();
	find_num(1);
	find_pos(2);
	delete_all();
	system("pause");
	return 0;
}