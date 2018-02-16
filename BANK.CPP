#include<iostream.h>
#include<conio.h>
class Bank
{int acno;
public:
float balance(){}
void getdata(){cout<<"enter the account no.";
	       cin>>accno;    }
void showdata(){cout<<"the entered details are:"<<endl<<accno;}
};
class Withdraw: public Bank
{int withdraw;
public:
void getdata()
cin>>withdraw;}
void showdata(){Bank::showdata(); cout<<withdraw;}
float balance()
{k=withdraw-10000;
cout<<"available funds :"<<k;
return(k);}
};
class Deposit:public Bank
{int deposit;
public:
void getdata()
cin>>deposit;
void showdata(){Bank::showdata(); cout<<deposit;}
float balance(float k)
{t=balance();
 bal=t+k;
cout<<"available funds :"<<bal;
return(bal)
}
class Loan:public Bank
{int p,n;
float r;
public::
void getdata()
{cout<<endl<<"Enter the amount and time required to repay";
cin>>p>>n>>r;}
void showdata(){Bank::showdata(); cout<<p<<n<<r;
}
float balance( )
{float k=p*n*r/100;
cout<<"You will have to pay :"<<k<<"rs";
return(k)
 };
void main()
Withdraw w;
Deposit d;
Loan l; float k;
char b;
cout<<endl<<"w=withdraw"endl<<"d=deposit"<<endl<<"l=loan"<<endl<<"enter ur choice:";
cin>>b;
switch(b)
case 'w':cout<<"enter the amount u wnat to deposit";
cin>>withdraw;
k=w.Bank::balance();
cout<<"the balance is:"<<k;
case 'd':cout<<"enter the amount you wanna deposit:";
cin>>deposit;
k=d.balance();
cout<<"the new amount"<<k;
case 'l':cout<<"enter the p,n,r";
cin>>p>>n>>r;
k=l.balance();
cout<<"the simple interest is"<<k;
}

cout<<"enter the amount you wanna deposit";
