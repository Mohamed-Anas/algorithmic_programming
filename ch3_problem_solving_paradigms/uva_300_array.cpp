#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >>n;
    vector< int > nos;
    int n_of_neg = 0;
    for(int i = 0 ;i < n;i++){
            int a ; cin>>a;
            if(a<0)n_of_neg+=1;
            if(a!=0)nos.push_back(a);
        }
    sort(nos.begin(),nos.end());
    cout<<'1'<<' '<<nos[0]<<'\n';
    int i;
    if(n_of_neg%2 == 0){i =2;cout<<n-3<<' ';}
    else {i = 1;cout<<n-2<<' ';}
    for(; i < n-1;i++)
    {cout<<nos[i]<<' ';}
    if(n_of_neg % 2 !=0)
    cout<<endl<<'1'<<' '<<'0';
    else cout<<endl<<'2'<<' '<<nos[1]<<' '<<'0';
}