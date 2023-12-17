#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
bool prime[MAX];

int main ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;

    int t;
    long long n,r;

    cin>>t;

    while (t--)
    {
    cin>>n;

        r = sqrt(n);

        if (!prime[r] && r*r == n)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }

    return 0;
}