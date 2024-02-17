
#include<bits/stdc++.h>

using namespace std;

void AllPossibleStrings(string s){
		    
    vector<string> ans;
    // this is total number of subsets possible
    int n = pow(2,s.length());
    cout<<n<<endl;
    // this is length of string
    int len = s.length();
    cout<<len<<endl;
    // temp to store string at each iteration
    string temp = "";
    
    for(int i=0; i<n; i++)
    {
        cout<<"first loop"<<endl;
        for(int j=0; j<len; j++)
        {
            cout<<"second lopp"<<endl;
            if(i & (1<<j))
            {
                temp += s[j];
            }
        }
        cout<<temp<<endl;
        temp = "";
    }
    
    // return ans;
    
}

int main()
{
    string str = "abc";
    // AllPossibleStrings(str);
    string temp = "";
    cout<<"c"<<endl;
    cout<<temp+"c"<<endl;
}