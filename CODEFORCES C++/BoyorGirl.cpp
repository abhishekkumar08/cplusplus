#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_set<char> st;
    for(int i=0;i<s.length();i++)
            st.insert(s[i]);
    if(st.size()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}