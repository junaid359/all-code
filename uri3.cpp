#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
   double A,B,MED;

     cin >> fixed >> setprecision(1);

   cin>>A>>B;

   MED=(A*3.5+B*7.5)/(3.5+7.5);

   cout<<"MEDIA = x"<<fixed<<setprecision(5)<<MED<<endl;


    return 0;
}


