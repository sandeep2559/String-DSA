#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int i,j,c=0;
	getline(cin,s);
	for(i=0;i<s.length();i++)
	{
		for(j=i+1;j<s.length();j++)
		{
			if(s[i]==s[j])
			{
				break;
			}
		}
		if(j!=s.length())
		{
		   cout<<i<<endl;
		   break;
		}
	}
	if(i==s.length())
	{
		cout<<"not found";
	}
	
	
	
	return 0;
}
