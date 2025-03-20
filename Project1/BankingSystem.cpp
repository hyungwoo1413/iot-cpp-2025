#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdlib> // system("cls")를 위한 라이브러리

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
void ClearScreen(void);

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account
{
private:
    int accID;
    int balance;
    char* cusName;

public:
    Account(int ID, int money, char* name)
        : accID(ID), balance(money)
    {
        cusName = new char[strlen(name) + 1];
        strcpy(cusName, name);
    }

    int GetAccID() { return accID; }

    void Deposit(int money)
    {
        balance += money;
    }

    int Withdraw(int money)
    {
        if (balance < money)
            return 0;

        balance -= money;
        return money;
    }

    void ShowAccInfo()
    {
        cout << "계좌ID: " << accID << endl;
        cout << "이름: " << cusName << endl;
        cout << "잔액: " << balance << endl;
    }

    ~Account()
    {
        delete[] cusName;
    }
};

Account* accArr[100];
int accNum = 0;

int main(void)
{
    int choice;

    while (1)
    {
        ClearScreen();
        ShowMenu();
        cout << "선택: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE:
            ShowAllAccInfo();
            break;
        case EXIT:
            return 0;
        default:
            cout << "잘못된 입력입니다." << endl;
        }
    }

    for (int i = 0; i < accNum; i++)
        delete accArr[i];
    return 0;
}

void ShowMenu(void)
{
    std::cout << "┌──────────Menu──────────┐" << std::endl;
    std::cout << "│ 1. 계좌 개설           │" << std::endl;
    std::cout << "│ 2. 입금                │" << std::endl;
    std::cout << "│ 3. 출금                │" << std::endl;
    std::cout << "│ 4. 계좌정보 전체 출력  │" << std::endl;
    std::cout << "│ 5. 종료                │" << std::endl;
    std::cout << "└────────────────────────┘" << std::endl;
}

void MakeAccount(void)
{
    ClearScreen();
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "[계좌 개설]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "이름: "; cin >> name;
    cout << "입금액: "; cin >> balance;
    cout << endl;

    accArr[accNum++] = new Account(id, balance, name);

    cout << "계좌 개설 완료" << endl;
    system("pause");
}

void DepositMoney(void)
{
    ClearScreen();
    int money;
    int id;
    cout << "[입금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "입금액: "; cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            accArr[i]->Deposit(money);
            cout << "입금 완료" << endl;
            system("pause");
            return;
        }
    }
    cout << "유효하지 않은 ID입니다." << endl;
    system("pause");
}

void WithdrawMoney(void)
{
    ClearScreen();
    int money;
    int id;
    cout << "[출금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "출금액: "; cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) == 0)
            {
                cout << "잔액 부족" << endl;
                system("pause");
                return;
            }

            cout << "출금 완료" << endl;
            system("pause");
            return;
        }
    }
    cout << "유효하지 않은 ID입니다." << endl;
    system("pause");
}

void ShowAllAccInfo(void)
{
    ClearScreen();
    if (accNum == 0)
    {
        cout << "등록된 계좌가 없습니다." << endl;
        system("pause");
        return;
    }

    for (int i = 0; i < accNum; i++)
    {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
    system("pause");
}

// 화면을 지우는 함수 (Windows 전용)
void ClearScreen(void)
{
    system("cls");
}
