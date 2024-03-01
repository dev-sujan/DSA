#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (auto &i : nums)
    {
        cout << "i : " << i << endl;
        int id = abs(i) - 1;
        cout << "id:  " << id << endl;
        if (nums[id] < 0)
        {
            return abs(i);
        }
        cout << nums[id] << endl;
        nums[id] = -nums[id];
        cout << nums[id] << endl;
    }
    return -1;
}

int main()
{

    vector<int> nums = {1, 5, 3, 3, 4};

    cout << findDuplicate(nums) << endl;

    return 0;
}