#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int generate_randum_number();
int get_play_guess_number();
void print_answer(int guess, int secretNumber);

int main()
{
    srand(time(0));
    int secret_number = generate_randum_number();
    int guess_number;
    do
    {
        guess_number = get_play_guess_number();
        print_answer(guess_number, secret_number);
    }
    while (secret_number != guess_number);
    return 0;
}
int generate_randum_number()
{
    return rand() %100 + 1;
}
int get_play_guess_number()
{
    int number;
    cin >> number;
    return number;
}
void print_answer(int guess, int secretNumber)
{
    if (guess < secretNumber) cout << "Your number is small" << endl;
    else if (guess > secretNumber) cout << "your number is big" << endl;
    else cout << "You win" << endl;
}
