// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"enter a number : ";
//	cin>>n;
//	if((n%5==0 || n%3==0)&& n%15!=0)
//	{
//		cout<<n<<" is divisible by 3 or 5 but not by 15";
//	}
//	else
//	{
//		cout<<n<<" is divisible by 15";
//	}
// } 




//********************method 2***************

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number : ";
	cin>>n;
	if(n%5==0 || n%3==0)
	{
		if(n%15!=0){
			cout<<n<<" is divisible by 5 or 3 and not by 15";
		}
		else
		{
			cout<<"not matching condition";
		}
	}
	else
	{
		cout<<"not matching condition";
	}
 } 












