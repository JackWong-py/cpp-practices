// debug_practice.cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter how many integers you will input: ";
    int n;
    if (!(cin >> n) || n <= 0)
    {
        cout << "Invalid count\n";
        return 1;
    }

    vector<int> nums;
    nums.reserve(n);
    cout << "Enter " << n << " integers (space or newline separated):\n";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    long long sum = 0;
    int maximum = nums[0];
    int minimum = nums[0];

    for (size_t i = 0; i < nums.size(); ++i)
    {
        sum += nums[i];
        if (nums[i] > maximum) maximum = nums[i];
        if (nums[i] < minimum) minimum = nums[i];
    }

    // ***** Intentional logical bug (off-by-one) is here *****
    double average = static_cast<double>(sum) / (nums.size() - 1);

    int count_above = 0;
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (static_cast<double>(nums[i]) > average)
            ++count_above;
    }

    cout << "Sum = " << sum << '\n';
    cout << "Average = " << average << '\n';
    cout << "Max = " << maximum << '\n';
    cout << "Min = " << minimum << '\n';
    cout << count_above << " values are above average\n";

    return 0;
}
