#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	stack<char>s;
	bool flag=true;
	string s1;
	getline(cin,s1);
	for(int i=0;i<s1.length();i++)
	{
		s.push(s1[i]);

    }
    for(int i=0;i<s1.length();i++)
    {
    	if(s.top()==s1[i])
    	{
    		s.pop();
		}
		else
		{
			flag=false;
			break;
		}
	}
	cout<<flag;
return 0;
}
