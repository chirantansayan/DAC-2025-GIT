#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int n1,n2;
	cout<<"Sum of num1 and num2: "<<sum(10,15)<<endl;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	cout<<"Sum of num1 and num2 :"<<sum(n1,n2)<<endl;
	return 0;
}
