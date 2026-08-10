#include <iostream>
using namespace std;

// 1. Function banaya (Define kiya)
int addNumbers(int a, int b)
{
    int sum = a + b; // a aur b ko add kiya
    return sum;      // Result wapas bhej diya
}

int main()
{
    // 2. Function ko use kiya (Call kiya)
    int result1 = addNumbers(10, 5); // Yahan a=10 aur b=5 ban jayega
    cout << "Pehla sum hai: " << result1 << endl;

    return 0;
}