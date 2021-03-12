#include <iostream>
#include <vector>
using namespace std;
void ma_tran_ky_ao(int n)
{
    int a[n][n];
    bool b[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) b[i][j] = false;
    int k = 1;
    int i = 0;
    int j = n/2;
    while (k <= n*n) {
        a[i][j] = k;
        b[i][j] = true;
        i--;
        j++;
        k++;
        if (i < 0 && j >=n) {
            i += 2;
            j--;
            continue;
        }
        if (i < 0) {
            i = n - 1;
        }
        if (j >= n) {
            j = 0;
        }
        if (b[i][j] == true) {
            i += 2;
            j--;
        }

    }
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
int main()
{
    int n;
    cin >> n;
    ma_tran_ky_ao(n);
    return 0;
}
