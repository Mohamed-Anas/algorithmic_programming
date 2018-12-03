#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string::iterator it = s.begin();
    it+=1;
    s.erase(it,it+2);
    cout<<*it;
}
