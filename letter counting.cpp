#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1;
	char s2;
	int c=0;
	bool flag=false;
	getline(cin,s1);
	cin>>s2;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]==s2)
		{
			c++;
			flag=true;
		}
	}
	if(flag==true)
	{
	cout<<c;
}
else
{
	cout<<"not found";
}
return 0;	
}
