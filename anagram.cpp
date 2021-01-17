#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int count[256]={0},c=0,i;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1.length()!=s2.length())
	{
		cout<<"not an Anagram ";
	}
	else
	{
		for( i=0;i<s1.length();i++)
		{
			count[s1[i]]++;
			count[s2[i]]--;
		}
		for(int i=0;i<256;i++)
		{
			if(count[i]!=0)
			{
				c++;
			}
		}
		if(c>0)
		{
			cout<<"not anagram";
		}
		else
		{
			cout<<"Anagram";
		}
		
	}
	return 0;
}
