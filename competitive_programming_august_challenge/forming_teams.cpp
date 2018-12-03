#include<bits/stdc++.h>
using namespace std;
char coloring_pallete[3] = {'a','b','c'};
vector< char >colors;
vector< vector<int > >graph;
char choose_color(char a,char b='d'){
	int index=0;
	for (int i = 0; i < 3; ++i)
	{
		if (coloring_pallete[i] != a && coloring_pallete[i]!=b){index=i;break;}

	}
	return coloring_pallete[index];
}
void dfs(int i){
	int len = graph[i].size();
	if (len==1){
		colors[i]=choose_color(colors[graph[i][0]],'d');
	}
	else{
		colors[i]=choose_color(colors[graph[i][0]],colors[graph[i][1]]);
	}
	for (int j = 0; j < len; ++j)
	{
		if(colors[graph[i][j]!='d'])dfs(j);
	}
}
void start_dfs(int i){
    cout<<'starting';
	colors[i]='a';
	int len = graph[i].size();
	for (int j = 0; j < len; ++j)
	{
		if(colors[graph[i][j]]=='d')dfs(j);
	}
}
int main(){
	int n,m,x,y,c=1;cin>>n>>m;
	graph.resize(n);
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;x-=1;y-=1;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		colors.push_back('d');
	}
	for (int i = 0; i < n; ++i)
	{
		if(colors[i]=='d'){
			start_dfs(i);
		}
	}
	for(int i=0;i<n;i++){cout<<colors[i];}
}
