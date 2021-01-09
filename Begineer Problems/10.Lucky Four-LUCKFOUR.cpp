#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); // optimizes the input/output function (helpful to overcome time complexity in some cases of CP
	cin.tie(NULL);
	
	int t;
	cin >> t ;
	
	while(t--)
	{
	    int num = 0;
	    cin >> num;
	    int four = 0;
	    int temp = num;
	    while(temp != 0)
	    {
	        int rem = temp % 10;
	        if(rem == 4)
	        {
	            four++;
	        }
	        temp /=10;
	    }
	    cout << four << "\n";
	}
	return 0;
}
