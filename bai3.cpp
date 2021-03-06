#include<iostream>
using namespace std;
#define oo 1000004

int main()
{
    int a, n, m, res = 1;
    cin >> a >> n >> m;
    for(int i = 1; i <= n; i++) res = res * a % m;
    cout << res;
}
