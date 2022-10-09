//move all x to the end of the string
//"axxbdxcefxhix"
//"abdcefhixxxx"

// #include<iostream>
// using namespace std;
// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans=moveallx(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main(){
//     cout<<moveallx("axxbdxcefxhix")<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
string moveallx(string s){
    if(s.length()==0)
      return "";
      char ch=s[0];
      string ans=moveallx(s.substr(1));
      if(ch=='x'){
          return ans+ch;
      }
      return ch+ans;
}
int main(){
    cout<<moveallx("axxbdncefxhix")<<endl;
    return 0;
}