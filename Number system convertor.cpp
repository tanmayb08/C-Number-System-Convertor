#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

class number
{
	long long n;
	int dec=0,i=0,rem,temp;
	public:
		void BtoD()
		{
			cout<<"Enter a binary number : ";
  			cin>>n;
  			cout << n << " in binary = ";
			i=0;
  			while (n!=0) 
			{
    			rem = n % 10;
    			n /= 10;
    			dec += rem * pow(2, i);
    			++i;
  			}
  			cout<< dec << " in decimal";
		}
		
		void BtoO()
		{
			int octalNumber = 0, decimalNumber = 0;
			cout << "Enter a binary number: ";
    		cin >> n;
			cout << n << " in binary = ";
			i = 0;
   			while(n != 0)
   			{
       			decimalNumber += (n%10) * pow(2,i);
        		++i;
        		n/=10;
    		}
			i = 1;
   			while (decimalNumber != 0)
    		{
    		    octalNumber += (decimalNumber % 8) * i;
    		    decimalNumber /= 8;
    		    i *= 10;
    		}
    		cout << octalNumber << " in octal.";
		}
		
		void DtoB()
		{
  		    int rem, pro= 1;
  		    cout<<"Enter decimal number : ";
			cin >> temp;
			n=0;
  			while (temp != 0)
			{
    			rem = temp % 2;
    			n = n + (rem * pro);
    			temp = temp / 2;
    			pro *= 10;
  			}
 			 cout << "\nThe number in the binary form is: " << n ;
  		}
};

int main() 
{
	number s;
  	int ch;
  	long long n;
while(1)
{
  	cout<<endl<<"*****Number System Convertor*****"<<endl;
  	cout<<"1.Binary to Decimal."<<endl;
  	cout<<"2.Binary to Octal."<<endl;
  	cout<<"3.Decimal to Binary."<<endl;
  	cout<<"4.Exit."<<endl;

  	cout<<endl<<"Enter Your Choice : ";
  	cin>>ch;
  	system("CLS");
  	switch(ch)
  	{
  		case 1:
  			s.BtoD();
  			break;
  		case 2:
  			s.BtoO();
  			break;
  		case 3:
  			s.DtoB();
  			break;
  		case 4:
  			exit(0);
  			break;
  		default:
  			cout<<"INVALID INPUT";
  			break;
	}
  }
  return 0;
}