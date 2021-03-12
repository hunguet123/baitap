#include <iostream>

using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x<< endl;
   // in địa chỉ của x tại đây
}
void g(int yval)
{
   int y;
   y = yval;
   cout << &y << endl;
   // in địa chỉ của y tại đây
}
int main()
{
   f(7);
   g(11);
   return 0;
}

// dia tri x va y la giong nhau. khi goi xong ham  f thi dia chi cua bien x se bi xoa di vi la bien dia phuong. do do co the trinh bien dich da sap xep hai bien x, y tren cung 1 dia chi
