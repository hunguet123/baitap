#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string chooseWord();
string update(string guessedWord, string secretWord,char guess);
char readAGuess();
bool contains(string secretWord, char guess);
void renderGame(string guessedWord, int badGuessCount);
void suggestions(string &guessedWord, string secretWord);
