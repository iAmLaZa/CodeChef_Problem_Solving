#include <stdio.h>

  void solve1(){
    int n;
    int t[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    int mi=t[0]+t[1];
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(mi>t[j]+t[i])mi=t[j]+t[i];
            
            }
        }printf("%d\n",mi);
}



int main()
{

    int t;

        scanf("%d",&t);
        while(t--){
        solve1();
    }

    return 0;
}
