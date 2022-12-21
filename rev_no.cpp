#include<iostream>
using namespace std;

int main()
{
	int number, rev_no=0, rem;
	
	cout<<"Enter a number =";
	cin>>number;
	
	while(number!=0)
	{
		rem = number % 10;
		rev_no = rev_no*10+rem;
		number = number/ 10;
	}
	
	cout<<"Reversed number= "<<rev_no;
	
}
