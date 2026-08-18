#include <bits/stdtr1c++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
} // namespace std

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print1(n);
    }
}
