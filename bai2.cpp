#include<iostream>
using namespace std;
#define oo 1000004

int P[oo];
int main()
{
    int n;
    cin >> n;
    P[1]=1;
    for(int i = 1; i <= n; i++)
    {
        if(P[i])continue;
        cout << i<< ' ';
        int j=i*i;
        while(j<=n)
        {
            P[j]=1;
            j+=i;
        }
    }

}
