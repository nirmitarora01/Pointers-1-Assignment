#include <iostream>
using namespace std;

int function(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];

    int count = 0;
    for (auto &cha: s)
    {
        if (cha == 't')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cin >> s;

    char first, last;
    int total = function(s, &first, &last);

    cout << first << " " << last << " " << total << endl;
    return 0;
}