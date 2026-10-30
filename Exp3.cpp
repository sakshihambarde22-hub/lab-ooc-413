//Experiment No. 3
/*
Develop a single  banking system with classes for account 
savingaccount and checking account 
Implement features such as deposit,Withdrawal and account statement
*/
#include<iostream>
#include<string>
using namespace std;

class SavingAccount {
    protected:
    string acc_holder_name;
    int acc_no;
    double balance;
    double interest_rate;

    public:
    SavingAccount(string name, int no, double initial_balance, double rate)
    {  acc_holder_name = name;
        acc_no = no;
        balance = initial_balance;
   interest_rate=rate;
}

    void deposit(double amount) {
        if(amount>0) {
            balance+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else {
            cout<<"Invalid deposit amount!"<<endl;
        }
    }
    void withdraw(double amount) {
     if(amount<balance && amount>0){
        balance-=amount;
        cout<<"WithDarwed : "<<amount<<endl;
     }   
     else{
        cout<<"Invalide balance !!"<<endl;

     }
    }
    void interest() {
        double interest=balance*interest_rate;
        balance+=interest;
        cout<<"Interest : "<<interest<<endl;
    }
    void display() {
        cout<<"========== Saving Account =========="<<endl;
        cout<<"Account Number      : "<<acc_no<<endl;
        cout<<"Account Holder Name : "<<acc_holder_name<<endl;
        cout<<"Balannce            : "<<balance<<endl;
        cout<<"===================================="<<endl;

    }
};

class ChekingAccont {
    private:
     string acc_holder_name;
    int acc_no;
    double balance;
    double transaction_charges;

    public:
    ChekingAccont(string name, int no,double in_balance,float rate) {
    acc_holder_name = name;
        acc_no = no;
        balance = in_balance;
        transaction_charges =rate;
    }
    void deposite(double amount) {
        if(amount>0){
            balance+=amount;
            cout<<"Deposited : "<<amount<<endl;
        }
        else {
            cout<<"Invalide Amount !!"<<endl;
        
        }
    }
    void withdraw(double amount) {
        
        double total_deduction = amount + transaction_charges;
        
        if (amount > 0 && total_deduction <= balance) {
            balance -= total_deduction;
            cout << "Withdrawn: " << amount << " (Fee: " << transaction_charges << " applied)" << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds for transaction fee!" << endl;
        }
    }
    void display(){
        cout<<""<<endl;
        cout<<"========== Checking  Account =========="<<endl;
        cout<<"Acount Number       : "<<acc_no<<endl;
        cout<<"Account Holder Name : "<<acc_holder_name<<endl;
        cout<<"Balance             : "<<balance<<endl;
        cout<<"======================================="<<endl;

    }

};

int main() {
    SavingAccount s("Shreyash",26,5000,10);
    s.deposit(2000);
    s.withdraw(1000);
    s.interest();
    s.display();

    ChekingAccont c("Shreyash",26,5000,8);
    c.deposite(1000);
    c.withdraw(500);
    c.display();

    return 0;
}
