// 헤더 선언
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

// 상수 선언
#define MAX_STRING 32
ifstream fin("input.txt");
ofstream fout("output.txt");
fstream fio;
//
//// 함수 선언
//void doTask();
//void join();
//void program_exit();
//void RegItems();
//void InqSellingItems();
//void InqSoldItems();
//void StatisticSoldItem();
//void Withdrawal();
//void login();
//void logout();
//
//// 변수 선언
//FILE* in_fp, * out_fp;
//
//vector<items> itemsList[100]; // 물건 저장한 벡터
//vector<Account> AccountList; // 사람 정보 목록 저장한 벡터
//map<string, int> memberKey; // 사람 고유 번호 저장해놓은 맵
//
//int primaryKeyOfAccount = 0; // 사람의 고유 번호
//int primaryKeyOfProduct = 0; // 물건의 고유 번호
//bool isLogined = false; // 로그인 되어있는가
//int nowKey = 0; // 현재 로그인 된 사람의 고유키 (primaryKeyOfAccount)
//
//class Account {
//public:
//    string memName;
//    string memRRN;
//    string memID;
//    string memPW;
//    bool memSystemPermission;
//    map<string, int> itemKey;
//
//
//    Account(string name, string rrn, string id, string pw)
//        : memName(name), memRRN(rrn), memID(id), memPW(pw) {};
//};
//
//class items {
//public:
//    string itemName;
//    string itemCompany;
//    int itemPrice;
//    int itemQuantity;
//    int itemSoldQuantity;
//    int itemSatisfaction;
//
//    items(string names, string company, int price, int quantity)
//        : itemName(names), itemCompany(company), itemPrice(price), itemQuantity(quantity) {};
//
//};
//
//void showItemInform(items& item) {
//    fout << ">" << item.itemName << " " << item.itemCompany << " " << item.itemPrice << " "<< item.itemQuantity << '\n';
//}
//
//
//void showSoldItemInform(items& item) {
//    fout << ">" << item.itemName << " " << item.itemCompany << " " << item.itemPrice << " " << item.itemSoldQuantity << " " << item.itemSatisfaction << '\n';
//}
//
//void showSoldItemStatistic(items& item) {
//    fout << ">" << item.itemName << " " << item.itemPrice * item.itemSoldQuantity << " " << item.itemSatisfaction / item.itemSoldQuantity << '\n';
//}
//
//
//
//int main()
//{
//    // 파일 입출력을 위한 초기화
//    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
//    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
//
//        doTask();
//        return 0;
//}
//
//
//void doTask()
//{
//
//    // 메뉴 파싱을 위한 level 구분을 위한 변수
//    int menu_level_1 = 0, menu_level_2 = 0;
//    int is_program_exit = 0;
//
//    while (!is_program_exit)
//    {
//        // 입력파일에서 메뉴 숫자 2개를 읽기
//        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
//
//
//        // 메뉴 구분 및 해당 연산 수행
//        switch (menu_level_1)
//        {
//        case 1:
//        {
//            switch (menu_level_2)
//            {
//            case 1:   // "1.1. 회원가입“ 메뉴 부분
//            {
//                join(); // join() 함수에서 해당 기능 수행 
//                break;
//            }
//            case 2: // 1.2 회원탈퇴
//            {
//                Withdrawal();
//                break;
//            }
//            }
//        }
//        case 2:
//        {
//            switch (menu_level_2) {
//            case 1:
//            {
//                login();
//                break;
//            }
//            case 2:
//            {
//                logout();
//                break;
//            }
//            }
//        }
//        case 3: //판매 관련
//        {
//            switch (menu_level_2)
//            {
//            case 1:   // "3.1. 판매의류둥록“ 메뉴 부분
//            {
//                RegItems();
//                break;
//            }
//            case 2: // "3.2. 등록상품조회
//            {
//                InqSellingItems();
//                break;
//            }
//            case 3: // "3.3. 판매완료 상품 조회
//            {
//                InqSoldItems();
//                break;
//            }
//            }
//        }
//        // 4. 상품 구매 관리
//        case 4:
//        {
//            switch (menu_level_2)
//            {
//                // 4.1. 상품 정보 검색
//            case 1:
//            {
//            }
//            // 4.2. 상품 구매
//            case 2:
//            {
//            }
//            // 4.3. 상품 구매 내역 조회
//            case 3:
//            {
//            }
//            // 4.4. 상품 구매만족도 평가
//            case 4:
//            {
//            }
//            }
//        }
//        case 5: //통계 관련
//        {
//            switch (menu_level_2)
//            {
//            case 1:   // 5.1 판매 상품 통계
//            {
//                StatisticSoldItem();
//                break;
//            }
//            }
//        }
//            case 6:
//            {
//                switch (menu_level_2)
//                {
//                case 1:   // "6.1. 종료“ 메뉴 부분
//                {
//                    program_exit();
//                    is_program_exit = 1;
//                    break;
//                }
//                }
//            }
//            return;
//        }
//    }
//}
//        void join(){
//            char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
//
//            // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
//            fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
//
//            // 출력 형식
//            fprintf(out_fp, "1.1. 회원가입\n");
//            fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
//            if (memberKey.count(ID)) {
//                //fout << "이미 존재하거나 탈퇴한 아이디 입니다\n";
//            }
//            else {
//                AccountList.push_back(Account(name, SSN, ID, password));
//                memberKey[ID] = primaryKeyOfAccount++;
//                AccountList[memberKey[ID]].memSystemPermission = true;
//                //fout << "회원 가입 완료\n";
//            }
//        }
//        
//        void Withdrawal() {
//            if (!isLogined) {
//                //fout << "로그인 안되어 있음\n";
//            }
//            else {
//                AccountList[nowKey].memSystemPermission = false; // 탈퇴
//                isLogined = false;
//                //fout << ID << "\n";
//            }
//        }
//
//        void login() {
//            string id, password;
//            fscanf(in_fp, "%s %s", id, password);
//
//            if (isLogined) {
//                //fout << "이미 로그인되어 있습니다. 로그아웃 먼저 하세요\n";
//                return;
//            }
//
//            if (!memberKey.count(id)) {
//                //fout << "존재하지 않는 아이디 입니다\n";
//                return;
//            }
//
//            nowKey = memberKey[id];
//
//            fout << AccountList[nowKey].memSystemPermission << '\n';
//            if (!AccountList[nowKey].memSystemPermission) {
//                //fout << "탈퇴된 아이디 입니다\n";\
//                    return;
//            }
//
//            if (password == AccountList[nowKey].memPW) {
//                fout << "Login success\n";
//                isLogined = true;
//            }
//            else {
//                fout << "wrong password. Login failed.\n";
//            }
//        }
//
//        void logout() {
//            isLogined = false; // 로그인 해제
//            nowKey = 0;
//            //fout << ID ;
//        }
//
//        void RegItems(){  // "3.1. 판매의류둥록“ 메뉴 부분
//            string itemName, itemCompany, itemPrice, itemQuantity, memID;
//
//            //[상품명] [제작회사명] [가격] [수량]
//            fscanf(in_fp, "%s %s %s %s", itemName, itemCompany, itemPrice, itemQuantity);
//
//            //itemsList.push_back(pair(memID, items(itemName, itemCompany, itemPrice, itemQuantity)));
//            if (AccountList[nowKey].itemKey.count(itemName)) {
//                //cout << "이미 같은 이름을 가진 아이템이 존재합니다. 다시입력해주세요.\n";
//            }
//            else {
//                itemsList[nowKey].emplace_back(itemName, itemCompany, itemPrice, memID);
//                AccountList[nowKey].itemKey[itemName] = primaryKeyOfProduct++;
//            }
//            //출력 형식
//            fprintf(out_fp, "3.1. 판매 의류 등록\n");
//            fprintf(in_fp, "%s %s %s %s", itemName, itemCompany, itemPrice, itemQuantity);
//        }
//
//        void InqSellingItems() {
//            char itemName[MAX_STRING], itemCompany[MAX_STRING], itemPrice[MAX_STRING], itemSoldQuantity[MAX_STRING];
//            //출력 형식
//            fprintf(out_fp, "3.2. 등록 상품 조회\n");
//            fscanf(in_fp, "%s %s %s %s", itemName, itemCompany, itemPrice, itemSoldQuantity);
//            if (itemsList[nowKey].empty()) cout << "there is No item\n";
//            for (auto& item : itemsList[nowKey]) {
//                showItemInform(item);
//                fout << item.itemName << " " << item.itemCompany << " " << " " << item.itemPrice << " " << item.itemQuantity << '\n';
//            }
//        }
//
//        void InqSoldItems(){
//            char itemName[MAX_STRING], itemCompany[MAX_STRING], itemPrice[MAX_STRING], itemQuantity[MAX_STRING], itemSatisfaction[MAX_STRING];
//            //출력 형식
//            fprintf(out_fp, "3.3. 판매완료 상품 조회\n");
//            fscanf(in_fp, "%s %s %s %s %s", itemName, itemCompany, itemPrice, itemQuantity, itemSatisfaction);
//            int cnt = 0;
//            for (auto& item : itemsList[nowKey]) {
//                if (item.itemSoldQuantity > 0) {
//                    showSoldItemInform(item);
//                    cnt++;
//                }
//            }
//        }
//
//        void StatisticSoldItem(){
//            //출력 형식
//            fprintf(out_fp, "5.1. 판매 상품 통계\n");
//            int cnt = 0;
//
//            for (auto& item : itemsList[nowKey]) {
//                if (item.itemSoldQuantity > 0) {
//                    showSoldItemStatistic(item);
//                    cnt++;
//                }
//            }
//        }
//
//        void program_exit()
//        {
//            return;
//        }
//
//
//
///*
//
//3 1 hat chulsoo 2000 1
//3 1 test testcompnay 3000 10
//3 1 test2 testcompany 1500 2
//3 2
// */



class Account {
public:
    string memName;
    string memRRN;
    string memID;
    string memPW;
    bool memSystemPermission;
    map<string, int> itemKey;


    Account(string name, string rrn, string id, string pw)
        : memName(name), memRRN(rrn), memID(id), memPW(pw) {};
};

class items {
public:
    string itemName;
    string itemCompany;
    int itemPrice;
    int itemQuantity;
    int itemSoldQuantity;
    int itemSatisfaction;

    items(string names, string company, int price, int quantity)
        : itemName(names), itemCompany(company), itemPrice(price), itemQuantity(quantity) {};

};


void showItemInform(items& item) {
    fout << item.itemName << " ";
    fout << item.itemCompany << " ";
    fout << item.itemPrice << " ";
    fout << item.itemQuantity << '\n';
}


void showSoldItemInform(items& item) {
    fout << item.itemName << " ";
    fout << item.itemCompany << " ";
    fout << item.itemPrice << " ";
    fout << item.itemSoldQuantity << " ";
    fout << item.itemSatisfaction << '\n';
}

void showSoldItemStatistic(items& item) {
    fout << item.itemName << " ";
    fout << item.itemPrice * item.itemSoldQuantity << " ";
    fout << item.itemSatisfaction / item.itemSoldQuantity << '\n';
}


int checkValid(string& str) {
    if (str.length() > 1) return -1;
    return stoi(str);
}




int main() {
    string cmd, option; // integer overflow 피하려고 string 으로 받기

    vector<items> itemsList[1000]; // 물건 저장한 벡터 - 현재 최대 1000명 받을수 잇음
    vector<Account> AccountList; // 사람 정보 목록 저장한 벡터
    map<string, int> memberKey; // 사람 고유 번호 저장해놓은 맵


    int primaryKeyOfAccount = 0; // 사람의 고유 번호
    int primaryKeyOfProduct = 0; // 물건의 고유 번호
    bool isLogined = false; // 로그인 되어있는가
    int nowKey = 0; // 현재 로그인 된 사람의 고유키 (primaryKeyOfAccount)


    while (1) {
        fin >> cmd;
        int int_cmd = checkValid(cmd); // 유효한 명령인지 ?

        if (int_cmd == -1) { // 예외처리 ..
            fout << "cmd error\n";
            continue;
        }


        /////////////////// 6. 종료
        if (int_cmd == 6) break;

        ////////////////// 1. 가입 & 탈퇴
        if (int_cmd == 1) {
            ////////// 명령 유효성 확인
            fin >> option;
            int int_option = checkValid(option); // 유효한 옵션인지 확인

            if (int_option == -1) {
                fout << "option error";
                continue;
            }
            ////////////////////////

            if (int_option == 1) {
                string name, rrn, id, password;
                fin >> name >> rrn >> id >> password;

                if (memberKey.count(id)) {
                    fout << "이미 존재하거나 탈퇴한 아이디 입니다\n";
                    continue;
                }

                AccountList.push_back(Account(name, rrn, id, password));
                memberKey[id] = primaryKeyOfAccount++;
                AccountList[memberKey[id]].memSystemPermission = true;
                fout << "1.1. 회원 가입\n";
            }
            else if (int_option == 2) {
                if (!isLogined) {
                    fout << "로그인 안되어 있음\n";
                    continue;
                }
                fout << "1.2. 회원 탈퇴\n";
                AccountList[nowKey].memSystemPermission = false; // 탈퇴
                isLogined = false;
                fout << "탈퇴 완료.\n";

            }
        }


        ////////////////// 2. 로그인
        else if (int_cmd == 2) {
            ////////// 명령 유효성 확인
            fin >> option;
            int int_option = checkValid(option);

            if (int_option == -1) {
                fout << "option error";
                continue;
            }
            ////////////////////////////

            if (int_option == 1) {

                string id, password;
                fin >> id >> password;


                if (isLogined) {
                    fout << "이미 로그인되어 있습니다. 로그아웃 먼저 하세요\n";
                    continue;
                }

                if (!memberKey.count(id)) {
                    fout << "존재하지 않는 아이디 입니다\n";
                    continue;
                }

                nowKey = memberKey[id];

                //cout<<AccountList[Key].memSystemPermission<<'\n';
                if (!AccountList[nowKey].memSystemPermission) {
                    fout << "탈퇴된 아이디 입니다\n";\
                        continue;
                }

                if (password == AccountList[nowKey].memPW) {
                    fout << "2.2. 로그인\n";
                    isLogined = true;
                }
                else {
                    fout << "wrong password. Login failed.\n";
                }
            }
            else if (int_option == 2) {
                isLogined = false; // 로그인 해제
                nowKey = 0;
                fout << "2.2. 로그아웃\n";
            }
            else fout << "option error\n";

        }


        //////////////// 3 판매 의류 등록
        else if (int_cmd == 3) { // 3.1 ~ 3.3
            ////////// 명령 유효성 확인
            fin >> option;
            int int_option = checkValid(option);

            if (int_option == -1) {
                fout << "option error";
                continue;
            }
            ///////////////////////////

            if (!isLogined) {
                fout << "you are not logined.\n";
                continue;
            }

            if (int_option == 1) { // 판매 의류 등록
                string names, company; int price, quantity;
                fin >> names >> company >> price >> quantity;
                if (AccountList[nowKey].itemKey.count(names)) {
                    fout << "이미 같은 이름을 가진 아이템이 존재합니다. 다시입력 ..\n";
                }
                else {
                    fout << "3.1. 판매 의류 등록\n";
                    itemsList[nowKey].emplace_back(names, company, price, quantity);
                    AccountList[nowKey].itemKey[names] = primaryKeyOfProduct++;
                    fout << "상품 등록 완료.\n";
                }


            }
            else if (int_option == 2) { // 등록 상품 조회
                if (itemsList[nowKey].empty()) cout << "there is No item\n";
                fout << "3.2. 등록 상품 조회\n";
                for (auto& item : itemsList[nowKey]) {
                    showItemInform(item);
                    // cout<<item.itemName<<" "<<item.itemCompany<<" "<<" "<<item.itemPrice<<" "<<item.itemQuantity<<'\n';
                }
            }
            else if (int_option == 3) { // 판매 완료 상품 조회
                int cnt = 0;
                fout << "3.3. 판매 완료 상품 조회\n";
                for (auto& item : itemsList[nowKey]) {
                    if (item.itemSoldQuantity > 0) {
                        showSoldItemInform(item);
                        cnt++;
                    }
                }

                if (itemsList[nowKey].empty() || cnt < 1) cout << "No Sold item\n";
            }
            else fout << "option error\n";
        }




        ////////////// 5. 통계
        else if (int_cmd == 5) {
            fin >> option;
            int int_option = checkValid(option);

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
                for (auto& item : itemsList[nowKey]) {
                    if (item.itemSoldQuantity > 0) {
                        showSoldItemStatistic(item);
                        cnt++;
                    }
                }

                if (itemsList[nowKey].empty() || cnt < 1) fout << "No Sold item\n";
            }
            else fout << "option error\n";
        }

    }

}



/*

3 1 hat chulsoo 2000 1
3 1 test testcompnay 3000 10
3 1 test2 testcompany 1500 2
3 2
 */