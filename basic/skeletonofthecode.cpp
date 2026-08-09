// #include<iostream> → used for input/output.
// #include<math.h> → used for mathematical functions.
// #include<iostream>

// body of he code
#include <stdio.h>
int main()
{
    return 0;
}

// print
#include <iostream>
int main()
{
    std::cout << "Hey, Striver!";
    return 0;
}

// new line

#include <iostream>
int main()
{
    std::cout << "Hey, Striver!";
    std::cout << "Hey, Striver!";
    return 0;
}

//\n → inserts a new line (faster, commonly used).
// std::endl → inserts a new line and flushes the output buffer (slower).

#include <iostream>
int main()
{
    std::cout << "Hey, Striver!" << std::endl;
    std::cout << "Hey, Striver!";
    return 0;
}
// Using namespace std:Writing using namespace std; removes the need to prefix std::. This makes code cleaner but can cause naming conflicts in large projects.

#include <iostream>
using namespace std;
int main()
{
    cout << "Hey, Striver!" << endl;
    cout << "Hey, Striver!";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << "value of x" << x;
    return 0;
}

// instead of including libraries one by one, you can use:

#include <bits/stdc++.h>