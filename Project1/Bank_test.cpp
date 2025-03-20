#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

class person_data {
public:
    std::string id;
    std::string cusName;
    int balance;
};

class BankApp {
    char input;
    bool flag = true;
    int index = 0;
    person_data* datas[3];
    int size = sizeof(datas) / sizeof(datas[0]);

    void withdraw() {
        std::string findid;
        int inputmoney;
        person_data* select_Data = nullptr;

        std::cout << "[출금]" << std::endl;
        std::cout << "계좌 ID: ";
        std::cin >> findid;

        for (int i = 0; i < index; i++) {
            if (findid == datas[i]->id)
            {
                select_Data = datas[i];
                break;
            }
        }
        if (select_Data == nullptr) {
            system("cls");
            std::cout << "존재하지 않는 계좌입니다." << std::endl;
            system("pause");
            return;
        }

        std::cout << "출금액: ";
        std::cin >> inputmoney;

        if (select_Data->balance - inputmoney < 0) {
            system("cls");
            std::cout << "잔액이 부족합니다." << std::endl;
            system("pause");
        }
        else {
            select_Data->balance -= inputmoney;

            system("cls");
            std::cout << "출금완료" << std::endl;
            system("pause");
        }
    }

    void deposit() {
        std::string findid;
        int inputmoney;
        person_data* select_Data = nullptr;

        std::cout << "[입금]" << std::endl;
        std::cout << "ID 목록" << std::endl;
        for (int i = 0; i < index; i++) {
            std::cout << datas[i]->id << std::endl;
        }

        std::cout << std::endl;
        std::cout << "계좌 ID: ";
        std::cin >> findid;

        for (int i = 0; i < index; i++) {
            if (findid == datas[i]->id)
            {
                select_Data = datas[i];
                break;
            }
        }
        if (select_Data == nullptr) {
            system("cls");
            std::cout << "존재하지 않는 계좌입니다." << std::endl;
            system("pause");
            return;
        }

        std::cout << "입금액: ";
        std::cin >> inputmoney;
        select_Data->balance += inputmoney;

        system("cls");
        std::cout << "입금완료" << std::endl;
        system("pause");
    }

    void c_account() {
        std::cout << "[계좌개설]" << std::endl;

        if (index >= size) {
            system("cls");
            std::cout << "더 이상 계좌를 추가할 수 없습니다." << std::endl;
            system("pause");
        }
        else {
            person_data* new_Cust = new person_data;
            std::cout << "계좌 ID: ";
            std::cin >> new_Cust->id;
            for (int i = 0; i < index; i++) {
                if (new_Cust->id == datas[i]->id) {
                    system("cls");
                    std::cout << "이미 존재하는 계좌 ID입니다" << std::endl;
                    system("pause");
                    return;
                }
            }
            std::cout << "이름: ";
            std::cin >> new_Cust->cusName;
            std::cout << "입금액: ";
            std::cin >> new_Cust->balance;


            datas[index] = new_Cust;
            index++;

            system("cls");
            std::cout << "계좌 개설 완료" << std::endl;
            system("pause");

        }
    }

    void printF() {
        for (int i = 0; i < index; i++) {
            std::cout << "[" << i + 1 << "]" << std::endl;
            std::cout << "계좌: " << datas[i]->id << std::endl;
            std::cout << "이름: " << datas[i]->cusName << std::endl;
            std::cout << "잔액: " << datas[i]->balance << std::endl;
            std::cout << std::endl;
        }
        system("pause");
    }


    void menu() {
        std::cout << "┌──────────Menu──────────┐" << std::endl;
        std::cout << "│ 1. 계좌 개설           │" << std::endl;
        std::cout << "│ 2. 입금                │" << std::endl;
        std::cout << "│ 3. 출금                │" << std::endl;
        std::cout << "│ 4. 계좌정보 전체 출력  │" << std::endl;
        std::cout << "│ 5. 종료                │" << std::endl;
        std::cout << "└────────────────────────┘" << std::endl;
        std::cin >> input;
        std::cout << input;
    }

public:
    ~BankApp() {
        for (int i = 0; i < index; i++) {
            delete datas[i];
        }
    }

    void run() {
        while (flag) {
            system("cls");
            menu();
            system("cls");
            switch (input) {
            case '1':
                c_account();
                break;
            case '2':
                deposit();
                break;
            case '3':
                withdraw();
                break;
            case '4':
                printF();
                break;
            case '5':
                flag = false;
                break;
            default:
                std::cout << "잘못된 입력입니다." << std::endl;
                while (getchar() != '\n') {}
                system("pause");
                break;
            }
        }
    }
};

int main() {
    BankApp app;
    app.run();
    return 0;
}