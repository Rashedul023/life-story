#include <iostream>

using namespace std;
int m=0;


class bank {

private:
    int Age;
    static int Ac;
    float Bal=0;
    string Name;

public:
   void Set(  int age, string name)
    {
         Age=age; Name=name;
         Ac++;
         m++;
    };
    void SetBal(float bal)
    {
        Bal= bal;
    };

    /*void setAc(int ac)
    {
        Ac=ac;
    };*/
    void get()
    {
        cout<<"Congrats Your account number is: "<<Ac+999<<endl;
        cout<<"Name: "<<Name<<endl;
         cout<<"Age: "<<Age<<endl;
          cout<<"Balance: "<<Bal<<endl;

    };

    void getBal()
    {
        cout<<" Your Balance is: "<<Bal<<endl;
    }

    void inMoney()

    {
        int n;
        cout<<"Enter amount: "<<endl;
        cin>>n;
        Bal=Bal+n;
        cout<<"Successfully Diposited"<<endl;
        cout<<"New balance is: "<<Bal<<endl;
    };

    void cashIn()
    {
        int n;
        cout<<"Enter amount: "<<endl;
        cin>>n;
        if(Bal>=n)
        {
            Bal=Bal-n;
            cout<<"Successfully Withdrawed"<<endl;
        }
        else
        {
            cout<<"You do not have sufficient money"<<endl;
        }
         cout<<"Your balance is: "<<Bal<<endl;
    };

    void deletea ()
    {

      Name= "Deleted";
      Age= 00;
      Bal=0;

      cout<<"Your account has been deleted"<<endl;
    };

};

int bank:: Ac;

int main()
{
    bank person[100];

    float bal=0;
    string name;



   while(1){
    cout << "************ Main Menu ************" << endl;
    cout<<"\t1.Open New Accaunt" <<endl;
    cout<<"\t2.Close Old Accaunt" <<endl;
    cout<<"\t3.Deposit Money" <<endl;
    cout<<"\t4.Withdraw Money" <<endl;
    cout<<"\t5.Check Balance" <<endl;
    cout<<"\t6.Exit" <<endl;
    int age,x;
    cin>>x;

    if(x==1)
    {cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your age: "<<endl;
        cin>>age;
        //cout<<m;

        person[m].Set(age,name);
        //person.SetBal(bal);
       // person.setAc(ac);
        person[m-1].get();



    }

    else  if(x==2)
    {

          int num;
        cout<<"Enter your Account Number: ";
        cin>>num;
        person[num-1000].deletea();
    }
   else if(x==3)
    {
        int num;
        cout<<"Enter your Account Number: ";
        cin>>num;
        person[num-1000].inMoney();
    }


   else if(x==4)
    {
         int num;
        cout<<"Enter your Account Number: ";
        cin>>num;
        person[num-1000].cashIn();
    }

   else if(x==5)
    {

          int num;
        cout<<"Enter your Account Number: ";
        cin>>num;
        person[num-1000].getBal();
    }

   else if(x==6)
    {
        return 0;
    }

   else
   {
       cout<<"Invalid Press"<<endl;
   }
    }

}

