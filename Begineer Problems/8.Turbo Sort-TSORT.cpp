#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int A[t];
    for (int i = 0; i<t;i++)
    {
        scanf("%d", &A[i]);
    }
    
    sort(A, A+t);
    
    for (int i = 0; i<t;i++)
    {
        printf("%d\n", A[i]);
    }
	// your code goes here
	return 0;
}
