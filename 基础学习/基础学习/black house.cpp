//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***输出***//
//
//#include<iostream>
//using namespace std;
//#define c  110
//int main()
//{
//	int a = 12;
//	const int b = 5;
//	cout << "嗨嗨" << a << "嘿嘿" << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***变量常量和C语言一样除字符串有些许出入***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	cout << "请输入一个值" << endl;
//	cin >> a;
//	cout << "a的值为" << a << endl;
//	float b = 0.0f;
//	cout << "请输入一个浮点值" << endl;
//	cin >> b;
//	cout << "值为" << b << endl;
//	char c = 'c';
//	cout << "请给c赋值" << endl;
//	cin >> c;
//	cout << "值为" << c << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***三目运算符***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 20; 
//	int b = 10;
//	int c = 0;
//	c = (a > b ? a : b);
//	cout << "最大的是" << c << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***随机数函数***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0,b;
//	b=rand() % 3;//这个%3规定了随机数在0，1，2中取
//	cout << "请玩家猜测" << endl;
//	cin >> a;
//	while (a != b)
//	{
//		cout << "猜错了，重猜" << endl;
//		cin >> a;
//		if (a == b)
//		{
//			cout << "猜对了" << endl;
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//***随机数进阶***//
//
//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	int a=0;
//	int b=0;
//	cout << "请猜数" << endl;
//	cin >> a;
//	srand((unsigned int)time(NULL));
//	b = rand() % 100 + 1;
//		while (1) {
//			if (a > b)
//			{
//				cout << "猜的大了" << endl;
//			}
//			else if (a < b)
//			{
//				cout << "猜的小了" << endl;
//			}
//			else
//			{
//				cout << "草,对了" << endl;
//				break;
//			}
//			cout << "再输入一遍" << endl;
//			cin >> a;
//		}
//	system("pause");
//	return 0;
//}
//
//
//
//***随机数函数***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10,b=15;
//	const int* p = &a;
//	p = &b;
//	int* const x = &b;
//	*x = 12;
//	cout << "a=" << *p << endl;
//	cout << "b=" << *x << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***const 修饰指针***//
//
//#include<iostream>
//using namespace std;
//void bubblesort(int* arr,int len)
//{
//	int swap;
//	for (int i = 0; i < 10 - 1; i++)
//	{
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				swap = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = swap;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int* p = arr;
//	bubblesort(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "第" << i + 1 << "个元素是" << *(arr + i) << endl;
//	}
//	system("pause");
//	return 0;
//}
// 
// 
//
// ***地址传递和值传递的区别***//
//
//#include<iostream>
//#include<string>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int sorce;
//};
////1.值传递--执行动作，但不改变值，相当于是函数将用户输入的数据复制了一份来进行操作，对于值的改变，实际上并不改变原数据，只是改变了复印件
//void printstudent(struct student s)
//{
//	cout << "姓名" << s.name<< "\n年龄" << s.age << "\n成绩" << s.sorce << endl;
//}
////2.地址传递--可以改变值了，因为直接通过地址来找值，是确定的原数据，并不是复印件
//void printy(struct student *p)
//{
//	cout << "姓名" << p->name << endl;
//}
//int main()
//{
//
//	struct student s;
//	s.name = "老李";
//	s.age = 18;
//	s.sorce = 650;
//	printstudent(s);
//	printy(&s);
//	system("pause");
//	return 0;
//}
//
//
//
//***new 的语法***//
//
//#include<iostream>
//using namespace std;
//int* func()
//{
//	//new在堆区开辟内存
//	int*p= new int(100);
//	//new的数据是何种类型，返回的就是何种类型的指针
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	//在堆区用new创建数组
//	int *arr=new int[10];//中括号 
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 10;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	//由程序员创建的变量在程序中删除要用delete
//	delete p;
//	//释放变量是释放地址
//	delete[] arr;
//	//释放数组是要额外先写中括号
//	system("pause");
//	return 0;
//}
//
//
//
//***引用***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	//数据类型 &别名=原名；
//	int &b= a;//这就相当于给引用初始化了，且必须在建立之初，之后不能再改变引用的所属
//	a = 20;
//	cout << a << endl;
//	b = 30;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***引用做函数参数***//
//
//对于函数来说，如果用值传递则形参不能改变实参，只能执行动作，如果用地址传递，则可以改变实参
//可以使用引用来避免指针的使用，使用引用也可以达到使用指针的效果
//#include<iostream>
//using namespace std;
//void swap01(int a,int b)//值传递
//{
//	int temp= a;
//	a = b;
//	b = temp;
//}
//void swap02(int* a, int* b)//地址传递(需要注意的是，所谓地址传递，必须有间接访问数据本身的操作不能直接改变地址的值，这样本质上，和值传递是一样的)
//{
//	int temp=*a;
//	*a = *b;
//	*b = temp;
//}
//void swap03(int&a,int&b)//引用传递，这个操作之所以会起到和指针一样的效果，也是因为是间接访问了
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& c = a;
//	int& d = b;
//	swap01(a, b);
//	cout << a << "\t" << b<< endl;
//	swap02(&a, &b);
//	cout << a << "\t" << b << endl;
//	swap03(c, d);
//	cout << a << "\t" << b << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***引用做函数返回值***//
//
//意思就是建立一个引用类型的函数
//#include<iostream>
//using namespace std;
//int& test01()
//{
//	int a = 10;
//	return a;
//}//这样的形式代表   *int&test=a;*
//
////因为函数中的变量是局部变量，存在栈区，在函数进行完之后就会销毁，在销毁后其别名所属未知，就造成了非法调用，所以若想要以这种方式起别名，要使局部变量变成全局变量
//int& test02()
//{
//	static int b= 10;
//	return b;
//}
//int main()
//{
//	int& test1 = test01();
//	int& test2 = test02();
//	cout << test1 << endl;
//	cout << test2 << endl;
//	cout << test2 << endl;
//
//	//函数调用一般不能作为左值，但是引用函数是可以的
//	test02() = 1000;
//	//这就相当于b=1000
//
//	cout << test2 << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***引用的本质***//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//
//	//相当于 int * const b = &a;
//	         int& b = a;
//	//相当于 * b = 20;
//	          b = 20;
//	//所以整体来说，引用的本质就是指针常量创建与使用
//	cout << b << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//***函数的默认参数（形参）***//
//
//#include<iostream>
//using namespace std;
////C++中函数的形参可以规定默认值
//// 若规定了默认值，当自己传入了数据，就用自己的数据，当我没有传入数据，就用默认值
//int sum(int a, int b = 20, int c=20)
//{
//	int sum = a + b + c;
//	return sum;
//}
////需要注意的是：
////1.如果某个位置已经有了默认参数，那从这个位置往后，都必须有默认值
////2.函数声明和实现只能有其一有默认参数
//int main()
//{
//	int a = 10,b=20,c=30;
//	int sum1 = 0;
//	sum1 = sum(b);
//	cout << sum1 << endl;
//	system("pause");
//	return 0;
//}
//
//
//
////***函数占位参数***//
//
//#include<iostream>
//using namespace std;
//void test(int a,int)//这个int就占了位置，在调用时这里也要输值,不然不可使用
//{
//	cout << a;
//}
//int main()
//{
//	int a = 10;
//	test(a, 10);
//	system("pause");
//	return 0;
//}
//
//
//
//***函数重载***//
//
//函数名可以相同，就是两个函数叫同一个名字
//
//使用条件：
//1.在同一个作用域下
//2.函数名相同
//3.函数参数类型不同，或者顺序不同，或者个数不同
//
//作用：
// 提高函数复用性
//
//#include<iostream>
//using namespace std;
//void func()
//{
//	cout << "调用func函数" << endl;
//}
//void func(int a)//参数个数不同
//{
//	cout << "调用func(int)函数" << endl;
//}
//void func(double a)//参数类型不同
//{
//	cout<<"调用func(double)函数"<<endl;
//}
//
////注意事项：
////函数的返回值（就是指函数本身的类型改变不作为使用条件）不可以作为函数重载的条件
//
//int main()
//{
//	int a = 10;
//	func();
//	func(a);
//	func((double)a);
//	system("pause");
//	return 0;
//}
//
//
//
//***函数重载的几个特殊情况***//
//
//1.引用作为函数重载的条件
//2.函数重载遇到默认参数
//
//#include<iostream>
//using namespace std;
//
////1.引用作为函数重载的条件
////这种情况也叫类型的不同，故引用加不加const可以作为函数重载的条件
//
//void func(int& a)//引用变量
//{
//	cout << "func(int &a)函数的调用" << endl;
//}
//void func(const int& a)//引用常量
//{
//	cout << "func(const int &a)函数的调用" << endl;
//}
//
////2.函数重载遇到默认参数(错误情况演示)
//
//void func2(int a,int b=10)
//{
//	cout << "func2(int ,int)函数的调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int)函数的调用" << endl;
//}
//int main()
//{
//	int a = 10;
//	int& b = a;
//
//	func(b);//变量
//	func(10);//常量
//
//	//func2(a);
//    //这样的函数具有两义性，对于两个重载函数来说，都是对的，计算器无法判断
//	
//	system("pause");
//	return 0;
//}
//
//
//
//***类和对象***//
//
//C++三大特性： 封装， 继承， 多态
//
//C++称： 万事万物都是对象，对象有：属性  和  行为
//
//
//
//***封装***//
//
//意义：
//1.将事物的 “属性” “行为” 写在一起 一同表示
// 位置放在全局里
//{(语法：class 名字{访问权限：属性/行为；})
//
//#include<iostream>
//#define PI 3.14
//using namespace std;
//class yuan
//{
//	//1.访问权限
//	//公共权限：这个说明可以让程序员在类内和类外都可以访问
//public:
//
//	//2.属性
//	int r;
//
//	//3.行为
//	//获取圆的周长（以函数返回形式来写）
//	double ZC()
//	{
//		return 2 * PI * r;
//	}
//
//};//1.类中的属性和行为统一称为成员
//  //2.属性别名： 成员属性，成员变量
//  //3.行为别名： 成员函数，成员方法
//
//
//int main()
//{
//	//通过对创建的圆类的这个壳子的填充在程序中创建一个具体的圆（对象）
//	//就是实例化，通过一个类创建一个对象
//	
//	yuan c;
//
//	//给 圆对象 的属性进行赋值
//
//	c.r = 10;
//
//	//调用对象的行为函数
//
//	cout << c.ZC() << endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
//意义2：
//类在设计时可以把属性和行为放在不同的权限下，加以控制
//
//访问权限有3种：
//1.  public       公共权限    类内可访问  类外可访问
//2.  protected    保护权限    类内可访问  类外不可访问  子可以访问父亲中的内容
//3.  private      私有权限    类内可访问  类外不可访问  子不可以访问父亲中的内容
//
//
//类：
//
//class 名字
//{
//	访问权限：
//				属性1；
//	访问权限：
//				属性2；
//	访问权限：
//				行动1；
//	访问权限：
//				行动2；
// 
//};
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	string name;
//	int age;
//	void fuzhi()
//	{
//		name = "李四";
//		age = 18;
//	}
//
//
//protected:
//	string car_name;
//
//
//private:
//	string password;
//	void mima()
//	{
//		password = 123456;
//	}
//};//到此为止的所有编写都是类内的操作
//int main()
//{
//	Person a;
//	a.fuzhi();
//	cout << a.age << "/t" << a.name << endl;
//	/*a.car_name;*/    //这个代码无法运行，就是类外不可访问
//	system("pause");
//	return 0;
//}
//
//
//
//***class和struct的区别***//
//
//struct 默认访问权限是公有 public
//class  默认访问权限是私有 private
//
//
//
//***将成员属性设为私有***//
//
//优点：
///*1.将所有成员属性设为私有，可以自己控制读写权限*/
///*2.对于写权限，可以检测数据有效性*/
//
//#include<iostream>
//using namespace std;
//class person 
//{
//public:
//	void write(string name_you)
//	{
//		name = name_you;
//	}
//	string read1()
//	{
//		return name;
//	}//name本身在类中设置为隐私数据类外不可直接访问，但是因为类内数据可以彼此访问，则可以通过公共区域的函数，来提取私有区域的数据，进而使用户可以通过公共区域的函数来在类外访问本不能在类外仿问的数据
//	//相当于以公共区域的函数为媒介，在类外和私有区域之间架起桥梁
//	int read2()
//	{
//		return age;
//	}
//	void agepan(int age_you)
//	{
//		if (age_you > 0 && age_you < 150)
//		{
//			age = age_you;
//		}
//		else
//		{
//			cout << "输入错误" << endl;
//			return;
//		}
//			//一般来说，这样的代码我们写在主函数中，但是我们可以通过封装在一个类中，来达到监测数据有效性的目的
//	}
//private :
//	string name;//可读可写
//	string idol;//只写不读
//	int age;//只读不写
//};
//int main()
//{
//	string name;
//	int age = 0;
//	cin >> age;
//	cin >> name;
//	person c1;
//	c1.write(name);
//	c1.agepan(age);
//	cout << c1.read1() <<"\t"<<c1.read2()<< endl;
//	//由此可知，通过这样的操作，我们可以控制读写权限
//	system("pause");
//	return 0;
//}
//
//
//
//***封装案例剖析***//
//
//1.类中可以包含类的数据类型
//2.如果一个程序中含有的类太多，就要考虑分文件编写
//3.分文件编写：创建一个头文件和一个另外的源文件
//
// 
// 头文件：
// #pragma once   //防止头文件重复包含
// #include<iostream>
// using namespace std;
// 
// 先将类的创建整个复制过去，将所有函数的行为删去，在函数声明后加一个分号“；”
//
//
//源文件：
//#include"刚刚创建的头文件.h"
//
//将类中所有的行为——成员函数，复制过来
//在所有的函数的 数据类型与函数名中间写 “类型名::”
//
//
//**一个类中含有另一个类型的数据，在头文件中要有这个类的头文件调用，但是源文件里遇到相同情况就不用调用了，这是因为在头文件里已经调用过了**//
//
//
//分文件编写成功
//
//
//
//***构造函数（初始化）和析构函数（清理）***//
//
//
//
//构造函数：主要作用在创建对象时为对象成员属性赋值，由编译器自动调用，无需手动调用
//
//语法：
// 类名（）
// {
// 
// }
// 
// 特点：
// 1.没有返回值，也不写void
// 2.函数名称和类名相同
// 3.可以有参数，从而使得可以发生函数重载
// 4.无需手动调用，且只会调用一次
// 
//
//
//
//析构函数：主要作用在对象销毁之前，执行一些清理工作，也无需手动调用
//
//语法：
//~类名（）
//{
//
//}
//
//特点：
//1.没有返回值，也不写void
//2.函数名称和类名相同，在名称之前加上“~”
//3.不可以有参数，从而不可以进行重载
//4.无需手动调用，且只会调用一次
//
//#include<iostream>
//using namespace std;
////对象的初始化和清理
//
//
//class person
//{
//public:
//	
//	//#构造函数
//
//	person()//函数名和类名相同，没有参数，不用写void
//	{
//		cout << "构造函数的调用" << endl;
//	}
//	
//	//#析构函数
//	
//	~person()//函数名和类名相同，没有参数，不用写void
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//
//
//void test01()
//{
//	person p;//栈上的数据，在调用完后就会销毁，激发了析构函数的调用
//}
//int main()
//{
//	test01();//没有调用person本身，只是调用了含有person成员的test01函数自动被编译器调用
//	system("pause");
//	return 0;
//}
//
//
//
//***构造函数的分类和调用***//
//
//分类：
//		按参数分类：有参构造  和  无参构造  （默认构造）
//		按类型分类：普通构造  和  拷贝构造
//
//调用方式：
//		括号法
//		显示法
//		隐式转换法
//
//
//创建
// 
//
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "有参构造函数的调用" << endl;
//	}
//	//拷贝构造：将传进来的同类的信息拷贝到当前的对象上
//
//	//写法要点：
//	// 1.const 2.引用调用
//	person(const person& p)//这个p是外来的
//	{
//		age = p.age;//左值是该对象的属性
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//private:
//	int age;
//};
//
//
////调用
//
//void test01()
//{
//	//1.括号法
//	person p1;//无参调用：虽然是叫这个名字，但是不能写成person p1();编译器会以为这是一个普通函数声明，而不是创建对象的过程
//	person p2(10);//有参调用
//	person p3(p2);//拷贝调用
//}
//
//void test02()
//{
//	//2.显示法
//	person x1;//无参调用
//	person x2 = person(10);//有参调用的显示法调用
//	person x3 = person(x2);//拷贝调用的显示法调用
//
//	person(10);  //这是一个没有名字的对象，称之为匿名对象，当前执行结束后，系统会立即回收掉该对象
//
//	//注意不要用拷贝构造函数初始化一个匿名对象，如：person(x3)，这等价于 person p3，有语法错误
//}
//
//void test03()
//{
//	//3.隐式转换法（这个方法相当于在背地里做了显示法，显示法的深层内容就是转换法的更深层内容）
//	person y1 = 10;//相当于 person y1=person(10)
//	person y2 = y1;//同理
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//
//
//***拷贝构造函数的调用时机***//
//
//#include<iostream>
//using namespace std;
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//
////2.值传递的方式给参数传值
//
////3.值返回局部对象
//
//class person
//{
//public:
//	person()
//	{
//		cout << "默认函数调用" << endl;
//	}
//	
//	person(int age)
//	{
//		p_age = age;
//		cout << "有参函数调用" << endl;
//	}
//	person(const person&p)
//	{
//		p_age = p.p_age;
//		cout << "拷贝函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//private:
//	int p_age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//}
//
////2.值传递的方式给参数传值
//
//void dowork1(person a)
//{
//
//}
//
//void test02()
//{
//	person p;
//	dowork1(p);
//	//前面说过，析构函数和构造函数其实是编译器本来就有的底层函数，用来辅助一些函数的行为
//	//当我将一个值传给一个函数时，作为值传递，他会拷贝一份副本出来，而不是直接改变值本身，这个拷贝的动作其实就是拷贝函数的调用
//	//之前还说过：当程序员没有自定义构造函数或析构函数时，编译器使用系统默认的函数，当程序员自定义了之后，就会使用自定义的这个，故打印的内容才会出现
//}
//
////3.值返回局部对象
//
//person dowork()
//{
//	person p;
//	return person (p);
//	//对于函数来说，因为在函数执行完之后，会把值全部销毁
//	//所以在值传入函数时，为了不销毁原数据，就会拷贝一份副本从而对副本进行操作
//	//同样的，在需要把值return 回去时，因为本来的return的副本既定会被销毁，为了将副本的内容传出去，系统就会再拷贝一份副本
//  //但是！！！！！
//
//
//	现在的编译器优化过了，return的对象不会在函数结束后被析构
//	而是会用类似隐式转换的形式把地址传递给新的对象
//	之所以说是“类似隐式转换的形式”是因为，真正的隐式转换是会创建一个有新地址的新对象的，这个只是老对象改名改成了新对象的名，地址不变
//}
//
//void test03()
//{
//	person p;
//	p = dowork();
//}
//
//
////后两点，与其说是拷贝构造函数的调用情况，不如说是解释拷贝构造函数作为底层函数在编程中的作用
//
//
//int main()
//{
//	
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//
//
//***构造函数的调用规则***//
//
//
//1.默认情况下，编译器会自动给一个类添加三个函数
//
//（1）无参构造函数（空实现）
//
//（2）默认析构函数（空实现）
//
//（3）默认拷贝函数（值拷贝）
//
//2.如果用户定义有参构造函数，编译不再提供默认无参构造，但是会提供默认拷贝构造函数，程序无法运行
//
//3.如果用户定义拷贝构造函数，编译器不会再提供其他构造函数，程序无法运行
//
//
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	person(int age)
//	{
//		p_age = age;
//		cout << "有参函数调用" << endl;
//	}
//	//person(const person& p)
//	//{
//	//	cout << "拷贝函数的调用" << endl;
//	//	p_age = p.p_age;
//	//}
//	~person()
//	{
//		cout << "析构构函数调用" << endl;
//	}
//
//	int p_age;
//};
//
//void test01()
//{
//	person p;
//	p.p_age = 18;
//	person p2(p);									//这里我们在类里并没有创建拷贝函数
//	cout << "p2的年龄为：" << p2.p_age << endl;		//但是这个操作却实现了，这就证明了编译器会提供一个默认的拷贝函数，不过没有显示构造函数和机构函数的内容，这是因为，默认的构造与析构里面是空的，不进行输出提示
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***深拷贝与浅拷贝***//
//
//
//浅拷贝：简单的赋值拷贝操作
//编译器里提供的函数拷贝，都是浅拷贝
//
//深拷贝：在堆区重新申请空间，进行拷贝操作
//
//
//#include<iostream>
//using namespace std;
//class person
//{
//
//public:
//	person()
//	{
//		cout << "无参函数的调用" << endl;
//	}
//	person(int age,int hight)
//	{
//		p_age = age;
//		p_hight = new int(hight);
//		cout << "有参函数的调用" << endl;
//	}
//
//	//自己实现拷贝构造函数解决浅拷贝带来的问题
//
//	person(const person& a)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		/*p_age = a.p_age;
//		p_hight = a.p_hight;*/		//这就是编译器的拷贝构造函数的默认内容，但是会出问题
//
//		p_age = a.p_age;
//		p_hight = new int(*a.p_hight);		//在堆上再开辟一块内存，存的内容是一样的（拷贝的）
//	}
//	~person()//析构函数本质上就是一个，一旦有内存清空的操作就执行的一个函数，其本身并不起销毁作用
//	{
//		if (p_hight != NULL)
//		{
//			delete p_hight;
//			p_hight = NULL;//内存在释放后，指针指向的内存为空，即出现野指针，语法错误
//		}//但是我们可以利用它在内存销毁之前执行的特点，对系统不会主动释放的堆上的数据进行适时的释放
//		cout << "析构函数的调用" << endl;
//	}
//	int p_age;
//	int* p_hight;
//};
//
//void test01()
//{
//	person p1(18,180);
//
//	cout << "p1的年龄为：" << p1.p_age <<"身高为："<<*p1.p_hight<< endl;
//
//	person p2(p1);
//
//	cout << "p2的年龄为：" << p2.p_age <<"身高为："<<*p2.p_hight<< endl;
//}
//
//
//
//此时，在类中，用户并没有自己定义拷贝构造函数，就意味着现在test01中使用的拷贝构造函数是编译器提供的，属于浅拷贝
//
//浅拷贝只拷贝值
//
// 在此过程中，p2复制了p1在堆上的地址，使得一个内存空间，有两个指针指向，在析构函数对其进行释放时，就会对一个内存空间释放两次，使程序崩溃
//
//这就是浅拷贝可能会引发的问题
//
//浅拷贝会引发的问题，采用“深拷贝”来解决（自己定义的拷贝构造函数）
//
//解决办法就是再在堆上开辟一块新的内存，将存的东西拷贝一份进去
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//总结一下：
//
//1.如果成员中有在堆上开辟空间的操作，析构函数要进行扩展负责释放工作
//
//~person()
//{
//	if (指针！ = NULL)
//	{
//		delete 指针;
//		指针 = NULL;
//	}
//}
//
//2.如果成员中有在堆上开辟空间的操作,用户要自己写一个拷贝构造函数，进行深拷贝，避免出现问题
//
//
//
//***初始化列表***//
//
//#include<iostream>
//using namespace std;
//
////用于初始化属性
//
////语法：
//
////		构造函数（）：属性1（值1），属性2（值2）....{}
//
//class person
//{
//public:
//	//传统初始化操作
//	//person(int a, int b, int c)
//	//{
//	//	p_a = a;
//	//	p_b = b;
//	//	p_c = c;
//	//}
//
//	//初始化列表初始化属性
//
//	person(int a,int b,int c):p_a(a),p_b(b),p_c(c){}//里边可以写其他的内容，并不一定是空的
////  函数声明             内容    赋值             完善函数
//                            *如果是类作为成员属性就是隐式构造的形式*
//	int p_a;
//	int p_b;
//	int p_c;
//};
//
//void test01()
//{
//	person p(10,20,30);
//	cout << "p_a=" << p.p_a << endl;
//	cout << "p_b=" << p.p_b << endl;
//	cout << "p_c=" << p.p_c << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***类对象作为类成员***//
//
//#include<iostream>
//using namespace std;
//
//class phone
//{
//public:
//	phone(string name)
//	{
//		name_shouji = name;
//	}
//	string name_shouji;
//};
//
//class person
//{
//public:
//	person(string nma_p, string nma_shouji) :name_p(nma_p), phone_p(nma_shouji){};
//	string name_p;											/*如果是类作为成员属性就是隐式构造的形式*/
//	phone phone_p;											//*当有其他类作为该类的成员，要先把成员类编（构造）出来
//															//*但是在析构时，是先析构大类，再析构成员类
//};
//
//void test()
//{
//	person p("李四", "华为");
//	cout << "名字是：" << p.name_p << "手机是：" << p.phone_p.name_shouji<< endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//
//
//                       【//***静态成员***//】
//
//
//
//
//
//
//静态成员就是在成员变量和成员函数前加上关键字static, 称为静态成员
// 
// 
//静态成员分为：
// 1.静态成员变量
//   *所有对象共享同一份数据
//   *在编译阶段分配内存
//   *类内声明，类外初始化(必须有初始值，不然没法调用)
//  
//
//2.静态成员函数
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//
//
//
//***静态成员变量***//
//
//
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	static int a_p;//类内声明
//};
//
//int person::a_p = 100;//类外初始化，注意语法形式：   数据类型 类型名字 :: 成员名字 =初始值;
//
//
//void test01()
//{
//	person p;
//	cout << p.a_p << endl;
//
//	person p2;
//	p2.a_p = 200;//因为静态成员变量所有对象共享同一份数据的特点，因为p2这边改了数据，p那编数据也发生改变，p再输出就也成200了
//	cout << p2.a_p << endl;
//	cout << p.a_p << endl;
//}
//
////同样因为静态成员变量，不属于某个对象上，所有对象都共享一份数据
////因此静态成员变量两种访问方式
//
////1.通过对象进行访问
//void test02()
//{
//	person p1;
//	cout << p1.a_p << endl;
//}
////2.通过类名进行访问
//void test03()
//{
//	cout << person::a_p << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//
//总结：
//
//1.特点
//   *所有对象共享同一份数据
//   *在编译阶段分配内存
//   *类内声明，类外初始化(必须有初始值，不然没法调用
//
//2.访问方式
//   *通过对象进行访问
//   *通过类名进行访问
//
//3.静态成员变量也是有访问权限的
//
//
//
//***静态成员函数***//
//
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	static int age_p;
//	int phone_p;
//	static void test()
//	{
//		age_p = 120;//静态成员函数可以访问 静态成员变量
//		//phone_p = 130;   这个操作是非法的 这个函数是所有对象共享的，但是phone_p却是每个对象独有的，这样共有和私有就冲突了，编译器无法处理
//		cout << "静态函数调用" << endl;
//	}
//};
//
//int person::age_p = 10;
//
//void test01()
//{
//	//静态函数访问方式
//	
//	//1.通过对象访问
//	person p;
//	p.test();
//
//	//2.通过类访问
//	person::test();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//总结：
//
//1.特点
//
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//2.访问方式
//   *通过对象进行访问
//   *通过类名进行访问
//
//3.静态成员函数也是有访问权限的
//
//
//
//                    【//***C++对象模型和this指针***//】
//
//
//
//
//
//
//
//***成员变量和成员函数分开储存***//
//
//只有非静态的成员变量是存在对象上的
//
//静态成员函数   静态成员变量   非静态成员函数   都不在上边
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	int age_p;//非静态成员变量
//
//};
//void test01()
//{
//	person p;
//	//空对象占用的内存空间是 1个字节
//	//因为C++编译器会给每一个空对象都分配一字节空间，是为了通过这个独一无二的内从地址来区分每个空对象的位置
//	
//	//非空对象——有非静态成员变量，占用内存空间是 这个变量所属类型的占用字节大小，不会在之前的1字节的基础上加，而是直接替换
//
//	//非空对象——有除非静态成员变量的其他成员，占用内存不受这些成员的影响
//	//这说明 静态成员函数   静态成员变量   非静态成员函数   并不存在对象上
//	cout << "内存占用是：" << sizeof(p) << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//
//***this指针概念***//
//
//类的非静态函数成员，和对象本身并不在一起储存，这个函数每个对象都来调用，而不是每个对象都有一个函数可以调用
//
//那么，编译器是如何判断是哪个对象来调用的呢
//
//通过提供对象指针——this指针来解决
//
//this指针指向被调用成员函数所属的对象，且this指针是隐含在每一个非静态成员函数内的一种指针，this指针不需要定义，直接使用即可
//
//
//
//#include<iostream>
//using namespace std;
////this指针的用途：
////·当形参和成员变量同名时，可用this指针来区分（说明形参和成员变量名可以相同）
////·在类的非静态成员函数中返回对象本身，可使用return* this
//
//class person
//{
//public:
//
//	//当形参和成员变量同名时，可用this指针来区分
//	person(int age)
//	{
//		//age = age;//编译器认为这三个age是一个东西
//		this->age = age;//这样就把两个同名不同属的变量区分开了
//	}
//
//	void personadd(person &x)
//	{
//		this->age += x.age;
//	}
//	int age;
//	~person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	person &personadd02(person& x)//若返回值是对象本身，则要以引用的方式来创建函数，若是值传递，第一次加法实现在原数据上，然后函数拷贝一份，传出，此刻，原数据和副本是一样的，但是，若连续操作，之后的添加操作都加在副本上了，原数据并不改变，最后副本都会被销毁
//	{
//		this->age += x.age;
//		return *this;//this指向的是这个对象，则*this就是这个对象本身
//	}
//
//};
//
//void test01()
//{
//	person p(12);
//	cout << "年龄是：" << p.age << endl;
//}
//
//void test02()
//{
//	person p(12);
//	person x(13);
//	p.personadd(x);//因为函数类型是void所以无法实现连加的操作
//	cout << "年龄是：" << p.age << endl;
//	p.personadd02(x).personadd02(x).personadd02(p);//这个函数的类型是类的类型，则可以一直调用类内的函数
//
//	//这就是链式编程思想
//
//
//	cout << "年龄是：" << p.age << endl;
//
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
//
//***空指针访问成员函数***//
//
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	void showclassname()
//	{
//		cout << "person" << endl;
//	}
//	void showpersonage()
//	{
//		//报错原因是因为传入指针是NULL
//
//		//解决方法
//
//		if (this == NULL)
//		{
//			return;//相当于在循环里的break的用处，跳出函数//这个东西是为了防止bug
//		}
//		cout << "年龄是：" << this->m_age << endl;
//	}
//	int m_age;
//};
//void test01()
//{
//	person* p=NULL;
//
//	p->showclassname();
//	p->showpersonage();
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***const修饰成员函数***//
//
//
//常函数：
//
//·成员函数后加const后我们称为这个函数为常函数
//·常函数内不可以修改成员属性
//·成员属性声明时加关键字mutable后，在常函数中依然可以修改
//
//
//常对象：
//
//·声明对象前加const称该对象为常对象
//·常对象只能调用常函数
//
//
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//
//	//先要认识到：this指针的本质是指针常量，指针的指向是不可修改的
//
//	
//	
//	
//	//在每个类里都自带有this指针
//	//故  m_a=100;   相当于
//	//    this->m_a=100;
//
//	
//	
//	
//	//本来 类中的this指针的实质是   ：   person * const this
//	//像下面这个情况，就是再次修饰了this 指针，变成了   ：   const person * const this;
//	                                           //前一个const 代表常量指针，说明指针指向的地址中的数据不可改变       
//	                                           //后一个const 代表指针常量，说明指针指向的地址不可改变
//	
//	//而this指针本身指向类中的所有东西，当一个函数被const 修饰之后 其中内容就要遵守以上所说
//	
//	
//	
//	
//	void showperson() const
//	{
//		//常函数
//	}
//
//
//	void func()
//	{
//		m_a = 100;
//	}
//
//
//	int m_a;
//	mutable int m_b;//加上mutable之后，这个属性在常函数中就就可修改了
//};
//
//
//
//
//void test01()
//{
//	const person p；  //在对象前加const，变为常对象
//	//p.m_a = 100;
//	p.m_b = 100;      //可修饰情况和不可修饰情况与常函数一样
//	cout << p.m_b << endl;
//}
//
//void test02()
//{
//	const person x;
//	x.showperson();//常对象只能引用常函数
//	//x.func();    //常对象不能引用常函数以外的函数：在普通的函数中是允许改变属性的值的，但是常对象的值是不允许改变的，这样就冲突了，故有此规定
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//
//***区分一下 常函数 常对象  和  静态函数 静态变量***//
//
//静态：
//
//静态成员就是在成员变量和成员函数前加上关键字static, 称为静态成员
//
//
//静态成员分为：
// 1.静态成员变量
//   *所有对象共享同一份数据
//   *在编译阶段分配内存
//   *类内声明，类外初始化(必须有初始值，不然没法调用)
//
//
//（1）特点
//   *所有对象共享同一份数据
//   *在编译阶段分配内存
//   *类内声明，类外初始化(必须有初始值，不然没法调用
//
//（2）访问方式
//   *通过对象进行访问
//   *通过类名进行访问
//
//（3）静态成员变量也是有访问权限的
//
//
//2.静态成员函数
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//
//（1）特点
//
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//（2）访问方式
//   *通过对象进行访问
//   *通过类名进行访问
//
//（3）静态成员函数也是有访问权限的
//
//
//
//
//常量：
// 
// 
// 1.常量函数
// 常函数的修饰实质上是对this指针的修饰，使之指向地址的值不可改变
// 
// 特点：
//     （1）常函数内不可以修改成员属性
//     （2）成员属性声明时加关键字mutable后，在常函数中依然可以修改
//
//
//2.常量对象
// 常量对象将对this指针的修饰从函数区域扩展到整个类了
// 
// 特点：
//      （1）常对象只能调用常函数
//      （2）成员属性声明时加关键字mutable后，由常对象访问依然可以修改
// 
//
//
//
//
//
//区别点在于，静态强调了数据的 公用性 数据唯一性 只要改变，所有使用该数据的函数等，其访问值都会改变
//            常量强调了数据的 不可改变性
//
//
//
//
//                     【//***友元***//】
//
//
//在程序里，有一些私有属性，想要让类外的一些函数或者类进行访问
//
//友元的目的就是要达到这一诉求
//
//关键字：  friend
//
//
//
//
//
//
//***全局函数做友元***//
//
//#include<iostream>
//using namespace std;
//
//class building
//{
//	//声明全局函数是类的友元，可以访问私有的成员
//	//语法：
//	//在类外编写函数定义
//	//在类内（无需在public等访问声明下）-》friend 函数声明 ;
//	friend void goodgay(building& a);
//public:
//	string m_sittingroom;
//
//	building()
//	{
//		m_bedroom = "卧室";
//		m_sittingroom = "客厅";
//	}
//private:
//	string m_bedroom;
//};
//
////全局函数
//void goodgay(building& a)
//{
//	cout << "全局函数，正在访问：" << a.m_sittingroom << endl;
//
//	cout << "全局函数，正在访问：" << a.m_bedroom << endl;   
//}
//
//void test01()
//{
//	building a;
//	goodgay(a);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***类做友元***//
//
//#include<iostream>
//using namespace std;
//
//class bulid
//{
//	//goodgay类是本类的友元，可以访问所有成员
//	friend class goodgay;
//public:
//	bulid();
//	string settingroom;
//private:
//	string bedroom;
//};
//
//class goodgay
//{
//public:
//	goodgay();
//	void visit();//参观函数 访问bulid中的属性
//	bulid*buliding;
//};
//
////类外写成员函数
//
////1.构造与析构：类名::函数名(){}
//bulid::bulid()
//{
//	settingroom = "客厅";
//	bedroom = "卧室";
//}
//
//goodgay::goodgay()
//{
//	buliding = new bulid;
//}
//
////2.函数成员： 函数类型 类名::函数名(){}
//void goodgay::visit()
//{
//	cout << "正在访问：" << buliding->settingroom << endl;
//	cout << "正在访问：" << buliding->bedroom << endl;
//}
//
////*******************************************************
//
//void test01()
//{
//	goodgay g;
//	g.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***成员函数作友元**///
//
//#include<iostream>
//using namespace std;
//class buliding;//类的声明
//class goodgay
//{
//public:
//	goodgay();
//
//	void visit01();//可访问buliding类中的私有成员
//	void visit02();//不可访问
//	
//	buliding* bulid;
//};
//class buliding
//{
//	friend void goodgay::visit01();
//	//语法： friend 函数类型 函数所属类::函数名();
//
//	//******要将一个类中的函数作为另一个类的友元，这个类必须先于本类声明
//	//******要在一个类中，放其他类的成员，其他类必须先于该类声明
//
//	//为了同时满足这两个条件，在buliding这个类的前后都要有goodgay类的声明
//public:
//
//	buliding()
//	{
//		settingroom = "客厅";
//		bedroom = "卧室";
//	}
//	string settingroom;
//private:
//	string bedroom;
//};
//goodgay::goodgay()
//{
//	bulid = new buliding;
//}
//
//void goodgay::visit01()
//{
//	cout << "正在访问：" << bulid->settingroom<<endl;
//	cout << "正在访问：" << bulid->bedroom<<endl;
//}
//
//void goodgay::visit02()
//{
//	cout << "正在访问：" << bulid->settingroom << endl;
//}
//
//void test01()
//{
//	goodgay a;
//	a.visit01();
//	a.visit02();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***运算符重载***//
//
//对于编译器内置数据类型，运算符是知道如何运算的
//但是对于非内置运算，则需要我们重载运算符（相当于自己写了一个函数，一般对四则运算符进行重载）
//
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	//成员函数重载加号
//	//注意重载所有运算符的函数名是固定形式
// 
// //operator后紧跟想要重载的运算符，整体式为简化写法
// 
// //如： person p1 operator+(person &p)=======p1+p
//	person operator+(person &p)
//	{
//		person temp;
//		temp.a = this->a + p.a;
//		temp.b = this->b + p.b;
//		return temp;
//     }
//
//public:
//	int a;
//	int b;
//};
//
////person operator+ (person & a, person & b)
////{
////	//全局函数重载加号
////	person temp;
////	temp.a = a.a + b.a;
////	temp.b = a.b + b.b;
////}
//
//
//void test01()
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 20;
//	person p2;
//	p2.a = 10;
//	p2.b = 20;
//
//	//成员函数重载本质调用
//	//表象
//	// person p3 = p1 + p2;
//	//本质
//	person p3 = p1.operator+(p2);
//
//	//全局函数类似
//	cout << p3.a << p3.b << endl;
//}
//
////值得一提的是，运算符重载实质上作为一种函数调用，也可以进行函数重载（参数类型，数量）
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***左移运算符重载***//
//
//作用：可以输出自定义数据类型
//
//#include<iostream>
//using namespace std;
//
//class person
//{
////public:
//	////利用成员函数重载 左移运算符
//	//void operator<<(person& p)//输出出来是"p<<cout" 不符合规范，故一般不用成员函数重载左移运算符
//	//{
//	//	
//	//}
//
//public:
//	int pa;
//	int pb;
//};
//
//ostream &operator<<(ostream &cout,person p)
//{
//	cout << "pa=" << p.pa <<"pb="<<p.pb << endl;
//	return cout;
//}
//
//void test01()
//{
//	person p;
//	p.pa = 10;
//	p.pb = 20;
//	cout << p.pa << p.pb << endl;
//
//	cout << p << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***赋值运算符重载***//
//
//C++编泽器至少给一个类添加4个函数
//1.默认构造函数（无参，函数体为空)
//2.默认析构函数无参，函数体为空)
//3.默认拷贝构造函数，对属性进行值拷贝
//4.赋值运算符operator=, 对属性进行值拷贝
//
//
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//
//	}
//	person(int age)
//	{
//		page=new int(age);
//	}
//	person(const person& p)
//	{
//		 page= p.page;
//	}//但是对于a=b这一情况，实际上并没有调用默认的拷贝构造或者用户提供的拷贝构造函数，调用的是“=”运算符中包含的默认构造函数，所以这种解决方法不起效，应该重载一下“=”运算符
//	~person()
//	{
//		if (page != NULL)
//		{
//			delete page;
//			page = NULL;
//			//既然在堆区释放内存就要想到避免浅拷贝会引发的问题
//		}
//	}
//	person operator=(person &p)
//	{
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (page != NULL)
//		{
//			delete page;
//			page = NULL;
//			//既然在堆区释放内存就要想到避免浅拷贝会引发的问题
//		}
//		page = new int(*p.page);//相当于将“=”运算符中包含的浅拷贝，换成深拷贝了
//		return *this;
//	}
//public:
//	int *page;
//};
//
//void test01()
//{
//	person a(18);
//	person b(20);
//
//	cout << "年龄为" << *a.page << endl;
//	cout << "年龄为" << *b.page << endl;
//
//	b = a;//赋值操作
//
//	cout << "年龄为" << *a.page << endl;
//	cout << "年龄为" << *b.page << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***函数调用运算重载***//
//
//·函数调用运算符()也可以重载
//·由于重载后使用的方式非常像函数的调用，因此称为仿函数
//·仿函数没有固定写法，非常灵活
//
//#include<iostream>
//using namespace std;
//class myprint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//class add
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//void test01()
//{
//	myprint print;                                                            //函数名
//	print("hello world"); //此括号非彼括号，这个是重构之后的括号本质是：  print."operator()"("hello world");
//		cout << add()(100,200) << endl;
//
//	//匿名函数对象：语法是：类名()()
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////整个其实是一个简化编写的逻辑
//
////1.代码块==》函数体-->将代码块省掉剩下函数名了
////2.运算符==》重载---->编写将函数名都省掉了
//
//
//
//***继承***//
//
//
//
//***继承的基本语法***//、
//
//#include<iostream>
//using namespace std;
//
////普通实现页面
//
////java页面
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "头" << endl;
//	}
//	void lefter()
//	{
//		cout << "尾" << endl;
//	}
//};
//
//class java
//{
//public:
//	void header()
//	{
//		cout << "头" << endl;
//	}
//	void lefter()
//	{
//		cout << "尾" << endl;
//	}
//	void content()
//	{
//		cout << "java学习视频" << endl;
//	}
//};
//
////c语言页面
//
//class cyuyan:public basepage
//{
//public:
//	/*void header()
//	{
//		cout << "头" << endl;
//	}
//	void lefter()
//	{
//		cout << "尾" << endl;
//	}*/
//	void content()
//	{
//		cout << "c语言学习视频" << endl;
//	}
//};
//
////该类就继承了basepage的内容无需再写相同的内容了
////所以继承的好处就是减少了重复代码
//
//void test01()
//{
//	java a;
//	a.content();
//	a.header();
//	a.lefter();
//}
//
//void test02()
//{
//	cyuyan b;
//	b.content();
//	b.header();
//	b.lefter();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//语法：class 子类 : 继承方式 父类
//子类也叫派生类
//父类也叫基类
//
//
//
//***继承方式***//
//
//#include<iostream>
//using namespace std;
////父类
//class father
//{
//public:
//	int a;//父类的公共内容，子类继承之后不论哪一种继承方式都可访问
//protected:
//	int b;//父类的保护内容，子类继承之后不论哪一种继承方式都可访问
//private:
//	int c;//父类的私有内容，子类继承后，不论哪一种继承方式都不可访问
//};
//
////1.公共继承
//class son1: public father
//{
//
////公共继承，继承父类公共和保护内容，隐私状态不变
////public:
////	int a;
////protected:
////	int b;
//
//};
////2.保护继承
//class son2 :protected father
//{
//
////保护继承，继承父类公共和保护内容，隐私状态全设为保护
////public:
////
////protected:
////	int a;
////	int b;
//
//};
////3.私有继承
//class son3 :private father
//{
//
////私有继承，继承父类公共和保护内容，隐私状态全设为私有
////public:
////protected:
////private:
////	int a;
////	int b;
//
//};
//int main()
//{
//	system("pause");
//	return 0;
//}
//
//
//
//***继承中的对象模型***//
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	int pa;
//protected:
//	int pb;
//private:
//	int pc;
//};
//class son:public base
//{
//public:
//	int pd;
//};
//
//void test01()
//{
//	cout << "占用内存空间是" <<sizeof(son)<< endl;
//}
////这体现了，虽然在继承之后，从子类访问不到父类私有的内容，但是他是的的确确继承到子类中去了，只是访问不到了
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//***继承中的构造和析构顺序***//
//
//子类继承父类后，当创建子类对象，也会调用父类的构造函数
//
//问题是父类和子类的构造和析构顺序是准先谁后？
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		cout << "base 的构造函数" << endl;
//	}
//	~base()
//	{
//		cout << "base 的析构函数" << endl;
//	}
//
//};
//
//class son: public base
//{
//public:
//	son()
//	{
//		cout << "son 的构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son 的析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	son a;
//}
//int main()
//{
//	test01();
//	//输出结果是：
//
//	//base的构造函数
//	//son的构造函数
//	//son的析构函数
//	//base的析构函数
//
//	//可知顺序如下：
//	//构造先父后子
//	//析构先子后父
//
//	system("pause");
//	return 0;
//}
//
//
//
//***继承同名成员处理方式***//
//
//问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？
//
//
//·访问子类同名成员直接访问即可
//·访问父类同名成员需要加作用域
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		ba = 100;
//	}
//
//	int lair()
//	{
//		ba = 147;
//		return ba;
//	}
//	int lair(int a)
//	{
//		ba = a;
//		return ba;
//	}
//	int ba;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		ba = 200;
//	}
//	int lair()
//	{
//		ba = 258;
//		return ba;
//	}
//	int lair(int a)
//	{
//		ba = a;
//		return ba;
//	}
//	int ba;
//};
//void test()
//{
//	son s;
//	//同名成员属性处理
//	cout << s.ba << endl;//直接访问输出子类中的同名成员属性
//	cout << s.base::ba << endl;//若要访问父类中的同名成员属性，语法： 对象.父类名::成员
//	//同名成员函数（行为）处理
//	cout << s.lair() << endl;//直接访问输出子类中的同名成员函数
//	cout << s.base::lair() << endl;//若要访问父类中的同名成员函数，语法： 对象.父类名::成员
//	//函数重载情况处理（与上同）
//	cout << s.lair(1000) << endl;
//	cout << s.base::lair(10000) << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//
//
//***继承同名静态成员处理方式***//
//
//静态成员分为：
//
//1.静态成员变量
//   *所有对象共享同一份数据
//   *在编译阶段分配内存
//   *类内声明，类外初始化(必须有初始值，不然没法调用)
//
//
//2.静态成员函数
//   *所有对象共享同一个函数
//   *静态成员函数只能访问静态成员变量
//
//
//问题：继承中同名的静态成员在子类对象上如何进行访问？
//
//静态成员和非静态成员出现同名，处理方式一致
//·访问子类同名成员直接访问即可
//·访问父类同名成员需要加作用域
//
//#include<iostream>
//using namespace std;
//
//class base
//{
//public:
//	static int pa;
//	static int lair()
//	{
//		pa = 500;
//		return pa;
//	}
//};
//int base::pa = 100;
//class son:public base
//{
//public:
//	static int pa;
//	static int lair()
//	{
//		pa = 900;
//		return pa;
//	}
//};
//int son::pa = 200;
//void test()
//{
//	son s;
//	cout << s.pa << endl;
//	cout << s.base::pa << endl;
//	cout << s.lair() << endl;
//	cout << s.base::lair() << endl;
//	cout << son::lair() << endl;		//静态和非静态区别只在访问方式上
//	cout << son::base::lair() << endl;  //静态和非静态区别只在访问方式上
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//和非静态成员完全一样，只不过静态成员有两种访问方式
//
//
//
//
//***多继承语法***//
//
//一个类是允许继承多个类的
//
//语法：class 子类 :继承方式 父类1，继承方式 父类2，.....
//这可能会导致多个同名成员的出现，要加作用域区分
//
//C++实际开发不建议用多继承
//
//#include<iostream>
//using namespace std;
//class base1
//{
//public:
//	int ba;
//	int bb;
//	base1()
//	{
//		ba = 222;
//		bb = 248;
//	}
//};
//class base2
//{
//public:
//	int ba;
//	base2()
//	{
//		ba = 333;
//	}
//};
//class base3
//{
//public:
//	int ba;
//	base3()
//	{
//		ba = 444;
//	}
//};
//class son :public base1, public base2, public base3
//{
//public:
//	int ba;
//	son()
//	{
//		ba = 555;
//	}
//
//};
//
//void test()
//{
//	son s;
//	cout << "内存大小是" << sizeof(s) << endl;
//	cout << s.ba << endl;
//	cout << s.base1::ba << endl;
//	cout << s.base2::ba << endl;
//	cout << s.base3::ba << endl;
//	cout << s.bb << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//
//
//***菱形继承***//
//
//菱形继承概念：
//两个派生类继承同一个基类,又有某个类同时继承者两个派生类
//这种继承被称为菱形继承，或者钻石继承
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	int bage;
//};
//class son1 :virtual public base
//{
//public:
//};
//class son2 :virtual public base//变虚继承，此时base称其为“虚基类”
//{
//public:
//};
//class son3 :public son1, public son2
//{
//public:
//
//};
//
////会引发问题：
//
////第一有很多的同名成员，要说明清楚作用域
//
////第二会出现son3继承了两个同样属性的数据，造成浪费
////利用虚继承来解决这个问题：继承之前加上 关键字 virtual，变为虚继承
//void test()
//{
//	son3 b;
//	//b.bage = 18;//作用域不明确，引发二义性
//	b.son1::bage = 18;
//	b.son2::bage = 20;//当虚继承时，同名属性就有了一种静态的性质，共用一个，数据改变以最后一次为准
//	cout << b.son1::bage << endl;
//	cout << b.son2::bage << endl;
//
//	//b.son2::bage 这种访问方式不可以用来赋值
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//
//
//***对象模型查看工具***//
//
//使用方法：
//
//1.右击本代码文件的项目窗口页页标
//2.打开所在的文件夹
//3.复制路径
//4.在电脑开始菜单的vs列表中找到开发人员名令提示符
//5.先回车跳转到代码所在大盘中
//6.输入“cd” “空格”“粘贴路径”
//7.回车
//8.输入dir,回车
//9.输入"cl /d1 reportSingleClassLayout你想查看到的类名 源文件名的编号”Tap键“ "
//即可查看
//
//
//
//***多态***//
//
//
//***多态的基本概念***//
//
//多态是C++面向对象三大特性之一
//
//多态——多种形态
//
//多态分为两类
//·静态多态：函数重载和运算符重载属于静态多态，复用函数名
//·动态多态：派生类和虚函数实现运行时多态
//
//静态多态和动态多态区别：
//静态多态的函数地址早绑定——编译阶段确定函数地址
//动态多态的函数地址晚绑定——运行阶段确定函数地址
//
//#include<iostream>
//using namespace std;
//class anmail
//{
//public:
//	virtual void spack()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class cat :public anmail
//{
//public:
//	 virtual void spack()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////地址早绑定 在编译阶段就确定了函数地址
////函数本体中创立的是anmail类型的数据，地址早绑定使之后就算传入子类，输出也是父类内容，因为该函数已经确定了要从哪里取得数据
////如果想要晚绑定，即使输出父类内容，就要用到，虚函数
//
////虚函数： 在父类中定义函数时在类型前加 virtual 
//
//void dospack(anmail&anm)//
//{
//	anm.spack();
//}
//
//void test()
//{
//	cat ca;
//	dospack(ca);//父类的引用允许指向一个子类对象，c++允许父类与子类的强制转化
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
////动态多态实现
////1.有继承关系
////2.子类要重写父类中虚函数（类型，名字，参数完全相同）
//
//
////动态多态的调用
////父类的指针或者引用 执行子类对象  
////例：一个函数的形参是父类的指针或者引用，实参是子类
//
//
//
//***多态的底层剖析***//
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	/*void print()
//	{
//		cout << "没有调用虚函数" << endl;
//	}*/
//	virtual void coute()
//	{
//		cout << "调用了虚函数" << endl;
//	}
//};
//class son : public base
//{
//public:
//};
//void test()
//{
//	cout << "父类的大小是：" << sizeof(base) << endl;//测试发现，不论有没有print函数父类大小不变，且类中只储存非静态成员变量，按常理来说，大小应该为1
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
//多态的底层解释：
//首先，之前说过关于类的内存占用，只有非静态成员变量是和类本身存在一起的，其他的都单独存放在内存的另一个区域
//函数的接口地址就存放在该类专属的函数表中，对于虚函数（vfptr）来说也是如此，但是他不和其他函数一起存放，而是单独有一个虚函数表（vftable）存放虚函数的接口地址
//虚函数表所属的那个类为了能够找到这个表，调用其中内容，会用到一个虚指针的东西
//故在类中创建虚函数时，就会随之创建一个虚指针，和类存放在一起，使该类能够找到其对应的虚函数表
//当子类继承了父类的函数，子类就复制了一份虚函数表和虚指针，这时，如果子类还重写了父类的虚函数，子类的这个虚函数的接口地址就会覆盖掉原有从父类继承下来的虚函数表中的对应地址
//和子类父类有同名的成员函数处理方式不同
//1.调用时：多态的函数书写不用调整，一个父类函数适用于多个子类，输出不同在于输入不同
//          同名情况下，是通过函数书写的区别化来直接区分的，输入并不自由，还是确定要啥输啥，输出不同在于程序编译不同
//2.内存：  多态的函数子类的虚函数直接覆盖了从父类继承下来的位置，并没有开辟新的地址空间
//          同名情况下，子类函数地址和父类函数地址互不交集
//
//上述解释中，可知创建虚函数会随之创建对应虚指针，这就解释了为什么父类在创建了了虚函数之后，内存为4不为1
//

//多态的优点：
//代码组织结构清晰
//可读性强
//利于前期和后期的扩展以及维护



//***纯虚函数和抽象类***//

//#include<iostream>
//using namespace std;

//纯虚函数语法： virtual 返回值类型 函数名 （参数列表）=0;

//当类中有了纯虚函数，这个类也称为抽象类
//抽象类的特点：
//无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则也属于抽象类


//class base
//{
//public:
//	virtual void func() = 0;//纯虚函数
//};
//class son1 :public base
//{
//	virtual void func()
//	{
//		cout << "func函数调用" << endl;
//	}
//};
//class son2 :public base
//{
//
//};
//void test()
//{
	//base a;//抽象类无法实例化对象
	//new base;//抽象类无法实例化对象
	//son2 a;//子类不重写，不然也是纯虚函数
//	base* a = new son1;
//	a->func();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//***虚析构和纯虚析构***//
//
//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		cout << "base构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
	/*virtual~base()
	{
		cout << "base析构函数调用" << endl;

	}*/

	/*	virtual ~base() = 0;*///纯虚析构
		//纯虚析构是既需要代码实现又需要是空的
		//需要代码实现是因为对于父类来说，其作为一个类，基本结构中是有析构函数且要运行的，而纯虚析构内无内容，又是人为提供的，覆盖了系统默认的，这使得父类结构不完整
		//需要是空的，是因为这个纯虚函数被写出来，是要作为纯虚函数发挥作用的，不能使其消失
		//为了满足这两个条件，纯虚析构需要在类外定义
	//};
	//纯虚析构在类外定义的语法：
	//所属类::~函数名()
	//{
			//输入需要析构函数执行的内容
	//}
	//
	//class son :public base
	//{
	//public:
	//	son(string name)
	//	{
	//		cout << "son构造函数调用" << endl;
	//		namecat = new string(name);
	//	}
	//	virtual void speak()
	//	{
	//		cout <<*this->namecat<<"小猫喵喵叫" << endl;
	//	}
	//     ~son()
	//	{
	//		cout << "son析构函数调用" << endl;
	//		if (namecat != NULL)
	//		{
	//			delete namecat;
	//			namecat = NULL;
	//		}
	//	}
	//	string*namecat;
	//};
	//void test()
	//{
		/*base *abs=new son("Tom");*///因为是使用父类指针指向子类
		//在 C++ 中，你不能直接实例化一个抽象基类的对象，因为抽象基类中包含了未实现的纯虚函数，这样的对象是不完整的，编译器会报错。
		//但是，你可以创建一个指向抽象基类的指针或引用，并且可以将其指向或引用指向子类的对象。
		//这是因为子类中需要实现纯虚函数，从而完整了基类的接口。这种情况下，虽然通过指针或引用间接地使用了抽象基类的接口，但实际上操作的是子类的对象。
		/*abs->speak();
		delete abs;		*/		 //删除时删除的是父类指针，但是子类中的属性也是开辟在堆上的，删除时因为直接删除了父类指针，跳过了子类的析构过程，一次性析构了父类，实际上子类堆上的东西并没有析构掉
		//造成了内存泄露

//在C++中，如果堆区数据没有被正确释放，可能会导致内存泄漏的问题。内存泄漏指的是在程序运行时动态分配的内存没有被释放，导致程序占用的内存空间越来越大，最终可能会耗尽系统的可用内存，导致程序崩溃或者系统变得非常缓慢。
//
//内存泄漏的发生通常是因为程序员在动态分配内存后没有及时释放，或者释放内存的方式不正确，例如忘记调用delete或delete[]来释放内存，或者释放了非动态分配的内存等。
//
//内存泄漏的影响包括但不限于：
//1. 系统性能下降：随着内存泄漏的积累，程序所占用的内存不断增加，可能导致系统变得缓慢，甚至无法响应。
//2. 系统稳定性降低：当内存耗尽时，操作系统可能会强制关闭程序，导致程序崩溃。
//3. 资源浪费：内存泄漏导致未释放的内存无法再被程序使用，造成了资源的浪费。
//4. 可维护性降低：内存泄漏可能会导致程序的代码变得难以维护和理解，尤其是在大型项目中。
//
//为了避免内存泄漏，程序员应该养成良好的内存管理习惯，包括：
//- 在动态分配内存后，及时释放内存。
//- 使用智能指针等RAII（Resource Acquisition Is Initialization）技术来管理资源，以确保资源在不再需要时被正确释放。
//- 使用内存检测工具（如Valgrind、AddressSanitizer等）来检测内存泄漏问题。
//- 进行代码审查和测试，以确保内存管理的正确性。








	//解决方法是：将父类的析构函数改成虚析构（虚析构的用处）


	//解决原因：虚函数有个特点，就是通过将基类的析构函数声明为虚函数，就可以在释放基类指针时调用子类的析构函数，从而确保子类特有的资源能够得到正确释放。
	//          这是因为在C++中，当通过基类指针删除指向派生类对象的实例时，会根据对象的实际类型来调用相应的析构函数，而虚析构函数允许《动态绑定》，使得程序能够在运行时确定调用的是子类的析构函数。
	//          底层原理是通过虚函数表（vtable）实现的。每个包含虚函数的类都有一个虚函数表，其中存储了指向各个虚函数的指针。当通过基类指针调用虚函数时，程序会根据对象的实际类型查找相应的虚函数表，并调用对应的虚函数。因此，当通过基类指针删除指向子类对象的实例时，会根据子类的实际类型调用相应的析构函数，确保正确释放子类所占用的资源。
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//值得注意的是，如果类中没有一个纯虚函数，一旦有纯虚析构，该类也为抽象类，无法实例化函数




//***文件操作***//

//程序运行产生的数据都属于临时数据，程序一旦结束，都会被释放
//但是通过文件可以实现数据持久化
//程序中对文件操作需要包含头文件<fstream>


//文件类型分为：

//1.文本文件：
//文件以文本的ASCL码值的形式存储在计算机中

//2.二进制文件：
//文件以文本的二进制的形式存储在计算机中，用户一般不能直接读懂


//文件操作三大类：

//1.ofstream:写操作
//2.ifstream:读文件
//3.fstream:读写操作




//***文本文件写文件***//

//写文件步骤：

//1.包含头文件

//#include<fstream>

//2.创建流对象

//ofstream 流对象名字

//3.打开文件

//ofs.open("文件路径",打开方式)

//4.写数据

//ofs<<"写入的数据";

//5.关闭文件

//ofs.close();


//文件打开方式：

//ios::in    为了读文件打开文件

//ios::out   为了写文件打开文件

//ios::ate   直接打开文件尾读

//ios::app   直接打开文件尾写

//ios::trunc  如果文件存在先删除再创建

//ios::binary  以二进制方式操作文件

//***文件打开方式可以配合使用，利用操作符“|”
//                              例：以二进制形式写文件 :ios::binary|ios::out



//#include <iostream>
////第一步
//#include<fstream>
//using namespace std;
//void test()
//{
//	//第二步
//	ofstream ofs;
//	//第三步
//	ofs.open("test.txt", ios::out);
//	//第四步
//	ofs << "张三" << endl;
//	//第五步
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//***文本文件读文件***//

//读文件步骤：

//1.包含头文件

//#include <fstream>

//2.创建流对象

//ifstream ifs;

//3.打开文件并判断文件是否打开成功

//fs.open("文件路径"，打开方式);

//4.读数据

//三种方式读取:

// 1.字符数组读法：
// 创建一个足够长的空字符数组，将文件中的字符全写入该数组中
// char arr[1024]={0}
// 
// 可以是：
// while(文件名>>数组名)
// {
//		cout<<数组<<endl;
// }
// 
// 也可以是：
//while(文件名.getline(数组名，sizeof(数组名))
// {
//		cout<<数组<<endl;
// }
// 
// 
// 2.字符串读法
// string 字符串名;
// 
// while(getline(文件名，字符串名)
// {
//		cout<<字符串名<<endl;
// }
// 
// 3.一个字符一个字符的读
// char c;
// while ((c=文件名.get())!=EOF)
// {
//		cout<<c<<endl;
// }//***EOF是指文件的尾部——end of file

//5.关闭文件

//ifs.close();


//#include <iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//string bfu;
//void test1()
//{
//	ifstream ifs;//2
//	ifs.open("test.txt", ios::in);//3
//	if (!ifs.is_open())//判断文件是否打开
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	 while(getline(ifs,bfu))
//	 {
//			cout<<bfu<<endl;
//	 }
//	 
//	ifs.close();//5
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}



//**二进制文件写文件***//

//**注意对文件操作时推荐字符串用C的方法写，不要直接用string 不然容易出问题


//#include<iostream>
//#include<fstream>
//using namespace std;
//class person
//{
//public:
//	int age;
//	string phone;
//};
//void test()
//{
//	ofstream ofs;
//	ofs.open("person.txt", ios::out);
//	person p = {18, "1225478963"};
//	ofs.write((const char*)&p, sizeof(p));//这就是二进制和文本写入的区别，主要使用write函数形为：write((const char*)&写入内容,写入内容的内存大小);
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//**二进制文件读取***//

//#include<iostream>
//#include<fstream>
//using namespace std;
//class person
//{
//public:
//	int age;
//	string phone;
//};
//void test()
//{
//	ifstream ifs;
//	ifs.open("person.txt", ios::out);
//	if (!ifs.is_open())//判断文件是否打开
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	person p;//读的时候，读取媒介要和被读内容的类型相同
//	ifs.read((char*)&p, sizeof(p));//这就是二进制和文本读取的区别，主要使用read函数形为：read((char*)&读取途径,读取途径的内存大小);//***注意读取时没有const
//	//以上操作没有读出，只是将文件中数据写入了同类型的载体中
//	cout << p.age << endl;
//	cout << p.phone << endl;
//	ifs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}