#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // minor optimization
    
    int t;
    cin >> t;
    while(t--)
    {
        int N = 0; // No. of cakes the chef has baked
        cin >> N ;
        int A = 0; // Size of a packate
        
        A = (N/2) + 1;
        
        cout << A << endl;
        
    }
	// your code goes here
	return 0;
}
