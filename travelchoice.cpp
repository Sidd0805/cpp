#include<iostream>
using namespace std;
int main()
{
    int choice ,choice1;
    cout<<"enter your destination 1. international 2. Domestic";
    cin>>choice;
    switch(choice)
    {
    
        case 1: cout<<"enter your destination 1.us 2.uk";
        cin>>choice1;
        switch (choice1)
        {
        case 1: cout<<"us prize is 150rs";
            break;
             case 2: cout<<"uk prize is 100rs";
        break;
        default: cout<<"ii";
        break;
        }
        break;
    case 2: cout<<"enter your destination 1.nainital 2.shimla";
        cin>>choice1;
        switch (choice1)
        {
        case 1: cout<<"nainital prize is 150rs";
            break;
            case 2: cout<<"shimla prize is 100rs";
        break;
        default: cout<<"ii";
        break;
        }
        
        break;
    
    default:cout<<"invalid input";
    break;
}
}