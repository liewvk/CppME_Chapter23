#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> students;

    students[101] = "Alice";
    students[102] = "Brian";
    students[103] = "Cindy";

    for (auto item : students)
    {
        cout << item.first << " : " << item.second << endl;
    }

    return 0;
}
