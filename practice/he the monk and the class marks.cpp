
#include <bits/stdc++.h>
using namespace std;


int main() 
{
	
	int t;
	cin>>t;

	map<int,multiset<string>> mp;

	while(t--)
	{
		string s;
		int n;

		cin>>s>>n;

		mp[-1*n].insert(s);
		
	}

	/*
	auto it = --mp.end();

	while(true)
	{
		auto &st = (*it).second;
		auto mar = (*it).first;

		for(auto val : st)
		{
			cout<<val<<" "<<mar<<endl;
		}

		if(it == mp.begin())
		{
			break;
		}
		
		--it;
	}

	*/

	// we can minimise the above code by storing the negative value of the marks, so that they are arranged in desired order

	for(auto val : mp)
	{
		auto st = val.second;

		for(auto stVal : st)
		{
			cout<<stVal<<" "<<-1*(val.first)<<endl;
		}
	}

}

