#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	while(t--)
	{
	    int n = 0;
	    int sum = 0, rem = 0;
	    cin >> n;
	    while(n != 0)
	    {
	        rem = n % 10;
	        sum += rem;
	        n /= 10;
	    }
	    cout << sum << "\n";
	}
	// your code goes here
	return 0;
}
