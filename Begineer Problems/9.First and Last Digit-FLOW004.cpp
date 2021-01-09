#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(void) 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t = 0;
	cin >> t;
	
	while (t--)
	{
	    int x = 0;
	    cin >> x ;
	    int cnt = 0;
	    cnt = log10(x) + 1;
	    int arr[20];
	    int temp = x ;
	    int i = 0;
	    while(temp != 0)
	    {
	        int rem = temp % 10 ;
	        arr[i] = rem ;
	        i++;
	        temp /= 10;
	    }
	    
	    int sum = arr[0] + arr[cnt-1];
	    cout << sum << "\n" ;
	}
	return 0;
}
