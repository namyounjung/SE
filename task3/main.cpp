// 헤더 선언
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include "items.h"
#include "Account.h"
using namespace std;


ifstream fin("input.txt");
ofstream fout("output.txt");
fstream fio;


string menu_level_1, menu_level_2; // integer overflow 피하려고 string 으로 받기

vector<Items> itemsList; // 물건 저장한 벡터 - 현재 최대 1000명 받을수 잇음
vector<Account> AccountList; // 사람 정보 목록 저장한 벡터
map<string, int> memberKey; // 사람 고유 번호 저장해놓은 맵
map<string, int> itemKey;

void programExit()
{
    fout << "6.1. 종료" << endl;

    if (fin.is_open() == true) fin.close();
    if (fout.is_open() == true) fout.close();

    return;
}

int checkValid(string& str) {
    if (str.length() != 1) return -1;
    return stoi(str);
}

void findItem(string str) {
    int findKey = itemKey[str];
    fout << "> ";
    fout << itemsList[findKey].itemSellerID << " ";
    fout << itemsList[findKey].itemName << " ";
    fout << itemsList[findKey].itemCompany << " ";
    fout << itemsList[findKey].itemPrice << " ";
    fout << itemsList[findKey].itemQuantity << " ";
    int averageRate = itemsList[findKey].itemSatisfaction;
    if (itemsList[findKey].rateNum == 0) averageRate = 0;
    else averageRate /= itemsList[findKey].rateNum;
    fout << averageRate << "\n";
}

void purchaseItem(int key) {
    itemsList[key].itemQuantity--;
    itemsList[key].itemSoldQuantity += 1;
    fout << "> ";
    fout << itemsList[key].itemSellerID << " ";
    fout << itemsList[key].itemName << "\n";
}

void setSatisfaction(string item, int rate) {
    int findKey = itemKey[item];
    itemsList[findKey].itemSatisfaction += rate;
    itemsList[findKey].rateNum++;

    fout << "> ";
    fout << itemsList[findKey].itemSellerID << " ";
    fout << itemsList[findKey].itemName << " ";

    int averageRate = itemsList[findKey].itemSatisfaction;
    if (itemsList[findKey].rateNum == 0) averageRate = 0;
    else averageRate /= itemsList[findKey].rateNum;
    fout << averageRate << "\n";
}



void listupBuyItems(vector<int>& v) {
    for (int i = 0; i < (int)v.size(); i++) {
        fout << "> ";
        fout << itemsList[v[i]].itemName << " ";
        fout << itemsList[v[i]].itemCompany << " ";
        fout << itemsList[v[i]].itemPrice << " ";
        fout << itemsList[v[i]].itemQuantity << " ";
        fout << itemsList[v[i]].itemSatisfaction / itemsList[v[i]].itemSoldQuantity << '\n';
    }
}

void Items::showItemInform(Items& item) {
    fout << "> ";
    fout << item.itemName << " ";
    fout << item.itemCompany << " ";
    fout << item.itemPrice << " ";
    fout << item.itemQuantity << '\n';
}


void Items::showSoldItemInform(Items& item) {
    fout << "> ";
    fout << item.itemName << " ";
    fout << item.itemCompany << " ";
    fout << item.itemPrice << " ";
    fout << item.itemSoldQuantity << " ";
    fout << item.itemSatisfaction << '\n';
}

void Items::showSoldItemStatistic(Items& item) {
    fout << "> ";
    fout << item.itemName << " ";
    fout << item.itemPrice * item.itemSoldQuantity << " ";
    fout << item.itemSatisfaction / item.itemSoldQuantity << '\n';
}


int main() {

    int isProgramExit = 0;
    int primaryKeyOfAccount = 0; // 사람의 고유 번호
    int primaryKeyOfProduct = 0; // 물건의 고유 번호
    bool isLogined = false; // 로그인 되어있는가
    int searchItemKey = -1;
    int nowKey = 0; // 현재 로그인 된 사람의 고유키 (primaryKeyOfAccount)

    string name, rrn, id, password;

    while (!isProgramExit) {
        fin >> menu_level_1;
        int chk_level1 = checkValid(menu_level_1); // 유효한 명령인지 ?

        if (chk_level1 == -1) { // 예외처리 ..
            fout << "cmd error\n";
            continue;
        }

        /////////////////// 6. 종료
        if (chk_level1 == 6) {
            programExit();
            isProgramExit = 1;
            break;
        }
        ////////////////// 1. 가입 & 탈퇴
        if (chk_level1 == 1) {
            ////////// 명령 유효성 확인
            fin >> menu_level_2;
            int chk_level2 = checkValid(menu_level_2); // 유효한 옵션인지 확인

            if (chk_level2 == -1) {
                //fout << "option error";
                continue;
            }
            ////////////////////////

            if (chk_level2 == 1) {

                fin >> name >> rrn >> id >> password;

                if (memberKey.count(id)) {
                    //fout << "이미 존재하거나 탈퇴한 아이디 입니다\n";
                    continue;
                }

                AccountList.push_back(Account(name, rrn, id, password));
                memberKey[id] = primaryKeyOfAccount++;
                AccountList[memberKey[id]].memSystemPermission = true;
                fout << "1.1. 회원 가입\n";
                fout << "> " << name << " " << rrn << " " << id << " " << password << "\n";
            }
            else if (chk_level2 == 2) {
                if (!isLogined) {
                    //fout << "로그인 안되어 있음\n";
                    continue;
                }
                fout << "1.2. 회원 탈퇴\n";
                AccountList[nowKey].memSystemPermission = false; // 탈퇴
                isLogined = false;
                fout << "> "<< id << "\n";
                id = "";
            }
        }

        ////////////////// 2. 로그인
        else if (chk_level1 == 2) {
            ////////// 명령 유효성 확인
            fin >> menu_level_2;
            int int_option = checkValid(menu_level_2);

            if (int_option == -1) {
                //fout << "option error";
                continue;
            }
            ////////////////////////////

            if (int_option == 1) {

                string id, password;
                fin >> id >> password;

                fout << "2.1. 로그인\n";

                if (isLogined) {
                    //fout << "이미 로그인되어 있습니다. 로그아웃 먼저 하세요\n";
                    continue;
                }

                if (!memberKey.count(id)) {
                    //fout << "존재하지 않는 아이디 입니다\n";
                    continue;
                }

                nowKey = memberKey[id];

                //cout<<AccountList[Key].memSystemPermission<<'\n';
                if (!AccountList[nowKey].memSystemPermission) {
                    //fout << "탈퇴된 아이디 입니다\n";\
                                continue;
                }

                if (password == AccountList[nowKey].memPW) {
                    fout << "> " << id << " " << password << "\n";
                    isLogined = true;
                }
                else {
                    fout << "> \n"; // 비밀번호 틀림
                }
            }
            else if (int_option == 2) {
                isLogined = false; // 로그인 해제
                nowKey = 0;
                fout << "2.2. 로그아웃\n";
                fout << "> " << id << "\n";
            }
            //else fout << "option error\n";

        }

        //////////////// 3 판매 의류 등록
        else if (chk_level1 == 3) { // 3.1 ~ 3.3
            ////////// 명령 유효성 확인
            fin >> menu_level_2;
            int int_option = checkValid(menu_level_2);

            if (int_option == -1) {
                //fout << "option error";
                continue;
            }
            ///////////////////////////

            if (!isLogined) {
                //fout << "you are not logined.\n";
                continue;
            }



            if (int_option == 1) { // 판매 의류 등록
                string names, company; int price, quantity;
                fin >> names >> company >> price >> quantity;
                if (itemKey.count(names)) {
                    fout << "같은 이름을 가진 아이템이 존재합니다. 다시입력해주세요.\n";
                }
                else {
                    fout << "3.1. 판매 의류 등록\n"; 
                    itemsList.push_back(Items(names, company, AccountList[nowKey].memID, price, quantity));
                    itemKey[names] = primaryKeyOfProduct++;
                    fout << "> " << names << " " << company << " " << price << " " << quantity << "\n";
                }
            }
            else if (int_option == 2) { // 등록 상품 조회
                fout << "3.2. 등록 상품 조회\n";
                if (itemsList.empty()) cout << "there is No item\n";
                for (auto& item : itemsList) {
                    if (item.itemSellerID != AccountList[nowKey].memID) continue;
                    Items::showItemInform(item);
                }
            }
            else if (int_option == 3) { // 판매 완료 상품 조회
                int cnt = 0;
                fout << "3.3. 판매 완료 상품 조회\n";
                for (auto& item : itemsList) {
                    if (item.itemSoldQuantity > 0) {
                        Items::showSoldItemInform(item);
                        cnt++;
                    }
                }

                if (itemsList.empty() || cnt < 1) fout << "No Sold item\n";
            }
            else fout << "option error\n";
        }
        else if (chk_level1 == 4) {
            fin >> menu_level_2;
            int int_option = checkValid(menu_level_2);

            if (int_option == 1) {
                fout << "4.1. 상품 정보 검색\n";
                string productName;
                fin >> productName;
                findItem(productName);
                searchItemKey = itemKey[productName];
            }
            else if (int_option == 2) {
                fout << "4.2. 상품 구매\n";
                if (searchItemKey == -1) continue; // 검색 안함
                AccountList[nowKey].buyItemsKeys.push_back(searchItemKey);
                purchaseItem(searchItemKey);
                searchItemKey = -1; // 구매했으므로 검색했던 정보 날림
            }
            else if (int_option == 3) {
                fout << "4.3. 상품 구매 내역 조회\n";
                listupBuyItems(AccountList[nowKey].buyItemsKeys);
            }
            else if (int_option == 4) {
                fout << "4.4. 상품 구매 만족도 평가\n";
                string productName; int rate;
                fin >> productName >> rate;
                setSatisfaction(productName, rate);
            }
            else continue;
        }

        ////////////// 5. 통계
        else if (chk_level1 == 5) {
            fin >> menu_level_2;
            int int_option = checkValid(menu_level_2);

            if (!isLogined) {
                fout << "you are not logined.\n";
                continue;
            }

            if (int_option == -1) {
                fout << "option error";
                continue;
            }

            if (int_option == 1) {
                int cnt = 0;
                fout << "5.1. 판매 상품 통계\n";
                for (auto& item : itemsList) {
                    if (item.itemSoldQuantity > 0) {
                        Items::showSoldItemStatistic(item);
                        cnt++;
                    }
                }

                if (itemsList.empty() || cnt < 1) fout << "No Sold item\n";
            }
            else fout << "option error\n";
        }

    }

}



//
///*
//
//1 1 [이름] [주민번호] [ID] [Password]
//1.1. 회원가입
//> [이름] [주민번호] [ID] [비밀번호]
//1 2
//1.2. 회원탈퇴
//> [ID]
//2 1 [ID] [비밀번호]
//2.1. 로그인
//> [ID] [비밀번호]
//2 2
//2.2. 로그아웃
//> [ID]
//3 1 [상품명] [제작회사명] [가격] [수량]
//3.1. 판매 의류 등록
//> [상품명] [제작회사명] [가격] [수량]
//3 2
//3.2. 등록 상품 조회
//> { [상품명] [제작회사명] [가격] [수량] }*
//3 3
//3.3. 판매 완료 상품 조회
//> [상품명] [제작회사명] [가격] [판매된 수량] [평균 구매만족도]
//4 1 [상품명]
//4.1. 상품 정보 검색
//> [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도]
//4 2
//4.2. 상품 구매
//> [판매자ID] [상품명]
//4 3
//4.3. 상품 구매 내역 조회
//> { [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] }*
//4 4 [상품명] [구매만족도]
//4.4. 상품 구매만족도 평가
//> [판매자ID] [상품명] [구매만족도]
//5 1
//5.1. 판매 상품 통계
//> { [상품명] [상품 판매 총액] [평균 구매만족도] }*
//6 1
//6.1. 종료
//
// */


