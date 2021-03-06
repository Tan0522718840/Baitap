#include<iostream>
using namespace std;
#define oo 1000004

int n, x, a[oo];
int main()
{
    cin >> n >> x;
    for(int i = 1; i <= n ;i++) cin >> a[i];

    int L = 1, R = n;
    while(L <= R)
    {
        int mid = (L + R)/2;
        if(a[mid] == x) {cout << "YES"; return 0;}
        if(a[mid] > x) R = mid - 1;
        else L = mid + 1;
    }
    cout << "NO";
}
