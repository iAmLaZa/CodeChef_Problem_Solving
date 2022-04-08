#include <stdio.h>

int main(void) {
    int t,sa;
    scanf("%d",&t);
    float ts;
    while(t--){
        ts=0;
        scanf("%d",&sa);
        if(sa<1500)
            printf("%.2f\n",ts=sa+sa*0.1+sa*0.9);
        else
            printf("%.2f\n",ts=sa+500+sa*0.98);
    }
	return 0;
}