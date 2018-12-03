#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector< pair<int, int> >pos_trees;
	vector<pair<int, int > > neg_trees;
	int n_negatives = 0;int n_positives = 0;
	for(int i = 0 ; i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a < 0){n_negatives+=1;neg_trees.push_back(make_pair(-a,b));}
            if(a > 0){n_positives+=1;pos_trees.push_back(make_pair(a,b));}
            
	}
	sort(pos_trees.begin(),pos_trees.end());
	sort(neg_trees.begin(),neg_trees.end());
	int sum = 0;
	if(n_negatives > n_positives){
	        for(auto it =  neg_trees.begin();it!=neg_trees.begin()+n_positives+1;it++){
	                sum+=it->second;
	            }
	       for(auto it =  pos_trees.begin();it!=pos_trees.end();it++){
	                sum+=it->second;
	            }
	            cout<<sum;return 0 ;
	    }
	  else  if(n_positives > n_negatives){
	        for(auto it =  pos_trees.begin();it!=pos_trees.begin()+n_negatives+1;it++){
	                sum+=it->second;
	            }
	       for(auto it =  neg_trees.begin();it!=neg_trees.end();it++){
	                sum+=it->second;
	            }
	            cout<<sum;return 0 ;
	    }
	    else{
	        for(auto it =  neg_trees.begin();it!=neg_trees.end();it++){
	                sum+=it->second;
	            }
	       for(auto it = pos_trees.begin();it!=pos_trees.end();it++){
	                sum+=it->second;
	            }
	            cout<<sum;return 0 ;
	    }
}