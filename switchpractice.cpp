// #include <iostream>
// using namespace std;
// int main()
// {
//    int number;
//    cout<<"enter number";
//    cin>>number;
//    switch(number) 
//    {
//      case 1: cout<<"ajay";
//      break;

//      case 2:cout<<"Ranvijay";
//      break;

//       default:cout<<"invalid";
//       break;

       
//    }

 

// }





// #include <iostream>
// using namespace std;
// int main()
// {char gy;
//    int charp;
//    cout<<"enter 1,2,3,4 ";
//    cin>>charp;
//    switch(charp) 
//    {
//      case 1: cout<<"Ajay";
//      break;

//      case 2: cout<<"Ranvijay";
//      break;

//      case 3: cout<<"Digvijay";
//      break;

//      case 4: cout<<"Dhanraj";
//      break;

//       default:cout<<"invalid";
//       break;

       
//    }

 

// }



#include <iostream>
using namespace std;
int main()
{
   int n1,n2;
   char r;
   cout<<"enter 2 number : ";
   cin>>n1>>n2;
   cout<<"enter operation +,-,*,/ :";
   cin>>r;
   switch (r)
   {
   case '+': cout<<n1+n2;
      break;

      case '-': cout<<n1-n2;
      break;

      case '*': cout<<n1*n2;
      break;

      case '/': cout<<n1/n2;
      break;
   
   default: cout<<"invalid system";
      break;
   }
    
}

