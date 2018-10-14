#include<iostream>
using namespace std;
int main()
{
	int a[100],i,num,n,flag=0,b;
	cout<<"enter no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number to be searched";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			b=i;
		}
		
	}
	if(flag==1)
	{
		cout<<"number found at "<<b<<" position";
	}
	else
	{
		cout<<"number not found";
	}
	
}
