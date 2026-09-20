#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;
    int value, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> value;
        marks.push_back(value);
    }

    for (int m : marks)
    {
        sum += m;
    }

    cout << "Average = " << sum / 5.0 << endl;

    return 0;
}
