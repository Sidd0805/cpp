// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=0;
//     int b=1;
//     int ctr=0;

//     while(true)
//     {
        
//         a=a+b;
//         b=a-b;

//         if(a==21)
//         continue;

//         cout<<a<<endl;
//         ctr++;

//         if(ctr==10)
//         break;
//     }
// }




 // <--------while nesting-------->


 #include <iostream>
 using namespace std;
 int main()
 {
    int a=0;
    int b=1;
    int ctr=0;
    int counter=0;
    while(ctr<10)
    {
        while(a<=100)
        {
            a=a+b;
            b=a-b;
            cout<<a<<endl;
            counter++;
            cout<<counter<<endl;


        }
        
    }
 }



