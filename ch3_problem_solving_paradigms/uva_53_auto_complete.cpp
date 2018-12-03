#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >>s;
	int n; cin >> n;
	vector< string > words;
	for(int i = 0; i < n;i++){
	        string a; cin>>a;words.push_back(a);
	    }
	sort(words.begin(),words.end());
	string k  = s;
	for(int i = 0 ; i < words.size(); i++){
	        int count = 0;
	        for(int j = 0 ; j< s.length();j++){
	                if(s[j] == words[i][j])count++;
	                else break;
	            }
	        if(count == s.length()){k = words[i];break;}
	    }
	cout<<k;
}