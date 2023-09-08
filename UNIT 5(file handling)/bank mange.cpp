#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

int password,accounts=1,acc,i,flag=0;   // Global declaration of varibles
class Account_info  // Parent class
{
	public :
		int account_no,account_password;
		float account_balance;
		char acc_name[20];
		
		void get_account_info()
		{		
				cout<<"\nEnter Your Name :";
				cin>>acc_name;
				cout<<"\nEnter New Password :";
				cin>>account_password;
				cout<<"\nEnter Your Bank Balance :";
				cin>>account_balance;
				cout<<"\n\nYour Card Added Successfully !!!";		
		}

		void display_account_info()
		{
		    cout<<"\nEnter Your Password :";
		    cin>>password;
		    if( account_password == password)
		    {
		    	account_no=acc;
				cout<<"\n-----------------------------------------";
				cout<<"\n-      * ACCOUNT DETAILS *      -";
				cout<<"\n-                                       -";
				cout<<"\n-\tAccount Holder Name :"<<acc_name<<"\t-";
				cout<<"\n-\tAccount Number  : "<<account_no<<"\t\t-";
				cout<<"\n-\tAccount Balance : "<<account_balance<<" RS\t-";
				cout<<"\n-----------------------------------------";
			}
			else
			{
				cout<<"\nEnter Correct Password !!!";
				cout<<"\nOR \nAccount Does Not Exits !!!";
			}
		}
		void change_password()
		{
			cout<<"\nEnter Your Old  Password for Confirmation:";
    		cin>>password;
	    	if( account_password==password)
	    	{
	    		cout<<"\nEnter New Password :";
	    		cin>>account_password;
	    		cout<<"\n\nYour Password Changed Successfully !!!";
			}
			else
			{
				cout<<"\nYour Old Password is Wrong !!!";
			}
		}	
};

class Deposite_amount : public Account_info
{
	protected :
		int deposite_amount;
	public :
		void get_deposite_amount()
		{
			cout<<"\nEnter Your Password :";
    		cin>>password;
	    	if( (account_password)==password)
			{
				cout<<"\nEnter Amount For Deposite :";
				cin>>deposite_amount;
				account_balance=(account_balance+deposite_amount);
				cout<<"\nYour Account  Balance After Deposite : "<<account_balance<<" RS";
				cout<<"\n\nYour Amount Deposited Successfully !!!";
    		}
			else
			{
				cout<<"\nEnter Correct Password !!!";
			}
	    }			
};

class Withdraw : public Deposite_amount
{
	protected :
		int withdraw_amount;
	public :	
		void get_withdraw_amount()
		{	
		    cout<<"\nEnter Your Password :";
		    cin>>password;
	       	if( account_password==password )
		    {
		    	cout<<"\nEnter Amount For Withdraw :";
		    	cin>>withdraw_amount;
		    	if(account_balance>=withdraw_amount)
		    	{
		    		account_balance=(account_balance-withdraw_amount);
					cout<<"\n\nYour Amount Withdrawn Successfully !!!";
					cout<<"\nYour Account  Balance After Withdraw : "<<account_balance<<" RS";
				}
				else
				{
					cout<<"\nYour Account Balance is not Sufficient !!!";
				}
			}
			else
			{
				cout<<"\nEnter Correct Password !!!";
			}
    	}	
		
		void withdraw_1000()
		{
			cout<<"\nEnter Your Password :";
		    cin>>password;
	       	if( account_password==password )
		    {
		    	if(account_balance>= 1000)
		    	{
		    		account_balance=(account_balance-1000);
					cout<<"\n\nYour Amount Withdrawn Successfully !!!";
					cout<<"\nYour Account  Balance After Withdraw : "<<account_balance<<" RS";		    		
				}
				else
				{
					cout<<"\nYour Account Balance is not Sufficient !!!";
				}
			}		
		}			
};

class Balance : public Withdraw
{
	public :
        Balance()
		{
			// Default values
			strcpy(acc_name,"   ");
			account_no=000;
			account_password=00;
			account_balance=00;
			
		}
		
		void check_balance()
		{
			cout<<"\nEnter Your Password :";
			cin>>password;
			if(account_password==password)
			{
				cout<<"\nYour Account Balance : "<<account_balance;
			}
			else
			{
				cout<<"\nEnter correct Pasaword !!!";
			}
	    }
};

class Start
{
	public:
		void start()
        {
            system("color 0B");
            cout<<"\n\n\n\n\n\n\n\n\n\n";
            cout<<"\t\t\t\t\t\t--------------------------------\n";
            cout<<"\t\t\t\t\t\t|                               |\n";
            cout<<"\t\t\t\t\t\t--------------------------------\n";
            cout<<"\t\t\t\t\t\t    ATM MACHINE SIMULATION\n";
            cout<<"\t\t\t\t\t\t--------------------------------\n";
            cout<<"\t\t\t\t\t\t|                               |\n";
            cout<<"\t\t\t\t\t\t--------------------------------\n\n";

            cout<<"\v\t\t\t\t\tLoading..";
            char x=219;
            int i;
            for(i=0;i<35;i++)
            {
                cout<<x;
                if(i<10)
                {
                    Sleep(300);
                }
                if(i>=10 && i<20)
                {
                    Sleep(150);
                }
                if(i>=10)
                {
                    Sleep(25);
                }
                
            }
            system("cls");
        }	
};
class Menu:public Start
{
	public:
		int start()
		{
			cout<<"\n    \t\t *  WELCOME TO ATM *\n";
	    	cout<<"\n\n=========================================================================";
	    	cout<<"\n=========================================================================";
	   		cout<<"\n\n\n***";
	   		cout<<"\n***";
			cout<<"\n**                                                                       **";	
	    	cout<<"\n**   1 ->  Add New ATM Card Details \t Change Password         <- 5    **";		
			cout<<"\n**   2 ->  Check Account Details    \t Check Account Balance   <- 6    **";
			cout<<"\n**   3 ->  Deposite Amount          \t Withdraw                <- 7    **";
			cout<<"\n**   4 ->  Fast cash 1000 RS        \t Exit                    <- 8    **";
			cout<<"\n**                                                                       **";
			cout<<"\n***";
			cout<<"\n***\n";
			cout<<"\nEnter your choice: ";
			int a;
			cin>>a;
			system("cls");
			return a;	
		}	
};

int main()
{
	Start s1;
    Menu m1;
    s1.start();
    m1.start();
	Balance atm[50];
    // Defaul Account
    strcpy(atm[1].acc_name,"Gandharv");
	atm[1].account_no=1;
	atm[1].account_password=1234;
	atm[1].account_balance=10000;
   	
    int ch=0;
    ch=m1.start();
	do
	{
		switch(ch)
		{
			case 1 :  //Add new card

				cout<<"\nEnter Your New Account Number :";
				cin>>acc;
				flag=0;
				for(i=0;i<50;i++)
				{       
 					if(acc==atm[i].account_no)
					{  
 						flag=1;    
						break;
 			    	}
            	}
		        if(flag==1)
				{
					cout<<"\n!!!    ACCOUNT NUMBER ALREADY EXISTS   !!!";
					cout<<"\n!!! PLEASE ENTER UNIQUE ACCOUNT NUMBER !!!";
    			}
				else
				{
					atm[acc].account_no=acc;
					atm[acc].get_account_info();
				}
			   	break;
				
				
		    case 2 :  //account details
		    	cout<<"\nEnter Your Account Number :";
		        cin>>acc;
		        atm[acc].display_account_info();
		     	break;
		     	
	        case 3 : // deposit
	        	cout<<"\nEnter Your Account Number :";
		    	cin>>acc;
		    	atm[acc].get_deposite_amount();
		    	break;
		    
			case 4 : // withdraw 1000 rs
				cout<<"\nEnter Your Account Number :";
		  		cin>>acc;
		  		atm[acc].withdraw_1000();
				break;
		    
			case 5 : //change password
				cout<<"\nEnter Your Account Number :";
		  		cin>>acc;
		  		atm[acc].change_password();
				break;
			
			case 6 : // check account balance 
				cout<<"\nEnter Your Account Number :";
			    cin>>acc;
				atm[acc].check_balance();
				break;
			
			case 7 : //	withdraw	
				cout<<"\nEnter Your Account Number :";
		  		cin>>acc;
				atm[acc].get_withdraw_amount();	
				break;
				
			case 8 : //Exit
			   	cout<<"\nTHANKS FOR USING OUR ATM !!!";
				break;	
			
		    default :
				cout<<"\Enter Valid Choice !!!";
			    break;	    	
		}
		ch=m1.start();
    }while(ch!=8);

	return 0;
}
