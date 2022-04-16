#include <stdio.h>


    int solve1(int n,int m){
   
    if(n==1)return (m*(m+1)/2);
    else return solve1(n-1,m*(m+1)/2);
}



int main()
{

    int t;

        scanf("%d",&t);
        while(t--){
            int n,m;
            scanf("%d%d",&n,&m);
            printf("%d\n",solve1(n,m));
    }

    return 0;
}
