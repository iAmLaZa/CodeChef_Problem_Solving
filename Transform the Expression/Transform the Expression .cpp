#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        stack<char>st ;
        cin>>s;
        
       for(int i=0;i<s.length();i++){
           if(s[i]=='(' || s[i]=='+'||s[i]=='*'|| s[i]=='^' ||s[i]=='/'||s[i]=='-'||s[i]==' %'){
               st.push(s[i]);
           } 
           else if(s[i]==')'){
               while(st.top()!='('){
               cout<<st.top();
               st.pop();
               }
               st.pop();
           }
           else{
               cout<<s[i];
           }
           
       }
       cout<<endl;
    }
    return 0;
}