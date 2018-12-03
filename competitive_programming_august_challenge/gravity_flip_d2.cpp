#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;cin>>n;vector< int >cubes;
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>x;cubes.push_back(x);
	 }

	sort(cubes.begin(),cubes.end());
	vector<int >::iterator it = cubes.begin();
	for(;it!=cubes.end();it++){
		cout<<*it<<" ";
	}
}
