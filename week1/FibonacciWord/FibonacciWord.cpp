#include <iostream>

using namespace std;

int main()
{
    string s0 = "a";
    string s1 = "b";
    string s2;
    cout << s0 << endl << s1 << '\n';
    for (int i = 2; i <= 10; i++ )
    {
        s2 = s1 + s0;
        s0 = s1;
        s1 = s2;
        cout << s2 << endl;
    }
    return 0;
}
