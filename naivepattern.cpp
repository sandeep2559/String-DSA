#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string text,pattern;
	int i,j;
	getline(cin,text);
	getline(cin,pattern);
    int n=text.length();
    int m=pattern.length();
    for(i=0;i<=n-m;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if(pattern[j]!=text[i+j])
    		{
    			break;
			}
		}
		if(j==m)
		{
			cout<<i<<" ";
		}
	}
	return 0;

}
