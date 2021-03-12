#include <iostream>

using namespace std;

int size_of_char(char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

char* Reverse ( char a[])
{
    int n = size_of_char(a);
    char* cop = new char[n];
    for (int i = 0; i < n; i++)
    {
        cop[i] = a[n-i-1];
    }
    return cop;
}
char* erase_char(char a[], int vt, int &n)
{
    char *cop = new char[n - 1];
    for (int i = 0; i < vt; i++) cop[i] = a[i];
    for (int i = vt; i < n-1; i++) cop[i] = a[i+1];
    cop[n] = NULL;
    return cop;

}
char* delete_char(char a[], char c)
{
    int n = size_of_char(a);

    for (int i = 0; i < n; i++) if (a[i] == c) a = erase_char(a,i,n);

    return a;
}

char* pad_right(char a[],int n)
{
    int size_of_a = size_of_char(a);
    if (size_of_a < n)
    {
        char *cop = new char[n-1];
        for (int i = 0; i < size_of_a; i++) cop[i] = a[i];
        for (int i = size_of_a; i < n; i++) cop[i] = ' ';
        return cop;
    }
    return a;
}

char* pad_left(char a[], int n)
{
    int size_of_a = size_of_char(a);
    if (size_of_a < n)
    {
        char *cop = new char[n-1];
        for (int i = 0; i < n - size_of_a; i++) cop[i] = ' ';
        for (int i = n - size_of_a; i < n; i++) cop[i] = a[i - n + size_of_a];

        return cop;
    }
    return a;
}

char* truncate(char a[], int n)
{
    int a_length = size_of_char(a);
    if (a_length > n)
    {
        char* cop = new char[n-1];
        for (int i = 0; i < n; i++) cop[i] = a[i];
        return cop;
    }
    return a;
}

bool bool_is_palindrome(char a[])
{
    int n = size_of_char(a);
    for (int i = 0; i < n/2; i++) if (a[i] != a[n-i-1]) return false;
    return true;
}

int main(int argc, char* argv[])
{
    char *a = "abba";

    cout << a << endl;

    int n = size_of_char(a);
    cout << Reverse(a) << endl;

    cout << delete_char(a,'b') << endl;

    cout << pad_right(a,1) << " " << endl;

    cout << pad_left(a,7) << endl;

    cout << truncate(a,3)<< endl;

    if (bool_is_palindrome(a)== true) cout << "doi"<< endl;
    else cout << "khong" << endl;
    return 0;
}
