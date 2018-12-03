#include<bits/stdc++.h>
using namespace std;
int main(){
	map<char , int > a;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int no_to_buy = 0;
	for(int i = 0; i < s.length();i++){
	        if(i%2==0)a[s[i]]+=1;
	        else{
	                if(a[tolower(s[i])]!=0)a[tolower(s[i])]-=1;
	                else{
	                        no_to_buy+=1;
	                    }
	            }
	    }
    cout<<no_to_buy;
}