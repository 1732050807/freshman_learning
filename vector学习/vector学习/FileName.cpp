#include <iostream>
#include<vector>
using namespace std;
int N = 10;
struct node
{
	int x, y;
	int* s;
};
void print(const vector<int>&a)//在竞赛中为了提高效率，函数的参数都用引用格式
//C++中函数参数不能是一个未知大小的数组，解决方法是带上const
{
	/*int i = 0;
	for (i = 0; i < a.size(); i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;*/
	//用迭代器实现打印函数
	//for (vector<int>::const_iterator it = a.begin(); it != a.end(); it++)//const修饰的对象不能用非const修饰的迭代器，vector中不仅有正常的迭代器也有被const修饰的迭代器const_iterator
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
	//当容器中有迭代器时，可以使用语法糖范围for
	for (auto x : a)//将a中的元素从前往后的给到x
	{
		cout << x << " ";
	}
	cout << endl;
}
int main()
{
	//创建vector 
	vector<int>a1;//创建一个容量随意变化的数组
	vector<int>a2(N);//创建一个起始容量为N的容量可以自动扩容的数组
	vector<int>a3(N, 2);//创建一个起始容量为N的容量可以自动扩容的数组，且将数组中每一个元素都初始化为2
	vector<int>a4 = { 0,1,2,3,4,5,6 };//创建一个容量可以随时变化的，已经初始化一部分的数组
	vector<string>a5;//创建一个数组存字符串
	vector<node>a6;//创建一个数组存结构体
	vector<vector<int>>a7;//创建一个长和宽都可以动态变化的二维数组
	//重点
	vector<int>a8[10];//创建一个长度定为10的数组，但是元素为vector也就是这个二维数组可以动态变化一个维度的长度

	//size和empty:size用于测量动态数组此刻大小,返回整数类型，empty用于判空，返回bool类型
	cout << a4.size() << endl;
	print(a3);
	if (a1.empty()==true)
	{
		cout << "a1为空" << endl;
	}
	
	//迭代器begin和end，存在迭代器的容器可以用语法糖：范围for
	//begin指向数组的首位，end指向数组的末尾的后一位

	//其他接口
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