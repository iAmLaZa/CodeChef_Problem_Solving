#include<bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
     if (y == 0)
  	    return x;
     else
        return gcd(y, x % y);
}

int main()
{
    long long n,m,x,y,k,p;


        scanf("%lld",&n);
    
        while(n--)
        {

            scanf("%lld%lld",&x,&y);

          
            k=gcd(x,y);
            p=(x*y)/k;

            printf("%lld %lld\n",k,p);
        }
    
}