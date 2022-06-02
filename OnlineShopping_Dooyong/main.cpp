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
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menuLevel1 = 0;
	int menuLevel2 = 0;
	string str;
	int isProgramExit = 0;

	while (!isProgramExit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fin >> menuLevel1 >> menuLevel2;
		getline(fin, str);

		// �޴� ���� �� �ش� ���� ����
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1:	// ȸ������
				//SignUp * pSignUp = new SignUp();
				break;
			case 2:	// ȸ��Ż��

				break;
			}
		}
		case 2:
		{
			switch (menuLevel2)
			{
			case 1:	// �α���

				break;
			case 2:	// �α׾ƿ�

				break;
			}
		}
		case 3:
		{
			switch (menuLevel2)
			{
			case 1:	// �Ǹ� �Ƿ� ���

				break;
			case 2:	// ��� ��ǰ ��ȸ

				break;
			case 3:	// �Ǹ� �Ϸ� ��ǰ ��ȸ

				break;
			}
		}
		case 4:
		{
			switch (menuLevel2)
			{
			case 1:	// ��ǰ ���� �˻�

				break;
			case 2:	// ��ǰ ����

				break;
			case 3:	// ��ǰ ���� ���� ��ȸ

				break;
			case 4:	// ��ǰ ���Ÿ����� ��

				break;
			}
		}
		case 5:
		{
			switch (menuLevel2)
			{
			case 1:	// �Ǹ� ��ǰ ���

				break;
			}
		}
		case 6:
		{
			switch (menuLevel2)
			{
			case 1:	// ����
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
	fout << "6.1. ����" << endl;

	if (fin.is_open() == true) fin.close();
	if (fout.is_open() == true) fout.close();

	return;
}