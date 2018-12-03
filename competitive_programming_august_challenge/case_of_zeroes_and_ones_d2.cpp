#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;cin>>n;string s;cin>>s;
	string::iterator it = s.begin();

		for (;it!=s.end();)
		{   if(it==s.end()-1)break;
			if(*it!=*(it+1)){

				s.erase(it,it+2);
                if(it!=s.begin())it-=1;
				if(it==s.end()-1)break;
                if(s.empty()){cout<<'0';return 0;}



			}
			else it+=1;


		}
	cout<<s.length();
	return 0;

}
