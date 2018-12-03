/*urveys all the cities
that are using this recycling method. From these data he wishes to determine the city whose allocation
scheme (if imposed on the rest of the country) would cause the least impact, that is would cause the
smallest number of changes in the allocations of the other cities. Note that the sizes of the cities is not
an issue, after all this is a democracy with the slogan “One City, One Vote”.
Write a program that will read in a series of allocations of wastes to bins and determine which city’s
allocation scheme should be chosen. Note that there will always be a clear winner.

Input will consist of a series of blocks. Each block will consist of a series of lines and each line will
contain a series of allocations in the form shown in the example. There may be up to 100 cities in a
block. Each block will be terminated by a line starting with ‘
e
’. The entire file will be terminated by
a line consisting of a single ‘
#
Output will consist of a series of lines, one for each block in the input. Each line will consist of the
number of the city that should be adopted as a national example

Sample Input
r/P,o/G,y/S,g/A,b/N
r/G,o/P,y/S,g/A,b/N
r/P,y/S,o/G,g/N,b/A
r/P,o/S,y/A,g/G,b/N
e
r/G,o/P,y/S,g/A,b/N
r/P,y/S,o/G,g/N,b/A
r/P,o/S,y/A,g/G,b/N
r/P,o/G,y/S,g/A,b/N
ecclesiastical
#
Sample Output
1
4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	map< int, map<char, char > > city_with_bin;
	map<int, char > charmap;
	charmap[0]= 'r';
	charmap[1] = 'y';
	charmap[2] = 'o';
	charmap[3]= 'g';
	charmap[4]= 'b';
	string s;
	int city_nos = 0;
	while(getline(cin,s)){
	    if (s[0] != 'e' && s[0]!='#'){
                int len = s.length();
		        
		    for(int i = 0;i<len;i+=4){
		            city_with_bin[city_nos][s[i]]=s[i+2];
		            
		            }
		            city_nos+=1;	        
	            }
	    if(s[0] == 'e'){
	            if(city_with_bin.size() < 1)cout<<"Not Possible\n";
	            map<int, int > mapped;
	            //process city_with_bin_here and then output and then clear the variables
	            for (int i = 0; i < city_nos; ++i)
	            {
	            	for (int j = 0; i < city_nos; ++i)
	            	{	if(i == j)continue;
	            		for (int k = 0; k < 5; ++k)
	            		{
	            			if(city_with_bin[i][charmap[k]]==city_with_bin[j][charmap[k]])continue;
	            			mapped[i]+=1;
	            		}
	            	}
	            }
	            int mini_city = 0;
	            int mini = mapped[0];
	            for(auto it = mapped.begin();it!=mapped.end();it++){if(it->second < mini){mini_city = it->first;mini = it->second;}}
	            cout<<mini_city+1<<endl;
	            city_nos = 0;
	            city_with_bin.clear();
	        }
	    if(s[0]=='#')break;
	}
	
}