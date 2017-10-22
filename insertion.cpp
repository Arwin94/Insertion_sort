#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[20];
	int n;
	cout<<" enter no of elements ";
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    cout<<"elements are "<<endl;
   	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}

	  cout<<endl;      
          	for(int i=1;i<n;i++)
			{
				 cout<<"pass "<<i;
	    		 int key;
	     		key=a[i];
				int j=i-1;
				while(j>=0 && key<a[j]) 
				{
					a[j+1]=a[j];
					j=j-1;
     			}
				a[j+1]=key;
		   		for(int i=0;i<n;i++)
      	  		 {
	        	 	cout<<" "<<a[i]<<"  ";
	       		 }
	       		 cout<<endl;
			}
	
return(0);
}
