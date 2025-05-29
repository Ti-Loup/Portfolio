#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib> // For rand
#include <ctime>   // For time

//Random names generator
int main() {
    std::string firstParts[] = { "Bob", "Loulou", "Lisa", "Mario", "Luigi" };
    std::string secondParts[] = { "Blake", "Boulanger", "Gauvin", "hunter", "walker" };

    srand(time(0)); // Seed random once

    char again = 'y';
    while (again == 'y' || again == 'Y') {
        int rand1 = rand() % 5;
        int rand2 = rand() % 5;

        std::string name = firstParts[rand1] + secondParts[rand2];
        std::cout << "Generated name: " << name << "\n";

        std::cout << "Generate another? (y/n): ";
        std::cin >> again;
    }

    std::cout << "Thanks for playing with names!\n";
    return 0;
}

//rand() gives you a random number.

//% 5 keeps it between 0 and 4 — perfect for arrays with 5 items.