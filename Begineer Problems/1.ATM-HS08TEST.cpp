#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    float b, ans;
    cin >> a >> b ;
    
    if(a<b)
    {
        if(a % 5 == 0 && (a + 0.50) <= b)
        {
            ans = b - a - 0.50;
            cout << fixed << setprecision(2) << ans;
        }
        else
        {
            cout << fixed << setprecision(2) << b ;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << b ;
    }
    return 0;
}