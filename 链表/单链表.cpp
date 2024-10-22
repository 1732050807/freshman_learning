#include<iostream>
using namespace std;
//节点模板
struct LNode
{
	int data;
	struct LNode* next;
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;
//初始化链表
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}
//按位序插入节点
bool ListInsert(LinkList& L, int i, int e)
{
	if (i < 1)
	{
		return false;
	}
	LNode* p;
	int j = 0;
	p = L;
	//找到指定位置的前驱
	while (j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return false;
	}
	LNode* s;
	s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
//按位序删除节点
bool ListDelete(LinkList& L, int i, int& e)
{
	if (i < 1)
		return false;
	LNode* p;
	p = L;
	int j = 0;
	while (j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next == NULL)
		return false;
	LNode* q;//必须构造一个载体给将要被删除的节点，方便处理其内存
	q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}
//查找指定位置节点
LNode* GetElem(LinkList& L, int i)
{
	if (i < 1)
	{
		return NULL;
	}
	LNode* p;
	p = L;
	for (int j = 0; j < i; j++)//j<i最后的循环结果是j=i使循环停止，而因为j从0开始，所以一共循环了i次使两者同步
	{
		p = p->next;
	}
	if(p!=NULL)
	return p;
}	int LocateElem(LinkList & L,int i)//按值查找
{
	if (i < 1)
		return NULL;
	LNode* p;
	p = L->next;
	int j = 0;
	while (p != NULL)
	{
		p = p->next;
		j++;
		if (p->data == i)
		{
			return j;
			break;
		}
	}
	return NULL;
}
int seekLength(LinkList& L)//求链表长度
{
	LNode* p = L->next;
	int len = 0;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}
LinkList List_TailInitList(LinkList& L)//连续尾插建立单链表
{
	int x;
	L = (LNode*)malloc(sizeof(LNode));//创建头节点
	LNode* s, * r = L;
	cin >> x;
	while(x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		r->next = s;
		s->data = x;
		r = s;
		cin >> x;
	}
	r->next = NULL;
	return L;
}
bool ListDelete(LinkList& L)//销毁整条链表
{
	LNode* p;
	while (L->next != NULL)
	{
		p = L->next;
		free(L);//只是销毁所指向空间的内容，地址本身还存在
		L = p;
	}
	free(L);
	return true;
}
int main()
{
	int i=0,e=0;
	LinkList L;
	cout << "请将你想要存入链表的数据填入，每个数据之间用回车隔开" << endl;
	List_TailInitList(L);
	int length = 0;
	length=seekLength(L);
	cout <<"链表长度为："<< length << endl;
	cout << "你想在哪一位插入新的数据？" << endl;
	cin>> i;
	cout << "插入数据是多少？" << endl;
	cin >> e;
	ListInsert(L, i, e);
	cout << "你想在哪一位删除数据？" << endl;
	cin >> i;
	ListDelete(L, i, e);
	cout << "删除数据是："<<e << endl;
	cout << "你想查找哪一位的数据？" << endl;
	cin >> i;
	cout << "该位节点的数据是：" << GetElem(L, i)->data << endl;
	cout << "你想查找什么数据的节点？" << endl;
	cin >> e;
	cout << "该数值的节点位序为：" << LocateElem(L, e)<< endl; 
	cout << "此刻链表长度为：" << seekLength(L) << endl;
	cout << "确认销毁链表输入1000" << endl;
	int pan=0;
	cin >> pan;
	if (pan == 1000)
	{
		ListDelete(L);
	}
	cout << "OK啦！" << endl;
	system("pause");
	return 0;
}