#include<bits/stdc++.h>
using namespace std;
double bank_bal=1000.000000,Withdraw_amt,dep_amt;
void balance(){
	
	cout<<"Your bank balance is: "<<bank_bal<<endl;
}
void withdraw(){
	cout<<"Please enter an amount to withdraw: ";
	cin>>Withdraw_amt;
	if(Withdraw_amt<=bank_bal){
		cout<<"Please collect your cash."<<endl;
		bank_bal=bank_bal-Withdraw_amt;
		cout<<"Your available balance is "<<bank_bal<<endl;
	}
	else{
		cout<<"No enough amount in your account to withdraw!!"<<endl;
	}
}
void deposit(){
	cout<<"Please enter the amount to deposit: ";
	cin>>dep_amt;
	cout<<"\nThank you for depositing, your new balance is: ";
	bank_bal=bank_bal+dep_amt;
	cout<<bank_bal<<endl;
}

int main(){
int pin,choice,choice_num2=1;
cout<<"********Welcome to HURRAY bank********"<<endl;
cout<<"Enter your pin please:";
cin>>pin;
while(choice_num2==1){

cout<<"\n\nEnter any option to be served!"<< endl;
cout<<"1. Balance Enquiry"<< endl;
cout<<"2. Cash Withdraw"<< endl;
cout<<"3. Deposit Cash"<< endl;
cout<<"4. Exit"<< endl;
cout<<"Enter your choice: ";
cin>>choice;
switch(choice){
	case 1:
	       balance();
	       break;
	case 2:
	       withdraw();
	       break;
	case 3:
	       deposit();
	       break;
	case 4:
	       cout<<"Thank you for banking with us, have a nice day!"<<endl;
	       exit(0);
	       break;
	default:
	     cout<<"Please choose an option from the above mentioned categories!!"<<endl;
}
cout<<"Do you want to perform another transaction?"<<endl;
cout<<"Press 1 to proceed and 2 to exit"<<endl;
cin>>choice_num2;
}

cout<<"Thank you for banking with us, have a nice day!"<<endl;
return 0;
}

