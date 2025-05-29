#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()





int main() {
    std::srand(std::time(0)); // initialize random seed
    int secretNumber = std::rand() % 100 + 1; // number between 1 and 100

    int playerGuess;
    int maxTries = 5;
    int attempt = 0;

    std::cout << "Welcome to Guess Right!\n";
    std::cout << "Try to guess the number between 1 and 100.\n";
    std::cout << "You have " << maxTries << " attemps! \n";


    // Loop until the player guesses the number
    while (attempt < maxTries) {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
       

        if (playerGuess == secretNumber) {
            std::cout << "You did it! The answer was " << secretNumber << "\n";
            break; // Exit the loop when guessed correctly
        }
        else if (playerGuess < secretNumber) {
            std::cout << "Too small! Try again.\n";
        }
        else {
            std::cout << "Too high! Try again.\n";
        }

        attempt++;
        
    }

    if (attempt == maxTries && playerGuess != secretNumber) {                //your last guess was wrong, not the correct number.
        std::cout << "\n Out of tries! The correct number was " << secretNumber << ". Better luck next time!\n";
    }

    return 0;
}

