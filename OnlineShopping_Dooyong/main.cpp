#include <iostream>
#include <fstream>
#include <string>

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask();
void programExit();

ifstream fin;
ofstream fout;



int main()
{
	fin.open(INPUT_FILE_NAME);
	fout.open(OUTPUT_FILE_NAME);

	doTask();

	return 0;
}



void doTask()
{
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menuLevel1 = 0;
	int menuLevel2 = 0;
	string str;
	int isProgramExit = 0;

	while (!isProgramExit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fin >> menuLevel1 >> menuLevel2;
		getline(fin, str);

		// 메뉴 구분 및 해당 연산 수행
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1:	// 회원가입
				//SignUp * pSignUp = new SignUp();
				break;
			case 2:	// 회원탈퇴

				break;
			}
		}
		case 2:
		{
			switch (menuLevel2)
			{
			case 1:	// 로그인

				break;
			case 2:	// 로그아웃

				break;
			}
		}
		case 3:
		{
			switch (menuLevel2)
			{
			case 1:	// 판매 의류 등록

				break;
			case 2:	// 등록 상품 조회

				break;
			case 3:	// 판매 완료 상품 조회

				break;
			}
		}
		case 4:
		{
			switch (menuLevel2)
			{
			case 1:	// 상품 정보 검색

				break;
			case 2:	// 상품 구매

				break;
			case 3:	// 상품 구매 내역 조회

				break;
			case 4:	// 상품 구매만족도 평가

				break;
			}
		}
		case 5:
		{
			switch (menuLevel2)
			{
			case 1:	// 판매 상품 통계

				break;
			}
		}
		case 6:
		{
			switch (menuLevel2)
			{
			case 1:	// 종료
				programExit();
				isProgramExit = 1;
				break;
			}
		}
		}
	}

	return;
}

void programExit()
{
	fout << "6.1. 종료" << endl;

	if (fin.is_open() == true) fin.close();
	if (fout.is_open() == true) fout.close();

	return;
}