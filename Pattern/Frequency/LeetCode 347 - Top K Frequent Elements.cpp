// LeetCode 347 - Top K Frequent Elements

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    unordered_map<int,int> mp;

    for (int num : nums)
    {
        mp[num]++;
    }

    priority_queue<pair<int,int>> pq;

    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }

    vector<int> ans;

    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}
