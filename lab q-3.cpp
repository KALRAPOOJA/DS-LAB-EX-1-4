#include<iostream>
using namespace std;
int main()
{
	int a[100],i,num,n,flag=0,b,j,first,last,mid;
	cout<<"enter no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		cout<<endl;
	}
	cout<<"enter number to be searched";
	cin>>num;
	first=0;
	last=n-1;
	mid=(first+last)/2;
		while (first <= last)
	{
		if(a[mid] < num)
		{
			first = mid + 1;

		}
		else if(a[mid] == num)
		{
			cout<<num<<" found at location "<<mid+1<<"\n";
			break;
		}
		else
		{
			 last = mid - 1;
		}
		mid = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<num<<" is not present in the list.";
	}
	
	
	
	
}
