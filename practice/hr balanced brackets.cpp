

#include<bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<char> sk;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            sk.push(s[i]);
        }
        else if(s[i]=='}' || s[i]==']' || s[i]==')')
        {
            if(sk.empty())
            {
                return "NO";
            }
            else
            {
                if(sk.top() == '{' && s[i]=='}' )
                {
                    sk.pop();
                }
                else if(sk.top() == '[' && s[i]==']')
                {
                    sk.pop();
                }
                else if(sk.top() == '(' && s[i]==')')
                {
                    sk.pop();
                }
                else
                {
                    return "NO";
                }
            }
        }
        else
        {
            return "NO";
        }      

    }
    

    if(sk.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}

// using other method

string bracketBalance(string s)
{
    unordered_map<char,int> mp;

    stack<int> stk;

    mp = {{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};

    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]] < 0)
        {
            stk.push(mp[s[i]]);
        }
        else
        {
            if(stk.empty())
            {
                return "NO";
            }
            else
            {
                if(stk.top() + mp[s[i]] == 0)
                {
                    stk.pop();
                }
                else
                {
                    return "NO";
                }
            }
        }
    }

    if(stk.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }


}

// yet other method

string is_balanced(string s)
{
    
    unordered_map<char,int> mp = {{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};

    stack<int> st;


    for(int i=0; i<s.size(); i++)
    {

        if(st.empty())
        {
            if(mp[s[i]]<0)
            {
                st.push(mp[s[i]]);
            }
            else
            {
                return "NO";
            }
        }
        else
        {
            if(mp[s[i]]>0)
            {
                if(st.top()+mp[s[i]]==0)
                {
                    st.pop();
                }
                else
                {
                    return "NO";
                }
            }
            else
            {
                st.push(mp[s[i]]);
            }
        }

    }


    if(st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

    
}

int main()
{

    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        cout<<is_balanced(s)<<endl;
    }

}


