#include <iostream>
#include<string.h>

using namespace std;

#define MAX_Transaction 100
int total_balance=0;
int total_expense=0;

int balance_count=0;
int expense_count=0;



struct Transaction{

string reason;
float amount;


};


Transaction balance[MAX_Transaction];
Transaction expense[MAX_Transaction];




void add_balance(){



cout << endl;


cout << "================Balance ADD================" << endl;


cout << "Enter Income Source:";
cin.ignore();
getline(cin,balance[balance_count].reason);

cout << "Enter Amount:";
cin>> balance[balance_count].amount;

total_balance+=balance[balance_count].amount;
balance_count++;


cout << "Balance add Successfully!" << endl;

}



void add_expense(){



cout << endl;

cout << "================Expense ADD================" << endl;


cout << "Enter Expense Reason:";
cin.ignore();
getline(cin,expense[expense_count].reason);

cout << "Enter Amount:";
cin >> expense[expense_count].amount;


total_expense+=expense[expense_count].amount;
expense_count++;



cout << "Expense add Successfully" << endl;

}


void net_balance(){


 float Net_balace=total_balance-total_expense;


 cout << endl;
cout << "Net Balance:" << Net_balace << endl;

}



int main(){


cout << "=========================================================================" << endl;
cout << "                               Expence Tracker" << endl;
cout << "=========================================================================" << endl;

int choice;

while(true){

        cout << "\n===== INCOME & EXPENSE TRACKER =====" << endl;
        cout << "1. Add Balance " << endl;
        cout << "2. Add Expense " << endl;
        cout << "3. Net Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        if(choice == 1){
            add_balance();
        }
        else if(choice == 2){
            add_expense();
        }
        else if(choice == 3){
            net_balance();
        }
        else if(choice == 4){
            break;
        }
        else{
            cout << "Wrong input";
        }

}

cout <<  endl << "Thanks For using our software." <<endl;




return 0;

}
