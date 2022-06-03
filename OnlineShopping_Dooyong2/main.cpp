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
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menuLevel1 = 0;
	int menuLevel2 = 0;
	int isProgramExit = 0;

	ifstream fin(INPUT_FILE_NAME);

	while (!isProgramExit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fin >> menuLevel1 >> menuLevel2;

		// 메뉴 구분 및 해당 연산 수행
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1: {	// 1.1. 회원가입
				string name;
				string rrn;
				string id;
				string pw;
				fin >> name >> rrn >> id >> pw;
				SignUp* su = new SignUp(name, rrn, id, pw);
				break;
			}
			case 2: {	// 1.2. 회원탈퇴
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
			case 1: {	// 2.1. 로그인
				string memID;
				string memPW;
				fin >> memID >> memPW;
				// Login* li = new Login(memID, memPW);
				break;
			}
			case 2: {	// 2.2. 로그아웃
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
			case 1: {	// 3.1. 판매 의류 등록
				string itemName;
				string itemCompany;
				int itemPrice;
				int itemQuantity;
				fin >> itemName >> itemCompany >> itemPrice >> itemQuantity;
				// RegItem* ri = new RegItem(itemName, itemCompany, itemPrice, itemQuantity);
				break;
			}
			case 2: {	// 3.2. 등록 상품 조회
				// InqSellItem* isell = new InqSellItem();
				break;
			}
			case 3: {	// 3.3. 판매 완료 상품 조회
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
			case 1: {	// 4.1. 상품 정보 검색
				string itemName;
				fin >> itemName;
				// SearchItem* si = new SearchItem(itemName);
				break;
			}
			case 2: {	// 4.2. 상품 구매
				// Purchase* pc = new Purchase();
				break;
			}
			case 3: {	// 4.3. 상품 구매 내역 조회
				// InqPurchasedItem* ip = new InqPurchasedItem();
				break;
			}
			case 4: {	// 4.4. 상품 구매만족도 평가
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
			case 1: {	// 5.1. 판매 상품 통계
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
			case 1: {	// 6.1. 종료
				ofstream fout(OUTPUT_FILE_NAME,ios::app);
				fout << "6.1. 종료" << endl;
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