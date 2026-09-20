#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> scores;

    scores["Alice"] = 85;
    scores["Brian"] = 90;
    scores["Cindy"] = 78;

    for (auto item : scores)
    {
        cout << item.first << " scored " << item.second << endl;
    }

    return 0;
}
