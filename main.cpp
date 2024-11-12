// comment
/* multi line comment
DEFINE:To enhance readibility of code,programmer use the comment,
basically whenever comment is encounter while compilation complier simpl ignore the content written afterwards
*/
// /1)header file add
// #include<iostream>
// # pre processor directive
// include directory/folder(path)
// <header-file>standard library content
// "header-file"user defined content
// <iostream>madatory*/

#include<iostream>
using namespace std;
    // namespace:it is a scope where we defind our cpp component (identifier),
    // application:to avoid conflicts.

int main()
{
    // global space:before and after main()
    //here we define global variables,global function  classes,structure ,etc.
    // main():our programme execution begins from main
    // to create a block in C++ we used {}.
    // in main we write n numbers statements terminated by cemicolon.
    // parameter:in any programming language we may pass some input to function in the form of parameters,this is a optional part.
    // return 0;
    // our main() return 0,if  there is no runtime error while execution of code,
    // retrun 0 is a special message for operating system (success message).
    // cout=council output
    // cout+output and cin=input
    // objects,cout---> ostream class cin--->istream class 
    // cout<<"welcome students" <<insertion operator 
    // cin>>"DATA" >> extraction operator 
    // "DATA" string  
    // cout<<"welcome students"; // statement
    // cout<<'c';// character 
    // cout<<"world"<<endl;
    // Variables; In programming to process data, we have to store them and variables are the storage area in memory where our data recistes we can change this data with time that why it is called variables.
    // datatype; it is a representation of different type of data.
    // primitive:int(4 byte)(integer number,without fraction),float(4 byte )(real number )(6-7 digit),double(8 byte)(real number)(14-15 digit precision),char(8 byte)(real number)'a','b','c',boolean(1 byte)(true 1/false 0) C++ =non-zero=true 0=false,void(1 byte)(nothing(function)) non-primitive derived:pointer,array,function,reference/user-defined:class,structure,union,enumerator
    // 
    // int number1 = 1000.1000; // decleration of variable 
    // int number2 = 1000.1000;
    // int number3 = 1000.1000;
    // cout<<number1+number2+number3;

    // float number1 = 1000.1000; // decleration of variable 
    // float number2 = 1000.1000;
    // float number3 = 1000.1000;
    // cout<<number1+number2+number3;

    // double number1 = 1000.1000; // decleration of variable 
    // double number2 = 1000.1000;
    // double number3 = 1000.1000;
    // cout<<number1+number2+number3;
   
    // int number;
    // string name;
    // cout<<"Enter a number:";
    // cin>>number;
    // cout<<number;
    // cout<<endl;
    // cout<<"Enter a name:";
    // cin>>name;
    // cout<<name;

    // cascading of insertion operators

    // int number1,number2; 
    // cout<<"Enter number 1 and Enter number 2: ";
    // cin>>number1>>number2;
    // cout<<"Multiplication of "<<number1<<"and "<<number2<<" is "<<number1*number2;
    
    // Tokens;the smallest unit of code which has some meaning for compiler is called token.
    // int number1,number2; 5 tokens 
    // 1.Keywords(Reserved words)(break,if,else,int etc.)(Total 97 keywords) 2.Identifier(to identifier yhe component programme unickly we use identifier)(5 naming rules: 1.First character alphabet+underscore. 2.Rest of character alphabet+underscore+digits(0-9). 3.no void space is allowed in between. 4.no keywords is allowed to use as a identifier.5.the name of iden should according to the contest of programme) 3.Literal(literals are the data(object) part of our programme, int num =90; // 90 integeral literal , string name="rahul" // string literal , cout<<3.1415*rad*rad; , numeric literal(int,char,float,double),string literal more than or equals to 1 character. 'A"=65 or 'a'=97 ASCII(American standard ) value '0'=48)  4.Constants (pie=3.1415) 5.Delimiter(special symbol:limit set,interface (boundary) set, eg,{},[],<>) 6.Special-symbol(operation perform; 56+90 56,90 --->operands , +operators cout<<"welcome"; cout,"welcome" -->operands , << operators classified as uninary(increment(+1) prefix(++a),postfix(a++)/decrement(-1)) op,binary op,ternary op) 
    
    // const double pi=3.1415;
    // cout<<pi;


//     #include <iostream>
//     using namespace std;

//     int main() {
//     int x = 10, y = 7, z = 3;

//     int result = ++x + --y + z;
    
//     cout << "x = " << x << ", y = " << y << ", z = " << z << ", result = " << result << endl;
//     return 0;
// }
// ----------------------------------------------------------------------------
//     #include <iostream>
//     using namespace std;

//     int main() {
//     int a = 5, b = 8;

//     int result1 = ++a + b;
//     b--;
//     int result2 = a + ++b;

//     cout << "a = " << a << ", b = " << b << endl;
//     cout << "result1 = " << result1 << ", result2 = " << result2 << endl;
//     return 0;
// }
// -----------------------------------
//     #include <iostream>
//     using namespace std;

//     int main() {
//     int p = 9, q = 6, r = 2;

//     p--;
//     int result = p + --q + r;
//     r++;
//     p++;
    
//     cout << "p = " << p << ", q = " << q << ", r = " << r << ", result = " << result << endl;
//     return 0;
// }
// ---------------------------------------------------------

//     #include <iostream>
//     using namespace std;

//     int main() {
//     int x = 12, y = 4;

//     int result1 = ++x - y;
//     y--;
//     int result2 = x + ++y;

//     cout << "x = " << x << ", y = " << y << endl;
//     cout << "result1 = " << result1 << ", result2 = " << result2 << endl;
//     return 0;
// }

    // input size vary (in any range)
    // output size fixed (denominator ) cyclic
    // comparision operators!
    // > ,<,>=,<=,==,!=
     
    
    
    // int number1,number2,number3;
    // cout<<"Enter 3 num:";
    // cin>>number1>>number2>>number3;

    // cout<<number1<<" is bigger then"<<number2<<"-->"<<(number1>number2)<<endl;
    // cout<<number2<<" is smaller then"<<number3<<"-->"<<(number1<number2)<<endl;
    // cout<<(90==90);
    // cout<<(90!=90);

    // single equal assignment operator
    // double equal equity operator

    // logical operator 
    // and(binary)(&&),or(binary)(||),not(unary)()

    // Bitwise operator:
    // To implement low level language with the help of cpp we have to use bitwise operator.
    //  It is more faster then any other operator
    // Data incription/description

    // Binary(0,1),Decimal(0-9),Hexa-decimal(0-9,A,B,C,D,E,F),Octal(0-7)
    
    // Conversion of binary to decimal and decimal to binary:
    // 1 byte-8 bit

    // bitwise and ----> & (ampersand)
    // bitwise or  ----> |(pipeline)(Vertical bar)
    // bitwise not ----> ~(tilde)(unary)
    // bitwise xor(exclusiveor) ----> ^(cap,carrot)
    // bitwise leftshift ----> <<
    // bitwise rightshift ----> >>
    
    // syntax: A ? B : C;  (?:) Ternary operator  
    // A ---> Boolean expression
    // True ---> Part B execute 
    // False ---> C execute 

    // Write a program to findout the minimum number between two number 
    
    // int n1,n2;
    // cout<<"Enter two numbers:";
    // cin>>n1>>n2;
    // n1>n2 ? cout<<n2<<"Is smaller": cout<<n1<<"Is smaller";
     
    // int n1,n2,n3;
    // cout<<"Enter three numbers:";
    // cin>>n1>>n2>>n3;
    // n1<n2 && n1<n3 ? cout<<n1<<"is smaller":
    // n2<n1 && n2<n3 ? cout<<n2<<"is smaller":cout<<n3<<"is smaller";
    
    // Write a program to determine wheather a number is even and odd number ?
    
    // int num;
    // cout<<"enter number:";
    // cin>>num;
    // num%2 == 0? cout<<"even" : cout<<"odd";

    // int num;
    // cout<<"enter number:";
    // cin>>num;
    // num%5 == 0? cout<<"Multiple of 5" : cout<<"Not Multiple of 5";

    // Write a prog to swapp with each other ?
    // int num1,num2;
    // cout<<"Enter two numbers:";
    // cin>>num1>>num2;
    // cout<<"before swapping num1:"<<num1<<"num2:"<<num2<<endl;
    // int temp=num1;
    // num1=num2;
    // num2=temp;
    // cout<<"after swapping num1:"<<num1<<"num2:"<<num2<<endl;
   
    // if-else(Single condition),
    // if-else(ladder)(Multiple condition),
    // if-else(Nesting)(Poly-Multiple condition),

    // Write a program to determine wheather a person is eligible to castecode or not on the basis of age and nationality ?

    // int age;
    // string nation,name;
    // cout<<"Enter your name:";
    // cin>>name;
    // cout<<"Enter your age:";
    // cin>>age;
    // cout<<"Type your nationality 'indian' or 'other':";
    // cin>>nation;
    // if(age>=18 && nation == "indian"){
    //     cout<<name<<",u r eligible to cast vote:";

    // }
    // else{
    //     cout<<name<<",u r not eligible to cast vote:";
    // }

    
    

    // double salary,bonus;
    // string name;
    // int year;
    // cout<<"enter your name:";
    // cin>>name;
    // cout<<"Enter year of service and salary:";
    // cin>>year>>salary;
    // if(year>5){
    //     bonus=salary=(5.0/100);
    // }
    // else{
    //     bonus=0;
    // }
    // cout<<"u got:"<<bonus<<"bonus"<<endl;
    // cout<<"Total Salary:"<<salary*bonus<<endl;

    
   


    

    return 0;
    // return,non-return 
}