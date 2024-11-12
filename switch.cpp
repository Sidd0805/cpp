// switch:----- 

// whenever we know the number of possible 
// inputs ,--->switch case
// (because -->switch is faster then if else )


// range---->if else ladder.
// syntax:

// //{'a','b','c','d'}
// switch (char/int){
//     case 1 : //body
//                break;
//     case 2 : //body
//                break;
//      case 3 : //body
//                break;
//      case 4 : //body
//                break;

//       default : optional        
// }




// Q-write a programe to create calculator which perform simple airthmetic operations.



#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    char choice;
    cout<<"enter 2 number:";
    cin>>n1>>n2;
    cout<<"enter any operation +,-,*,/,%:";
    cin>>choice;
    switch(choice)
    {
        case'+':cout<<"Add:"<<n1+n2;
                   break;
        case'-':cout<<"sub:"<<n1-n2;
                   break;
         case'*':cout<<"product:"<<n1*n2;
                   break;
         case'/':cout<<"division:"<<n1/(float)n2;
                   break;

        default:cout<<"invalid input";
        break;

    }



}
