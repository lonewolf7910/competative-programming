#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,temp,n1,n2,c=0;
	string s1,s2,temp1;
	cin>>s1>>s2;
	n1=s1.length();
	n2=s2.length();
	int A[n1],B[n2],ans[n1+1];
	if(n2>n1)
	{
		temp=n1;
		n1=n2;
		n2=temp;
		
		temp1=s1;
		s1=s2;
		s2=temp1;
		
	}
	
	    for(i=0;i<n1;i++)
		{
			A[i]=s1[i]-'0';
	    }
	    for(i=0;i<n2;i++)
		{
			B[i]=s2[i]-'0';
	    }

	for(i=0,j=n1-1;i<n1/2,j>=n1/2;i++,j--)
	{
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}  
		for(i=0,j=n2-1;i<n2/2,j>=n2/2;i++,j--)
	{
		temp=B[i];
		B[i]=B[j];
		B[j]=temp;
	} 
	
		for(i=0;i<n2;i++)
		{
			ans[i]=(A[i]+B[i]+c)%10;
			c=(A[i]+B[i]+c)/10;
		}
		for(i=n2;i<n1;i++)
		{
			ans[i]=(A[i]+c)%10;
			c=(A[i]+c)/10;
		}
		if(c!=0)
		{
		  ans[n1]=c;
		  for(i=n1;i>=0;i--)
		 {
			cout<<ans[i];
		 }
		}
		else
		{
		  for(i=n1-1;i>=0;i--)
		 {
			cout<<ans[i];
		 }
		}
}