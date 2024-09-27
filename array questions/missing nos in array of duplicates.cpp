
//code writen by myself, not all thoda logic, you can read it ffrom notes copy

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits.h>
using namespace std;

void findMissingNumAmongDuplicate(vector<int> nums, int n)
{

    vector<int> temp(n + 1);

    for (size_t i = 0; i < n; i++)
    {
        temp[i + 1] = nums[i];
    }

    /*for (size_t i = 0; i < n + 1; i++)
    {
        cout << "temp index " << i << ": " << temp[i] << endl;
    }

    cout << endl;*/

    for (size_t i = 1; i < n + 1; i++)
    {
        int index = abs(temp[i]);

        if (temp[index] > 0)
        {
            // mark as positive
            temp[index] = temp[index] * (-1);
        }
    }

    // after doing everything, indices of all positive nos are missing nos

    cout << " kissing nos are: ";
    for (size_t i = 1; i < n + 1; i++)
    {
        if (temp[i] > 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    vector<int> nums = {1, 3, 1, 2, 2};

    int n = nums.size();

    /*int ans =*/findMissingNumAmongDuplicate(nums, n);

    // cout << "ans: " << ans;
}
