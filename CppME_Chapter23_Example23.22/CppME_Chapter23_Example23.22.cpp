#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 40, 10, 30, 20 };

    sort(numbers.begin(), numbers.end());

    for (int n : numbers)
    {
        cout << n << " ";
    }

    return 0;
}
