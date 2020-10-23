#pragma once
#include <iostream>
#include <ctime>
#include <list>
using namespace std;

class Record {
public:
	struct tm date;
	bool is_income;
	unsigned int amount;
	string memo;
	short category_number;		//�ʿ信 ���� char, short, int ���� (���� �� ������� �Ʒ� �Լ� ���� �� cpp������ �������ּ���)
};

/* file manage �Լ� */
bool initFiles(void);		//return: ����/����
bool saveFiles(void);		//return: ����/����

/* string->other �Ľ� �� �˻� �Լ� */
struct tm checkDate(string);		//return: ���� �� string -> tm�� / ���� �� �����ּ���
unsigned int checkAmount(string);	//return: ���� �� string -> unsigned int�� / ���� �� �����ּ��� (�ʿ信 ���� ��ȹ�� ���� ����)
string checkMemo(string);			//return: ���� �� �״�� / ���� �� �����ּ���.
short checkCategoryNumber(string);	//return: string->short / ���� �� �����ּ���.

/* recordManage �Լ� */
void addRecord(void);			//�ʿ信 ���� ����� �ڷ��� ����
void printAllRecord(void);		//�ʿ信 ���� ����� �ڷ��� ����
//��� �˻� �κ��� ���̴��� ����Ŵ�� ���⿡ �߰����ּ���
void modifyRecord(void);		//�ʿ信 ���� ����� �ڷ��� ����
void deleteRecord(void);		//�ʿ信 ���� ����� �ڷ��� ����

/* categoryManage �Լ� */
void printCategoryList(list <string>);
bool addCategoryList(list <string>);			//���� �� True ��ȯ
bool modifyCategory(list <string>);				//���� �� True ��ȯ
bool deleteCategory(list <string>,list <class Record>);		//���� �� True ��ȯ