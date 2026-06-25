#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){ return a.length()<b.length(); }
int main(){ string line,w; getline(cin,line); stringstream ss(line); vector<string> words; while(ss>>w) words.push_back(w); sort(words.begin(),words.end(),cmp); for(string x:words) cout<<x<<endl; return 0; }