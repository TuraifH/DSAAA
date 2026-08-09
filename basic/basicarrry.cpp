/*an array is a collection of similar types of elements (Homogeneous elements) that have contiguous memory locations i.e One after another.
Counting arrays from the index value 0 simplifies the computation for the memory. Though it simplifies the computation. But it adds an extra step of an unnecessary subtraction of 1 i.e (n-1) for each access.


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[3];

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2][3];
    arr[1][1] = 45;

    cout << arr[1][1];

    return 0;
}
