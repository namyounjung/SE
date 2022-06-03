#include <iostream>
#include <fstream>
#include <string>

// Entity class
#include "Member.h"
#include "Account.h"
#include "SellingItems.h"
#include "SoldItems.h"
#include "MyPurchasedItems.h"
#include "Items.h"

// Control class
#include "SignUp.h"
#include "Withdrawal.h"
#include "Login.h"
#include "Logout.h"
#include "RegItem.h"
#include "InqSellItem.h"
#include "InqSoldItem.h"
#include "StatisticSoldItem.h"
#include "SearchItem.h"
#include "Purchase.h"
#include "InqPurchasedItem.h"
#include "SatisfactionAssessment.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask();


int main()
{
	doTask();

	return 0;
}



void doTask()
{
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menuLevel1 = 0;
	int menuLevel2 = 0;
	int isProgramExit = 0;

	ifstream fin(INPUT_FILE_NAME);

	while (!isProgramExit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fin >> menuLevel1 >> menuLevel2;

		// �޴� ���� �� �ش� ���� ����
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1: {	// 1.1. ȸ������
				string name;
				string rrn;
				string id;
				string pw;
				fin >> name >> rrn >> id >> pw;
				SignUp* su = new SignUp(name, rrn, id, pw);
				break;
			}
			case 2: {	// 1.2. ȸ��Ż��
				// Withdrawal* wd = new Withdrawal();
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menuLevel2)
			{
			case 1: {	// 2.1. �α���
				string memID;
				string memPW;
				fin >> memID >> memPW;
				// Login* li = new Login(memID, memPW);
				break;
			}
			case 2: {	// 2.2. �α׾ƿ�
				// Logout* lo = new Logout();
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menuLevel2)
			{
			case 1: {	// 3.1. �Ǹ� �Ƿ� ���
				string itemName;
				string itemCompany;
				int itemPrice;
				int itemQuantity;
				fin >> itemName >> itemCompany >> itemPrice >> itemQuantity;
				// RegItem* ri = new RegItem(itemName, itemCompany, itemPrice, itemQuantity);
				break;
			}
			case 2: {	// 3.2. ��� ��ǰ ��ȸ
				// InqSellItem* isell = new InqSellItem();
				break;
			}
			case 3: {	// 3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ
				// InqSoldItem* isold = new InqSoldItem();
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menuLevel2)
			{
			case 1: {	// 4.1. ��ǰ ���� �˻�
				string itemName;
				fin >> itemName;
				// SearchItem* si = new SearchItem(itemName);
				break;
			}
			case 2: {	// 4.2. ��ǰ ����
				// Purchase* pc = new Purchase();
				break;
			}
			case 3: {	// 4.3. ��ǰ ���� ���� ��ȸ
				// InqPurchasedItem* ip = new InqPurchasedItem();
				break;
			}
			case 4: {	// 4.4. ��ǰ ���Ÿ����� ��
				string itemName;
				string satisfaction;
				fin >> itemName >> satisfaction;
				// SatisfactionAssessment* sa = new SatisfactionAssessment(itemName, satisfaction);
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menuLevel2)
			{
			case 1: {	// 5.1. �Ǹ� ��ǰ ���
				// StatisticSoldItem* ss = new StatisticSoldItem();
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menuLevel2)
			{
			case 1: {	// 6.1. ����
				ofstream fout(OUTPUT_FILE_NAME,ios::app);
				fout << "6.1. ����" << endl;
				if (fin.is_open() == true) fin.close();
				if (fout.is_open() == true) fout.close();

				isProgramExit = 1;
				break;
			}
			}
			break;
		}
		}
	}

	return;
}