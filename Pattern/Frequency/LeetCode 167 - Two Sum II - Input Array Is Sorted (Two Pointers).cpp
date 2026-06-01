// LeetCode 167 - Two Sum II - Input Array Is Sorted (Two Pointers)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    int left = 0;
    int right = numbers.size() - 1;

    vector<int> ans;

    while (left < right)
    {
        int sum = numbers[left] + numbers[right];

        if (sum == target)
        {
            ans.push_back(left + 1);
            ans.push_back(right + 1);
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << ans[0] << " " << ans[1];
}
