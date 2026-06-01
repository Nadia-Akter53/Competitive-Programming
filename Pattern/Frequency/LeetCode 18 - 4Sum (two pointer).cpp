// LeetCode 18 - 4Sum (two pointer)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        if(i > 0 && nums[i] == nums[i - 1])
            continue;

        for(int j = i + 1; j < n; j++)
        {
            if(j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while(left < right)
            {
                long long sum =
                    (long long)nums[i] +
                    nums[j] +
                    nums[left] +
                    nums[right];

                if(sum < target)
                {
                    left++;
                }
                else if(sum > target)
                {
                    right--;
                }
                else
                {
                    ans.push_back({
                        nums[i],
                        nums[j],
                        nums[left],
                        nums[right]
                    });

                    while(left < right &&
                          nums[left] == nums[left + 1])
                        left++;

                    while(left < right &&
                          nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
            }
        }
    }

    for(auto v : ans)
    {
        cout << "[";

        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i];

            if(i != v.size() - 1)
                cout << ", ";
        }

        cout << "]" << endl;
    }
}
