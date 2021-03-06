#include<iostream>
using namespace std;
#define oo 10004

int H[oo],V[oo];
int DCC[2 * oo], DCP[2 * oo];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(H[a]) {cout << "yes"; return 0;}
        if(V[b]) {cout << "yes"; return 0;}
        if(DCC[ a - b + 10000]) {cout << "yes"; return 0;}
        if(DCP[ a + b - 1]) {cout << "yes"; return 0;}
        H[a]++, V[b]++;
        DCC[a - b + 10000]++, DCP[a + b - 1]++;
    }
    cout << "no";
}
