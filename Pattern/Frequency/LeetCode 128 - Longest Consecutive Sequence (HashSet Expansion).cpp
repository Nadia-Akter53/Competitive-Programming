// LeetCode 128 - Longest Consecutive Sequence (HashSet Expansion)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> st(nums.begin(), nums.end());

    int ans = 0;

    for (auto num : nums)
    {
        if (!st.count(num - 1))
        {
            int curr = num;
            int len = 1;

            while (st.count(curr + 1))
            {
                curr++;
                len++;
            }

            ans = max(ans, len);
        }
    }

    cout << ans;
}
