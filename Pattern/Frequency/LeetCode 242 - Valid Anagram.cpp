// LeetCode 242 - Valid Anagram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";

    if (s.size() != t.size())
    {
        cout << "false";
        return 0;
    }

    unordered_map<char,int> mp;

    for (char c : s)
    {
        mp[c]++;
    }

    for (char c : t)
    {
        if (mp[c] == 0)
        {
            cout << "false";
            return 0;
        }
        mp[c]--;
    }

    cout << "true";
}
