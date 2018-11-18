#include <iostream>
#include<stdio.h>
using namespace std;

int pascal(int,int);
int main()
{
	int num,i,j;
	cout<<"\nEnter the no. of rows required: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		cout.width(num-i+1);
		for(j=1;j<=i;j++)
		{
			cout<<pascal(i,j);
			cout<<" ";

		}
		cout<<"\n";
	}
}

int pascal(int row,int column)
{
	if(column==0)
		return 0;
	else if(row==1&&column==1)
		return 1;
	else if(column>row)
		return 0;
	else
		return (pascal(row-1,column-1)+pascal(row-1,column));
}


