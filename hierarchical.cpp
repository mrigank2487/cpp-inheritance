#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class account
{
    int accno,d,w;
    char cusname[278];
public:
    int bal;

    void get_detail(int Accno,char Cusname[278])
    {
       accno =Accno;
       strcpy(cusname,Cusname);

    }
    void get_balance()
    {
        while(true)
        {
        cout<<" ENTER THE AMOUNT OF FIRST DEPOSIT\n";
        cin>>bal;
        if(bal<1000)
        {
         cout<<"\nPLEASE ENTER MINIMUM RS.1000\n";
        }
        else
            break;
        }

    }
    void withdrawal()
    { while(true)
        {
          cout<<"ENTER THE AMOUNT YOU WANT TO WITHDRAW\n";
          cin>>w;
          if(w>bal)
          {
            cout<<"THE AMOUNT EXCEEDS YOUR CURRENT BALANCE\n";
          }
          else
          {
            bal=bal-w;
            break;
          }

        }
    }
    void deposit()
    {
    cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT\n";
      cin>>d;
      bal=bal+d;
    }
    void min_bal()
    {
      if(bal<1000)
      {
           cout<<"\nBALANCE IS LESSER THAN RS.1000 A FINE OF RS.200 IMPOSED\n";
           bal-=200;
      }

    }
    void display()
    {
        cout<<"\nYOUR CURRENT BALANCE:RS."<<bal<<"\n";

    }
    void closeacc()
    {
        cout<<"\nNAME:"<<cusname;
        cout<<"\nACCOUNT NUMBER:"<<accno;
        cout<<"\nBALANCE:"<<bal<<"\n~~~~~~~CLOSING ACCOUNT~~~~~~~~";

    }
};
class saving_account:public account
{
    int intr;

public:
    void compound_intr(int i)
    {
        int in=(bal*0.05*i);
        cout<<"THE INTEREST IS:RS."<<in;
        bal+=in;

    }
};
class current_account:public account
{ public:
  void  cheque()
  {    int n;
       cout<<"ENTER NUMBER OF LEAVES\n";
       cin>>n;
       bal-=n;

  }
};
int main()
{
    int choice,choice1,i=0;char a,Cusname[278];int Accno;

    cout<<" ENTER YOUR NAME\n";
    cin.getline(Cusname,45);
    cout<<" ENTER YOUR ACCOUNT NUMBER\n";
    cin>>Accno;
    cout<<"\n ENTER 1 TO START A CURRENT ACCOUNT \n 2 TO START A SAVINGS ACCOUNT\n";
    cin>>choice;

    if(choice==1)
    {
        current_account c;
        c.get_detail(Accno,Cusname);
        c.get_balance();
        do
        {
        cout<<"     ENTER\n 1 FOR DEPOSIT\n 2 FOR WITHDRAWAL\n 3 FOR CHEQUE BOOK\n";
        cin>>choice1;
        switch(choice1)
        {
        case 1:
            c.deposit();
            break;
        case 2:
            c.withdrawal();
            break;
        case 3:
            c.cheque();
            break;
        }
        c.min_bal();c.display();
         cout<<"ENTER 'Y' TO CONTINUE\n";
         cin>>a;

        }while(a=='Y');
      c.closeacc();
    }

    if(choice==2)
    {
        saving_account s;
       s.get_detail(Accno,Cusname);
        s.get_balance();
        do
        {
            i++;
        cout<<"     ENTER\n 1 FOR DEPOSIT\n 2 FOR WITHDRAWAL\n 3 FOR COMPOUND INTEREST\n";
        cin>>choice1;
        switch(choice1)
        {
        case 1:
            s.deposit();
            break;
        case 2:
            s.withdrawal();
            break;
        case 3:
            s.compound_intr(i);
            i=0;
            break;
        }
        s.display();
        s.min_bal();
         cout<<"ENTER 'Y' TO CONTINUE\n";
         cin>>a;
        }while(a=='Y');
        s.closeacc();
    }
}
