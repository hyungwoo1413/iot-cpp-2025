#include <iostream>
using namespace std;

#define add(x) x + x

inline int func(int x)
{
    return x + x;
}

int main()
{
    cout << func(2) << endl;
    cout << add(2) << endl;

    return 0;
}
