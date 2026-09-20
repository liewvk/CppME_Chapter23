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

    cout << students[101] << endl;
    cout << students[102] << endl;

    return 0;
}
