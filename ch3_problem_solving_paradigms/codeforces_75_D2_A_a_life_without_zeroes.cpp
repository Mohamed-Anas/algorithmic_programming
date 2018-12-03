#include<bits/stdc++.h>
using namespace std;
int remove_zeroes(int n){
	string s = to_string(n);
	string b;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]!='0')b+=s[i];
	}
	return stoi(b);
}
int main(){
	int a,b,c;
	cin >> a>>b;
	c = a + b;
	if(remove_zeroes(a)+remove_zeroes(b) == remove_zeroes(c) && a + b == c)cout<<"YES";
	else cout<<"NO";

}