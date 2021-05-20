#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1,num2; float result; char symb;
    cout<<"Select an Operation to Perform : "
    "\nAddition \t\t +"
    "\nSubtraction \t\t -"
    "\nMultiplication \t\t *"
    "\nDivision \t\t /"
    "\nPower a^2 \t\t p"
    "\nSquareroot \t\t s\n";
cin>>symb;
    switch (symb)
    {
    case '+':
        {   cout<<"\nEnter First Number "; cin>>num1; 
            cout<<"\nEnter Second Number "; cin>>num2;result=num1+num2;
            cout<<"The Sum of "<<num1<<" & "<<num2<< " is: "<<result;
        }    
        break;
    case '-':
        {   cout<<"\nEnter First Number "; cin>>num1; 
            cout<<"\nEnter Second Number "; cin>>num2;result=num1-num2;
            cout<<"The Difference of "<<num1<<" & "<<num2<< " is: "<<result;
        }    
        break;
    case '*':
        {   cout<<"\nEnter First Number "; cin>>num1; 
            cout<<"\nEnter Second Number "; cin>>num2;result=num1*num2;
            cout<<"The Product of "<<num1<<" & "<<num2<< " is: "<<result;
        }    
        break;
        case '/':
        {   cout<<"\nEnter First Number "; cin>>num1; 
            cout<<"\nEnter Second Number "; cin>>num2; result=((float)num1/num2);
            cout<<"The Quotient of "<<num1<<" & "<<num2<< " is: "<<result;
        }    
        break;
    case 'p': 
        {   cout<<"\nEnter Number: "; cin>>num1; cout<<"/n Enter it's power: \n"; cin>>num2;
            result = pow(num1,num2);
            cout<<num1<<" raised to the "<<num2<< "th power is: "<<result;
        }    
        break;
    case 's':
        {   cout<<"\nEnter Number: "; cin>>num1;
            abs(num1);
            cout<<"\nEnter Root "; cin>>num2; 
            result= pow(num1,1/num2);
            cout<<"The "<<num2<<"th root of"<<num1<< " is: "<<result;
        }    
        break;            
    default:
            cout<<"\nYou entered wrong symbol.";
    }
}