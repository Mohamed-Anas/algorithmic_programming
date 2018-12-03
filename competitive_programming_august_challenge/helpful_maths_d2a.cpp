#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	int leng = s.length();
	vector< int >nos;
	for (int i = 0; i < leng; ++i)
	{   if(s[i]>=48 && s[i]<=57){
		int a = s[i]-48;nos.push_back(a);}
	}
	sort(nos.begin(),nos.end());
	vector<int >::iterator it = nos.begin();
	for(;it!=nos.end();it++){
        if(it!=nos.end()-1){
        cout<<*it<<'+';}
        else{cout<<*it;
        }
	}
}
