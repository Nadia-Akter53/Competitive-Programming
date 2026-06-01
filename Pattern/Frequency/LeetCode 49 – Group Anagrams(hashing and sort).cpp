//LeetCode 49 – Group Anagrams(hashing and sort)
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (auto &s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto &it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    auto res = groupAnagrams(strs);

    for (auto &group : res) {
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "\n";
    }
}
