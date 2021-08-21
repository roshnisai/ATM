#include <iostream>
using namespace std;

void showMenu(){
    cout<<"**********MENU**********" << endl;
    cout<<"1. Check balance" << endl;
    cout<<"2. Deposit" << endl;
    cout<<"3. Withdraw" << endl;
    cout<<"4.Exit " << endl;
    cout<<"************************" << endl;
}

int main()
{
   //check balance, deposit, withdraw, show menu
   int option;
   double balance=500;

   do{
   showMenu();
   cout<<"option: ";
   cin>> option;
   system("cls");
   switch(option){
       case 1: cout<< "balance is"<< balance <<" $ "<< endl; break;
       case 2: cout<< "deposit amount:";
       double depositAmount;
       cin>> depositAmount;
       balance += depositAmount;
       break;
      case 3: cout<< "withdraw amount:";
       double withdrawAmount;
       cin>> withdrawAmount;
       if (withdrawAmount <= balance)
       balance -= withdrawAmount;
       else
       cout<<"Not enough money"<< endl;
       break;
   }
 } while (option!=4);

system("pause>0");
}
