#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int i)
{
    //tähän satunnaisluvun arvonta
    maxNumber = i;
    srand(time(0));
    randomNumber = rand() % maxNumber +1;
    //cout << "GAME CONSTRUCTOR: Give a maximum number." << endl;
    //cin >> maxNumber;
    cout << "GAME CONSTRUCTOR: Object initialized with " << maxNumber << " as a maximum number." << endl;
}


Game::~Game()
{
    cout << "GAME DESTRUCTOR: Object cleared from stack memory." << endl;
}


void Game::play()
{
    //tähän peliominaisuus
    cout << "\nGive your guess between 1-" << maxNumber << endl;
    cin >> playerGuess;

  while (playerGuess != randomNumber) {

      numOfGuesses++; //lasketaan kierrosmäärät eli arvauskerrat

    while (playerGuess >= 0 && playerGuess <= maxNumber) {

        if (playerGuess > randomNumber)
        {
            cout << "Your guess is too big." << endl;
            break;
        }

        else if (playerGuess < randomNumber)
        {
            cout << "Your guess is too small." << endl;
            break;
        }
    }

    if (playerGuess > maxNumber || playerGuess < 0) {
        cout << "Please read the instructions." << endl;
    }

    cout << "\nGive your guess between 1-" << maxNumber << endl;
    cin >> playerGuess;

    }


  if (playerGuess == randomNumber)
    {
      Game::printGameResult();
    }

  //cout << numOfGuesses << endl;  // laskurin tedtaus, ok

}


void Game::printGameResult()
{
    cout << "Your guess is right = " << randomNumber << endl;
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses." << endl;
}
