#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values;

    values.push_back(5);
    values.push_back(15);
    values.push_back(25);

    cout << "Size = " << values.size() << endl;

    values.pop_back();

    cout << "Size after pop_back = " << values.size() << endl;

    return 0;
}
