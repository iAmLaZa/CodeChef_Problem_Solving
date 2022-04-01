#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n,k;
	cin>>t;
	while(t--){
	   cin >>n>>k;
	   int max=0;
	   for(int i=2;i<=k;i++){
	      if(n%i>max)max=n%i; 
	   }
	   cout<<max<<"\n";
	}
	return 0;
}