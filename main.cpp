#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int opt,password ;
   double bal=1000;
   double deposit,withdraw;
   cout<<"welcome to kcb bank\n";
   cout<<"select option\n1.check balance\n2.withdraw\n3.Deposit\n4.exit"<<endl;
   cin>>opt;
   if(opt>=1&&opt<=4)
   {
       cout<<"enter your password"<<endl;
       cin>>password;
       if(password==2000)
       {
          switch(opt)
          {
          case 1:
            {
                cout<<"your balance is:"<<bal;
            }
          case 2:
            {
                cout<<"enter amount you wish to withdraw"<<endl;
                cin>>withdraw;
                if(bal>withdraw)
                {
                    bal=bal-withdraw;
                    cout<<"your new balance is: "<<bal<<endl;

                }
                else
                {
                    cout<<"insuffitient balance"<<endl;
                    cout<<"thank you for using the system"<<endl;
                }
           case 3:
           {
               cout<<"enter amount you wish to deposit"<<endl;
               cin>>deposit;
               bal=bal+deposit;
               cout<<"tour new balance is: "<<bal<<endl;
               cout<<"thank you for using the system"<<endl;
           }
           case 4:
            {
                cout<<"exit"<<endl;
            }

            }
          }
       }
          else
          {
              cout<<"invalid password"<<endl;
          }
       }

       else
       {
           cout<<"invalid option";
       }

   return 0;
}
