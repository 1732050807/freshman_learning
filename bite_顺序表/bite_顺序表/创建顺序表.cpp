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
//增
//尾插
void push_back(int x)
{
	a[++n] = x;
}
//头插
void push_front(int x)
{
	for (int i = n; i >= 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[1] = x;
	n++;
}
//任意位置插入
void insert(int p,int x)
{
	if (p > n || p <= 0)
	{
		cout << "选择位置不合法" << endl;
	}
	for (int i = n; i >= p; i--)
	{
		a[i + 1] = a[i];
	}
	a[p] = x;
	n++;
}
//删
//尾删
void pop_back()
{
	n--;
}
//头删
void pop_front()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//任意位置删除
void erase(int p)
{
	for (int i = p; i <= n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	if (p <= 0 || p > n)
	{
		cout << "删除位置不合法" << endl;
	}
}
//改
void change(int p, int x)
{
	a[p] = x;
}
//查
//按值查找
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
		cout << "没找到" << endl;
	else
		cout << "位置找到" << endl;
}
void find_pos(int p)
{
	if (p > n || p <= 0)
		cout << "查找位置不合法" << endl;
	cout << a[p] << endl;
}
//清空
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