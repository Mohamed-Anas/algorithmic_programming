#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;cin>>n>>a>>b;
    int i = 0;
    if(b>0){
            int k = a;
            k = (k+b)%n;
            if(k!=0)cout<< k;
            else cout<< n;
            return 0 ;
        }
    if(b<0){
            int c = b;
            while(c<0){
                    c+=n;
                }
            int k = a;
            k = (k+c)%n;
            if(k!=0)cout<<k;
            else cout<<n;
            return 0;
        }
    else cout<<a;
    return 0;
    }