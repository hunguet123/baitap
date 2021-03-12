#include <bits/stdc++.h>
#include"chosseWord.h"



int main()
{
    srand(time(0));
            string secretWord = chooseWord();
            string guessedWord = string(secretWord.length(), '-');
            int badGuessCount = 0;
            suggestions(guessedWord, secretWord);
            do {
                renderGame(guessedWord, badGuessCount);
                char guess = readAGuess();
                if (contains(secretWord, guess))
                    guessedWord = update(guessedWord, secretWord, guess);
                else badGuessCount++;
                }
            while (badGuessCount < 7 && secretWord != guessedWord);

            renderGame(guessedWord, badGuessCount);
            if (badGuessCount < 7) cout << "Congratulations! You win!";
            else cout << "You lost. The correct word is " << secretWord;

    return 0;
}


