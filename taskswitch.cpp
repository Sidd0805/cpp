#include <iostream>
using namespace std;
int main()
{
   int time;
   cout<<"enter number between 1 to 12 : ";
   cin>>time;
   switch (time/12)
   {
   case 0:
    cout<<time<<"Am";
      break;

      case 1: cout<<time<<"Pm";
      break;
   
   default: cout<<time<<"invalid system";
      break;
   }
    
}

