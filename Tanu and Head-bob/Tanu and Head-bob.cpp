#include <bits/stdc++.h> 
using namespace std;


  string solve(){
        
        string s;
        int n;
        cin>>n>>s;
        
       for(int i=0;i<n;i++){
           if(s[i]=='Y') return ("NOT INDIAN");
           else if(s[i]=='I') return ("INDIAN");
               
              
           }
           return ("NOT SURE");
  }
int main(){
    int t;
    cin>>t;
    while(t--){
      cout <<solve()<<"\n";
           
    }
    return 0;
}
