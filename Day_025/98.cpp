#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main(){ string s1,s2; getline(cin,s1); getline(cin,s2); unordered_set<char> st(s1.begin(),s1.end()),done; for(char c:s2){ if(st.count(c)&&!done.count(c)){ cout<<c<<" "; done.insert(c);} } return 0; }