#include <iostream>
using namespace std;
int main()
{
    string name;
    string acc_typ;
    double total_b = 1000;
    int acc_no;
    int op;
    float withdraw;
    float deposit;
    cout << "Enter your name here : " << endl;
    cin >> name;
    cout << "Enter account type here : " << endl;
    cin >> acc_typ;
    cout << "Enter account number here : " << endl;
    cin >> acc_no;
    while (true)
    {
        cout << "\n*****choose from the options below******" << endl;
        cout << "Select 1 for displaying the details." << endl;
        cout << "Select 2 for cash withdraw." << endl;
        cout << "Select 3 for cash deposit." << endl;
        cout << "Select 4 for total balace." << endl;
        cout << "Select 5 for exit." << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Your name is " << name << endl;
            cout << "Your account type is " << acc_typ << endl;
            cout << "Your account number is " << acc_no << endl;
            break;
        case 2:
            cout << "Enter the amount you have to withdraw";
            cin >> withdraw;
            total_b = total_b - withdraw;
            cout << "Now your current balance is " << total_b << endl;

            break;
        case 3:
            cout << "Enter the amount you have to deposit" << endl;
            cin >> deposit;
            total_b = total_b + deposit;
            cout << "Now your current balance is " << total_b << endl;
            break;
        case 4:
            cout << "Your total balance is " << total_b << endl;
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "Invalid operation" << endl;
        }
    }
    return 0;
}
