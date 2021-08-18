// ATM, created by René (Richard) Selander 2021
#include <iostream>

using namespace std;

    // function: menu

void showMenu() {

    cout << "* * * * * MENU * * * * *" << endl;

    cout << "" << endl;

    cout << "     1 Check balance" << endl;

    cout << "" << endl;

    cout << "     2 Deposit" << endl;

    cout << "" << endl;

    cout << "     3 Withdraw" << endl;

    cout << "" << endl;

    cout << "     4 E X I T" << endl;

    cout << "" << endl;

    cout << "* * * * * * * * * * * *" << endl;

    cout << "" << endl;
    

}

int main()

{

    // check balance, deposit, withdraw, show menu

    // variabel

    int option;

    double balance = 540;

    // activate the function that shows the menu

    // start the loop

    do

    {
        
    showMenu();

    cout << "Option: ";

    cin >> option;

    if(!(option < 5 && option > 0)) {
        showMenu();
        //cout << "end";
       //break;
       return 0;
    }
        
    //system("cls");

    switch (option)
    {

    case 1: cout << "Balance is: " << balance << " Euro" << endl;

    cout << "" << endl;
    
        break;

    case 2: cout << "Deposit amount: ";

        double depositAmount;

        cin >> depositAmount;

        balance += depositAmount;

        break;

    case 3: cout << "Withdraw amount: ";

        double withdrawAmount;

        cin >> withdrawAmount;

        if (withdrawAmount<=balance)

            balance -= withdrawAmount;

        else

            cout << "Not enough money" << endl;

        break;        
    
    }

    }
    

    while (option!=4);    

    //system("pause>0");
    return 0;
}