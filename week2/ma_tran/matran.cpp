#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n ; j++)
            {
                if ( j + i + 1 <= n)
                cout << j + i + 1 << " ";
                else cout << j + i + 1 - n << " " ;
            }
            cout << "\n";
        }
    return 0;
}
