#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t,i,j;
		
	    
	cin>>t;
	while(t--)
	{
	    long long a[200];
	    cin>>n;
	    a[0]=1;
	    long long size=1;
        for(i=2;i<=n;i++)
        {
            long long carry=0;
            for(j=0;j<size;j++)
            {
                long long mul=i*a[j]+carry;
                a[j]=mul%10;
                carry=mul/10;
            }
            // j++;
            while(carry>0)
            {
                a[j]=carry%10;
                carry/=10;
                size++;
                j++;
            }
        }
        for(i=size-1;i>=0;i--)
        cout<<a[i];
        cout<<endl;
	}
	return 0;
}
