#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T = 0;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a = 0, b = 0;
		cin >> a >> b;

		// Compute the ans.
		// Complete the below line.
		int ans = a % b;
		cout << ans << "\n" ;
	}

	return 0;
}
