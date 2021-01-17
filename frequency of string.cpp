#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int arr[26]={0};
	string s;
	gets(s);
	for(int i=0;i<=s.length();i++)
	{
		arr[int(s[i])-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]>0)
		{
			cout<<char(i+97)<<" "<<arr[i]<<endl;
		}
	}
	return 0;
}
