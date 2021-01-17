#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	stack<char>s;
	string s1;
	getline(cin,s1);
	for(int i=s1.length()-1;i>=0;i--)
	{
		if(s1[i]!=' ')
		{
			s.push(s1[i]);
		}
		else if(s1[i]==' ')
		{
			while(s.empty()==false)
			{
				cout<<s.top();
				s.pop();
				
			}
			cout<<' ';
		}
	}
	
	while(s.empty()==false)
			{
				cout<<s.top();
				s.pop();
				
			}
	
	return 0;
}


