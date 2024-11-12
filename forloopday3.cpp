#include<iostream>
using namespace std;
int main()
// {
//     for( i=1; i<=10; i++)
//     {
//         int n;
//         cout<<"enter a number"<<endl;
//         cin>>n;
//         int sqr=n*n;
//     }
// }
{
    int a=0;
    int b=1;
    for(int i=1;i<=10;i++)
    {
        a = a+b;
        b = a-b; 
        if(a==21)
        break;
        cout<<a<<"";

    }
}