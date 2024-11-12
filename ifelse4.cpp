# include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter amount";
    cin>>amount;
    if(amount<=100){
        cout<<"No discount/n";
        cout<<"you have to pay:"<<amount<<endl;
    }
    else if(amount>100 && amount<=500){
        cout<<"you are Eligible for 10% discount/n";
         cout<<"discount:"<<amount*(10.0/100)<<endl;
        cout<<"Final:"<<amount-amount*(10.0/100)<<endl;
    }
    else if(amount>500 && amount<=1000){
        cout<<"you are Eligible for 20% discount/n";
         cout<<"discount:"<<amount*(20.0/100)<<endl;
        cout<<"Final:"<<amount-amount*(20.0/100)<<endl;
        }

        else if(amount>1000){
        cout<<"you are Eligible for 30% discount/n";
         cout<<"discount:"<<amount*(30.0/100)<<endl;
        cout<<"Final:"<<amount-amount*(30.0/100)<<endl;
        }

        
}