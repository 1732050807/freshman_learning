#include<iostream>
using namespace std;
//�ڵ�ģ��
struct LNode
{
	int data;
	struct LNode* next;
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;
//��ʼ������
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}
//��λ�����ڵ�
bool ListInsert(LinkList& L, int i, int e)
{
	if (i < 1)
	{
		return false;
	}
	LNode* p;
	int j = 0;
	p = L;
	//�ҵ�ָ��λ�õ�ǰ��
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
//��λ��ɾ���ڵ�
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
	LNode* q;//���빹��һ���������Ҫ��ɾ���Ľڵ㣬���㴦�����ڴ�
	q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}
//����ָ��λ�ýڵ�
LNode* GetElem(LinkList& L, int i)
{
	if (i < 1)
	{
		return NULL;
	}
	LNode* p;
	p = L;
	for (int j = 0; j < i; j++)//j<i����ѭ�������j=iʹѭ��ֹͣ������Ϊj��0��ʼ������һ��ѭ����i��ʹ����ͬ��
	{
		p = p->next;
	}
	if(p!=NULL)
	return p;
}	int LocateElem(LinkList & L,int i)//��ֵ����
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
int seekLength(LinkList& L)//��������
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
LinkList List_TailInitList(LinkList& L)//����β�彨��������
{
	int x;
	L = (LNode*)malloc(sizeof(LNode));//����ͷ�ڵ�
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
bool ListDelete(LinkList& L)//������������
{
	LNode* p;
	while (L->next != NULL)
	{
		p = L->next;
		free(L);//ֻ��������ָ��ռ�����ݣ���ַ��������
		L = p;
	}
	free(L);
	return true;
}
int main()
{
	int i=0,e=0;
	LinkList L;
	cout << "�뽫����Ҫ����������������룬ÿ������֮���ûس�����" << endl;
	List_TailInitList(L);
	int length = 0;
	length=seekLength(L);
	cout <<"������Ϊ��"<< length << endl;
	cout << "��������һλ�����µ����ݣ�" << endl;
	cin>> i;
	cout << "���������Ƕ��٣�" << endl;
	cin >> e;
	ListInsert(L, i, e);
	cout << "��������һλɾ�����ݣ�" << endl;
	cin >> i;
	ListDelete(L, i, e);
	cout << "ɾ�������ǣ�"<<e << endl;
	cout << "���������һλ�����ݣ�" << endl;
	cin >> i;
	cout << "��λ�ڵ�������ǣ�" << GetElem(L, i)->data << endl;
	cout << "�������ʲô���ݵĽڵ㣿" << endl;
	cin >> e;
	cout << "����ֵ�Ľڵ�λ��Ϊ��" << LocateElem(L, e)<< endl; 
	cout << "�˿�������Ϊ��" << seekLength(L) << endl;
	cout << "ȷ��������������1000" << endl;
	int pan=0;
	cin >> pan;
	if (pan == 1000)
	{
		ListDelete(L);
	}
	cout << "OK����" << endl;
	system("pause");
	return 0;
}