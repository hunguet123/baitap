#include <iostream>

using namespace std;

void delete_coincident(int *a, int location, int &k)
{
    for (int i = location; i < k; i++)
    {
        a[i] = a[i + 1];
    }
    k--;
}

int main()
{
    int *a = new int [100];
    int k = 0;
    int n;
    do
    {
        cin >> n;
        a[k] = n;
        k++;
    }
    while (n >= 0);
    for (int i = 0; i < k; i++)
    {
        if (a[i] == a[i + 1]) delete_coincident(a,i,k);
    }
    for (int i = 0; i < k; i++)
    {
        if (a[i] == a[i + 1]) delete_coincident(a,i,k);
    }
    for (int i = 0; i < k; i++) cout << a[i] << " ";
    return 0;
}
