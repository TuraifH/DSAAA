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

#include <iostream>
using namespace std;

// Function jo value ko badalne ki koshish karega
void addTen(int num)
{
    num = num + 10; // Isne copy mein 10 add kiya
    cout << "Function ke andar ki value: " << num << endl;
}

int main()
{
    int originalScore = 50;

    // Yahan originalScore ki 'photocopy' pass ho rahi hai
    addTen(originalScore);

    // Original value check karte hain
    cout << "Main ke andar original value: " << originalScore << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Note: Parameter mein int ke baad '&' laga diya
void addTenReal(int &num)
{
    num = num + 10; // Ab yeh sidha original address par jaakar 10 add karega
    cout << "Function ke andar ki value: " << num << endl;
}

int main()
{
    int originalScore = 50;

    // Yahan originalScore ka 'address' (reference) pass ho raha hai
    addTenReal(originalScore);

    // Original value check karte hain
    cout << "Main ke andar original value: " << originalScore << endl;

    return 0;
}