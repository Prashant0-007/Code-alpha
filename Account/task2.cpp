#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    string name;
    int accNo;
    float balance;
    vector<string> history;

    Account(string n, int no) {
        name = n;
        accNo = no;
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
        history.push_back("Deposited: " + to_string(amt));
    }

    void withdraw(float amt) {
        if (amt <= balance) {
            balance -= amt;
            history.push_back("Withdrawn: " + to_string(amt));
        } else {
            cout << "Insufficient balance\n";
        }
    }

    void showDetails() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: Rs " << balance << endl;
    }

    void showHistory() {
        cout << "\nTransaction History:\n";
        for (auto &t : history)
            cout << t << endl;
    }
};

int main() {
    Account acc("Prashant", 12345);
    acc.deposit(5000);
    acc.withdraw(2000);
    acc.showDetails();
    acc.showHistory();

    return 0;
}