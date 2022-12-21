#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num,rem,sum;
	cout<<"Enter number = ";
	cin>>num;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
	}
	
	if(num==sum)
	{
		cout<<"it is armstrong number";
	}
	else{
		cout<<"It is not armstrong";
	}
	
	return 0;
}
