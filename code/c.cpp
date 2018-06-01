#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

typedef void(TIPS)(void);

struct tips
{
	char form[64];
	char to[64];
	TIPS *tp;
};

struct tips* Create_tip(char* from,char *to,TIPS *tp)
{
	struct tips*temp = (struct tips *)malloc(sizeof(struct tips));
	if(temp ==NULL)
	{
		return NULL;
	}
	strcpy(temp->form,from);
	strcpy(temp->to, to);
	temp->tp = tp;
	return temp;
};

void destoey_tips(struct tips *p)
{
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}
}

void openTips(struct tips * tip_p )
{
	cout << "���˽���" << endl;
	cout << "�˽�������" << tip_p->form << "д��" << tip_p->to << endl;
	cout << "����������:" << endl;
	tip_p->tp();
}



void tip1()
{
	cout << "11111111" << endl;
}

void tip2()
{
	cout << "22222222" << endl;
}

void tip3()
{
	cout << "33333333" << endl;
}


int main()
{
	struct tips *ps = Create_tip("����", "����", tip1);
	openTips(ps);
	destoey_tips(ps);
	system("pause");
	return 0;
}
