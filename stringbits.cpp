

#include<iostream>
#include<string.h> 
using namespace std;
int main()
{
int j,k,i,n,m,len;
char cha[20];
cout<<"enter lower text"<<endl;
cin>>cha;
 len=strlen(cha); //length of string
  
for(i=0;i<len;i++) 
  { 
     n=(26+int(cha[i])-122);//print position of alphabet
     cout<<n<<" ";
    
    for(j=1;j<=n;j++)
	    {
	    	if(j%2==1)
	    	  {
	    	  	for(k=0;k<n;k++)
	    	  	  {
			  	  cout<<"1";
			      }
			      cout<<endl;
			      break;
		      }
		    else 		   
			  {
			  	for(k=0;k<n;k++)
	    	  	  {
				  cout<<"0";
			      }
			      cout<<endl;
			      break;
			  }			
		 } 
  }
}

