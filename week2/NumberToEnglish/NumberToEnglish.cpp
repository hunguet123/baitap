#include <iostream>
#include <math.h>
using namespace std;
int so_chu_so(int n);
int *chuso(int n);
int *chu_so(int n);
void print_number(int n);
void name_number(int a);
int main( )
{
    int n;
    cin >> n;
    int *arr = chu_so(n);
    //for (int i = 0; i < so_chu_so(n); i++) cout << arr[i] << " ";
    print_number(n);
    return 0;
}
int so_chu_so(int n)
{
    return log10(n) + 1;
}
int *chuso(int n)
{
    int *a = new int [10];
    int i = 0;
    while (n > 0)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    return a;
}
int *chu_so(int n)
{
    int *arr = chuso(n);
    int *b = new int [10];
    int m = so_chu_so(n);
    for (int i = 0; i < m; i++) b[i] = arr[m - 1-i];
    return b;
}
void dac_biet(int n)
{
    switch (n){
    case 10: cout << "ten "; break;
    case 11: cout << "eleven "; break;
    case 12: cout << "twelve ";break;
    case 13: cout << "thirteen "; break;
    case 14: cout << "fourteen "; break;
    case 15: cout << "fifteen "; break;
    case 16: cout << "sixteen "; break;
    case 17: cout << "seventeen "; break;
    case 18: cout << "eighteen "; break;
    case 19: cout << "nineteen "; break;
    }
}
void don_vi(int a)
{
    switch (a) {
    case 1: cout << "One "; break;
    case 2: cout << "Two "; break;
    case 3: cout << "Three "; break;
    case 4: cout << "four "; break;
    case 5: cout << "five "; break;
    case 6: cout << "six "; break;
    case 7: cout << "seven "; break;
    case 8: cout << "eight "; break;
    case 9: cout << "nine "; break;
    }
}
void chuc(int b)
{
    {
            switch (b){
                case 2: cout << "twenty "; break;
                case 3: cout << "thirty "; break;
                case 4: cout << "forty "; break;
                case 5: cout << "fifty "; break;
                case 6: cout << "sixty "; break;
                case 7: cout << "seventy "; break;
                case 8: cout << "eighty "; break;
                case 9: cout << "ninety "; break;
            }
            }
}
void tram(int c)
{
            switch (c){
                case 1: cout << "one hundred "; break;
                case 2: cout << "two hundred "; break;
                case 3: cout << "three hundred "; break;
                case 4: cout << "four hundred "; break;
                case 5: cout << "five hundred "; break;
                case 6: cout << "six hundred"; break;
                case 7: cout << "seven hundered "; break;
                case 8: cout << "eigh hundred "; break;
                case 9: cout << "nine hundred "; break;
            }
}
void nghin(int d)
{
    switch (d){
                case 1: cout << "one thousand "; break;
                case 2: cout << "two thousand "; break;
                case 3: cout << "three thousand "; break;
                case 4: cout << "four thousand "; break;
                case 5: cout << "five thousand "; break;
                case 6: cout << "six thousand"; break;
                case 7: cout << "seven thousand "; break;
                case 8: cout << "eigh thousand"; break;
                case 9: cout << "nine thousand "; break;
            }
}
void million(int f)
{
    switch (f){
                case 1: cout << "one million "; break;
                case 2: cout << "two million "; break;
                case 3: cout << "three million "; break;
                case 4: cout << "four million "; break;
                case 5: cout << "five million "; break;
                case 6: cout << "six million"; break;
                case 7: cout << "seven million "; break;
                case 8: cout << "eigh million"; break;
                case 9: cout << "nine million "; break;
            }
}
void print_number(int n)
{
    int *arr = chu_so(n);
    int m = so_chu_so(n);
    switch (n) {
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    case 3: cout << "Three"; break;
    case 4: cout << "four"; break;
    case 5: cout << "five"; break;
    case 6: cout << "six"; break;
    case 7: cout << "seven"; break;
    case 8: cout << "eight"; break;
    case 9: cout << "nine"; break;
    case 10: cout << "ten"; break;
    case 11: cout << "eleven"; break;
    case 12: cout << "twelve";break;
    case 13: cout << "thirteen"; break;
    case 14: cout << "fourteen"; break;
    case 15: cout << "fifteen"; break;
    case 16: cout << "sixteen"; break;
    case 17: cout << "seventeen"; break;
    case 18: cout << "eighteen"; break;
    case 19: cout << "nineteen"; break;
    default :
        if (  so_chu_so(n) == 2 && n >= 20)
            {chuc(arr[0]); don_vi(arr[1]);}
        if (  so_chu_so(n) == 3)
            {
                tram(arr[0]); chuc(arr[1]);don_vi(arr[2]);
            }
        if (so_chu_so(n) == 4){nghin(arr[0]); tram(arr[1]); chuc(arr[2]); don_vi(arr[3]);}
        if (so_chu_so(n) == 5 ){
                int van = arr[0]*10 + arr[1];
                if (van >= 10 && van <= 19){dac_biet(van); cout << "thousand ";}
                else {chuc(arr[0]); don_vi(arr[1]); cout << "thousand ";}
                tram(arr[2]); chuc(arr[3]); don_vi(arr[4]); }
        if (so_chu_so(n) == 6)
        {
            tram(arr[0]); chuc(arr[1]); don_vi(arr[2]); cout << "thousand "; tram(arr[3]); chuc(arr[4]); don_vi(arr[5]);
        }
        if (so_chu_so(n) == 7)
        {
            million(arr[0]); tram(arr[1]);
            int van = arr[2]*10 + arr[3];
            if (van >= 10 && van <= 19) {dac_biet(van);}
            else {chuc(arr[2]); don_vi(arr[3]);}
            cout << "thousand ";
            tram(arr[4]);chuc(arr[5]); don_vi(arr[6]);
        }
        if (so_chu_so(n) == 8)
        {
            int trieu = arr[0]*10 + arr[1];
            if (trieu >=10 && trieu <=19) dac_biet(trieu);
            else {chuc(arr[0]);don_vi(arr[1]); }
            cout << "million ";
            tram(arr[2]);
            int van = arr[3] * 10 + arr[4];
            if (van >=10 && van <= 19) dac_biet(van);
            else {chuc(arr[3]);don_vi(arr[4]); }
            cout << "thousand ";
            tram(arr[5]);
            int hang_chuc = arr[6]*10 + arr[7];
            if (hang_chuc >= 10 && hang_chuc <= 19) dac_biet(hang_chuc);
            else {chuc(arr[6]); don_vi(arr[7]); }
        }
        if (so_chu_so(n) == 9)
        {
            tram(arr[0]);
            if(arr[1]*10 + arr[2] >= 10 &&  arr[1]*10 + arr[2] <= 19) dac_biet(arr[1]*10 + arr[2]);
            else {chuc(arr[1]); don_vi(arr[2]); }
            cout << "million ";
            tram(arr[3]);
            if(arr[4]*10 + arr[5] >= 10 &&  arr[4]*10 + arr[5] <= 19) dac_biet(arr[4]*10 + arr[5]);
            else {chuc(arr[4]); don_vi(arr[5]); }
            cout << "thousand ";
            tram(arr[6]);
            int hang_chuc = arr[7]*10 + arr[8];
            if (hang_chuc >= 10 && hang_chuc <= 19) dac_biet(hang_chuc);
            else {chuc(arr[7]); don_vi(arr[8]); }
        }
    break;
    }
}

