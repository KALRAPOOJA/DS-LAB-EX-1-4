#include<iostream>
using namespace std;
int main()
{
	int a[20],b[20],n,i,ch,pos,num;
	cout<<"enter no of elements";
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	cout<<"enter the choice 1 for inserting an element 2 for deleting an element 3 for finding the location of given element 4 for display";
	do
	{
	
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
	//insertion of an element:
		cout<<"enter position";
		cin>>pos;
		cout<<"enter number";
		cin>>num;
		for(i=n;i>pos-1;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=num;
		for(i=0;i<n+1;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		}
		break;
		case 2:
			{
				cout<<"enter the pos from where no is to be deleted";
				cin>>pos;
				for(i=pos-1;i<n;i++)
					{
						a[i]=a[i+1];
					}
				for(i=0;i<n;i++)
					{
						cout<<a[i];
					}
			}
			break;
			case 3:
				{
					int num1;
					cout<<"enter the number to be searched:";
					cin>>num1;
					for(i=0;i<n;i++)
						{
							if(a[i]==num1)
							{
								cout<<i<<endl;
								break;
							}
						}					
				}
				break;
				case 4:
					{
						for(i=0;i<n;i++)
						{
							cout<<a[i]<<" ";
						}
					}
					break;
	}cout<<"enter the choice again";
}while(ch!=0);
	
}
