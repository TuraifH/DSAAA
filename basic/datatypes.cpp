// int, long, long long, doule, float

// string - anything before a space
// getline is used to add the whole line
#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}
