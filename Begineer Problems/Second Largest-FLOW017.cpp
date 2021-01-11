#include <iostream>

using namespace std;

void second_largest(int a, int b, int c)
{
    if(b>a && b<c)
    {
        cout << b << endl;
    }
    else if(a>c && a<b)
    {
        cout << a << endl;
    }
    else if(c>b && c<a)
    {
        cout << c << endl;
    }
    
    else if(b>c && b<a)
    {
        cout << b << endl;
    }
    else if(a>b && a<c)
    {
        cout << a << endl;
    }
    else if(c>a && c<b)
    {
        cout << c << endl;
    }
}
int main(void) {
    int t;
    cin >> t;
    while(t--)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c ;
        
        second_largest(a,b,c);
    }
	// your code goes here
	return 0;
}
