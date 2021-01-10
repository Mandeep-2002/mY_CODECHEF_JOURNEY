#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t ;
    
    while(t--)
    {
        int x = 0;
        cin >> x;
        int arr[10];
        int temp = x;
        int rem = 0;
        while(temp != 0)
        {
           rem = (rem*10) + (temp%10);
           temp /= 10;
        }
        cout << rem << "\n";
    }
    return 0;
}
