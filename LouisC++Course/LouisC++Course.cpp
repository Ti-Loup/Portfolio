#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib> // For rand
#include <ctime>   // For time
#define MY_NAME "Louis"
#define PRINT_Joe




/*
int a;         // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5;     // copy-initialization (initial value after equals sign)
int c(6);   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
int d{ 7 };   // direct-list-initialization (initial value in braces)  PREFERRED
int e{};      // value-initialization (empty braces)

int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

	int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
	int w3 (4.5);   // compiles: w3 direct-initialized to value 4
*/
/*
int x = 6;	  // variable integer named x d'une valeur de 6
int width{  }; //double pour rajouter un chiffre à vergule quand il y a rien dans les braquets = donnée la plus près de 0
int height{ 5 };    // define variable width and initialize with initial value 5
float patate{ 4.5 };
*/
// Use direct-list-initialization when you’re actually using the initial value: ( int x { 0 };  )
// Use value-initialization when the object’s value is temporary and will be replaced: ( int x {}; )

/*int a = 5, b = 6;          // copy-initialization
int c(7), d(8);      // direct-initialization
int e{ 9 }, f{ 10 };     // direct-list-initialization
int i{}, j{};            // value-initialization
*/
/*
int a, b = 5;     // wrong: a is not initialized to 5!
int a = 5, b = 5; // correct: a and b are initialized to 5*/
/*
int numChars{};
int five()
{
	return 5;
}
void doPrint() {					 //Definition of user-defined function doPrint()
	std::cout << "In doPrint()\n";  // doPrint() is the called function in this example

}
*/
/*
void doB()
{
	std::cout << "In doB()\n";
}


void doA()
{
	std::cout << "Starting doA()\n";

	doB();

	std::cout << "Ending doA()\n";
}
*/
/*
// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser() {    // this function now returns an integer value
	std::cout << "Enter an Integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}
void printDouble(int value) {	// This function now has an integer parameter
	std::cout << value << " doubled is: " << value * 2 << '\n';
}
*/
/*
int add(int x, int y) 
{
	return x + y;
}

int multiply(int z, int w)
{
	return z * w;
}
*/
/*
int doubleNumber(int doubledValue) {

	return doubledValue * 2;
}
*/
/*
// Function to square a number
int squareNumber(int num) {
	return num * num;
}
*/
/*
int incrementNumber(int num) {

	return (num + 1);
}

*/

// ~ FORWARD DECLARATION ~
/*
int add(int x, int y); // forward declaration of add() (using a function declaration)

int doMath(int first, int second, int third, int fourth);
*/

/*

void foo(int x) // foo is defined in the global scope, x is defined within scope of foo()
{ // braces used to delineate nested scope region for function foo()
	std::cout << x << '\n';
} // x goes out of scope here

*/
/*
//Transférer un nombre en fahrenheit puis le remettre en celcius float (nombre avec vurgule)
float toFahrenheit(float celciusValue)
{

	return celciusValue * 9.0 / 5.0 + 32.0;
}
float toCelsius(float fahrenheitValue)
{
	return (fahrenheitValue - 32.0) * 5.0 / 9.0;
}
*/
/*
void numberValue(int value) {

	if (value > 0)
		std::cout << "The value is positive" << std::endl;
	else if (value < 0)
		std::cout << "The value is negative" << std::endl;
	else
		std::cout << "The value is 0 " << std::endl;
	
}
void printNumber(int N) { //use a loop to print the number 1 to the number the user has selected
	for (int i = 1; i <= N; ++i) {
		std::cout << i << std::endl;
	}

}
*/
//GOOD EXERCIEE 

/*
int maxOfThree(int a, int b, int c) {

	//not good if (a > b)(a > c)
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
	
		
}
bool isPrime(int number)
{
	if (number <= 1) return false;  //0 and 1 are not prime
	
	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0)
			return false;
	}
	return true;

}
*/
/* //	CALCULATRICE FUNCTION
float calculate(int num1, int num2, char op) {




	if (op == '+') {
		std::cout << "You chose addition\n";
		return num1 + num2;
	}
	else if (op == '-') {
		std::cout << "You chose subtraction\n";
		return num1 - num2;
	}
	else if (op == '*') {
		std::cout << "You chose multiplication\n";
		return num1 * num2;
	}
	else if (op == '/') {
		std::cout << "You chose division\n";
		if (num2 == 0) {
			std::cout << "Error: Division by zero!\n";
			return 0;
		}
		return static_cast<float>(num1) / num2;
	}
	else {
		std::cout << "Invalid operator! Please use (+, -, *, /)\n";
		return 0;
	}




}
*/

bool isAlive(int hp) {
	return hp > 0;
}

void highScores(int score) //function pour montrer les scores les plus hauts entre (60 et 100)
{ 
	if (score >= 60) {
		std::cout << "These scores are positive: " << score;

	}
	else 
	{
		std::cout << "These scores ain't positive: " <<score;
	}
}



int main()
{

	/*
	std::cout << patate << std::endl;


	std::cout << height << std::endl;

	std::cout << "Hello World\n"; //Write hello

	std::cout << x << std::endl; ; // Print la valeur x et passe a prochaine ligne.

	std::cout << width << std::endl; //width = 10
	width = 3;
	std::cout << width << std::endl;// change la variable width en devenant 3



	// Here's some math/physics values that we copy-pasted from elsewhere
	 double pi{ 3.14159 };
	[[maybe_unused]] double gravity{ 9.8 }; // [[maybe_unused]] attribute, which allows us to tell the compiler that we’re okay with a variable being unused.
	 double phi{ 1.61803 };

	std::cout << pi << '\n';  // pi is used
	std::cout << phi << '\n'; // phi is used

	// The compiler will likely complain about gravity being defined but unused


	*/
	//																~~ CHAR ~~ 
	//If char is signed, it can hold values from -128 to 127

	//If char is unsigned, it can hold values from 0 to 255

	//Let's take a random value that we can assign to a char

	/*

	int some_random_value = 300;

	char ch = some_random_value;

	//It will output 300
	std::cout << "Value of some_random_value: " << some_random_value << '\n';

	//Guess the output of this line?
	std::cout << "Value of ch: " << ch << '\n'; // Nothing because limits of 1 bit is -128 + 127

	//Guess the output of this line!
	std::cout << "Value of ch as int: " << static_cast<int>(ch) << std::endl;  // Only The lower 8 bits are stored in the char so ch becomes 44, not 300
	// you're converting the char value (44) back to an int. This doesn't reverse the loss of information —
	// it just treats the 1-byte value as an int, which still holds 44.




	std::cout << "Enter two numbers: ";

	int x{};
	std::cin >> x; //

	int y{};
	std::cin >> y;

	std::cout << "You entered " << x << " and " << y << '\n';
	*/

	/*
	std::cout << "Enter a number: "; // ask user for a number
	int x{}; // define variable x to hold user input
	std::cin >> x; // get number from keyboard and store it in variable x
	std::cout << "You entered " << x << '\n';
	*/
	/*
	std::cout << "Enter 3 values " << "4, 5, 6" << '\n';

	int Premiernombre{};
	int Deuxiemenombre{};
	int Troisiemenombre{};

	std::cin >> Premiernombre >> Deuxiemenombre >> Troisiemenombre;

	std::cout << "You intered " << Premiernombre << " ," << Deuxiemenombre << " and " << Troisiemenombre << std::endl;
	*/
	//'.\n' must be double-quoted since we’re outputting more than one character


	/*
	std::cout << sizeof(int) << '\n';


	std::cout << "This is a really, really, really, really, really, really, really, "
		"really long line\n"; // one extra indentation for continuation line



	//the operator should be placed at the beginning of the next line, not the end of the current line
	std::cout << 3 + 4
		+ 5 + 6
		* 7 * 8;
	/*
	/*																	~Literals and operators~
	Literals are hard coded value directly into the source code.int x { 5 };
	Operators are operations that uses literals and yield a return value.
	Operations may also yield a side effect (additional behaviour beyond simply yielding a return value eg.x=5 assign 5 to x).
	We can chain operators and literals and the return value given will follow the mathematical convention PEMDAS.
	*/

	//std::cout << 5 << '\n'; // print the value of a literal

	//int x{ 5 };
	//std::cout << x << '\n'; // print the value of a variable
/*
int a{ 2 };             // initialize variable a with literal value 2
int b{ 2 + 3 };         // initialize variable b with computed value 5
int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
int d{ b };             // initialize variable d with variable value 5
int e{ five() };        // initialize variable e with function return value 5

std::cout << a << b << c << d << e;

*/
/*
int userNomber{};


std::cout << "Enter an integer: ";

std::cin >> userNomber;

int dble{ userNomber * 2 };
int triple{ userNomber * 3 };

std::cout << "Double that number is " << userNomber * 2 << '\n';

std::cout << "Double that number is " << dble << '\n';
std::cout << "Triple that number is " << triple;
*/
//  ~ Quiz 1 ~

//Write a program that asks the user to enter a number, and then enter a second number. 
// The program should tell the user what the result of adding and subtracting the two numbers is.
/*
int firstNumber{};
int secondNumber{};

std::cout << "Enter an integer : ";
std::cin >> firstNumber;
std::cout << '\n' << "Enter another integer : ";
std::cin >> secondNumber;
int addResult{ firstNumber + secondNumber };
int subResult{ firstNumber - secondNumber };

std::cout << firstNumber << " + " << secondNumber << " Is " << addResult << '\n';
std::cout << firstNumber << " - " << secondNumber << " Is " << subResult << std::endl;
*/
/*
std::cout << "Starting main()\n";
doPrint();                        // Interrupt main() by making a function call to doPrint().  main() is the caller.
std::cout << "Ending main()\n";
*/
/*

std::cout << "Starting main()\n";

doA();

std::cout << "Ending main()\n";

*/


/*

int x{ getValueFromUser() }; // first call to getValueFromUser
int y{ getValueFromUser() }; // second call to getValueFromUser

std::cout << x << " + " << y << " = " << x + y << '\n';
*/





/*
int num{ getValueFromUser() };

printDouble(num);
*/
/*
std::cout << add(4, 5) << '\n'; // within add() x=4, y=5, so x+y=9
std::cout << add(1 + 2, 3 * 4) << '\n'; // within add() x=3, y=12, so x+y=15

int a{ 5 };
std::cout << add(a, a) << '\n'; // evaluates (5 + 5)

std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)
std::cout << add(1, add(2, 3)) << '\n'; // evaluates 1 + (2 + 3)
*/

/*
std::cout << "Entrez un nombre";
int number{};

std::cin >> number;
std::cout << doubleNumber(number) << '\n';

*/
/*
int input;
// Read an integer from the user
std::cout << "enter an integer";
std::cin >> input;

// Call the function to square the number
int squared = squareNumber(input);

// Print the squared value
std::cout << "The square of the number is: " << squared << std::endl;
	return 0;
*/

/*
//read an integer from user
std::cout << "Enter a number to increment: " << '\n';
int userNumber{};
std::cin >> userNumber;

//call the function to imcrement +1
int incremented = incrementNumber(userNumber);

//send the result
std::cout << " incremented value is: " << incremented << std::endl;


*/

//std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above

/*
// braces used to delineate nested scope region for function main()
foo(5);

int x{ 6 }; // x is defined within the scope of main()
std::cout << x << '\n';

*/



/*
std::cout << "My name is: " << MY_NAME << '\n';

#ifdef MY_NAME
std::cout << "Joe\n"; // will be compiled since MY_NAME IS DEFINED
#endif

#ifdef PRINT_BOB
std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif
*/
/*
std::cout << "Joe\n";

#if 1 // Don't compile anything starting here
std::cout << "Bob\n";
/* Some
 * multi-line
 * comment here
 */
 /*
std::cout << "Steve\n";
#endif // until this point
*/
/*

#ifdef PRINT_JOE
std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif
*/

//Transférer un nombre en fahrenheit puis le remettre en celcius
/*

int userDegree{};
std::cout << "Entrer un nombre à transférer en fahrenheit: ";
std::cin >> userDegree;

float answer = toFahrenheit(userDegree); // un float pour designer la variable toFahrenheit qui etait aussi en float
std::cout << "La valeur en fahrenheit est de: \n" << answer << '\n';

float fToc = toCelsius(answer);


std::cout << "La valeur de retour en celsius est de: \n" << fToc;

*/




/*
int userNumber{};
std::cout << "Enter a number: ";
std::cin >> userNumber;

 numberValue(userNumber);	//function value pour dire si le nombre est positive,negative ou 0

std::cout << "The number you entered is: " << userNumber<< std::endl;


std::cout << "\nHere are the numbers fron 1 to " << userNumber << "\n";
printNumber(userNumber); //function print number

*/

/*

//Find the maximum of 3 numbers

int number1, number2, number3;
std::cout << "Entrer 3 nombres: ";
std::cin >> number1 >> number2 >> number3;


int numberHiggest= maxOfThree(number1, number2, number3);

std::cout << "\nThe biggest number out of these 3 is : " << numberHiggest << std::endl;

if (isPrime(number1))
std::cout << "The first number is a prime number.\n";
else
std::cout << "The first number is not a prime number.\n";


if (isPrime(number2))
std::cout << "The second number is a prime number.\n";
else
std::cout << "The second number is not a prime number.\n";


if (isPrime(number3))
std::cout << "The third number is a prime number.\n";
else
std::cout << "The third number is not a prime number.\n";

*/

/*
char repeat = 'Y';
while (repeat == 'Y' || repeat == 'Y') {    //loop pour recommencer le programme

	int number1, number2;

	std::cout << "Entrez le premier nombre: ";
	std::cin >> number1;

	char operatr;
	std::cout << "Enter an operator (+, -, *, /): ";
	std::cin >> operatr;

	std::cout << "Entrez le deuxieme nombre: ";
	std::cin >> number2;

	float result = calculate(number1, number2, operatr);

	std::cout << "\nThe result is: " << result << std::endl;

	std::cout << "Do you want to calculate again (y/n)? ";
	std::cin >> repeat;   //press Y pour recommencer le programme du début

}
*/


	int playerHP = 100;
	const int maxHP = 100; //Maximum de point de vie que le joueur peu avoir
	int damage = 15;  //Damage amount
	int healing = 10; //Heal amount
	int potionAmount = 3; //nombre de potion que le joueur a
	int scoreMade[5] = {45, 60, 30, 90, 10}; //array

	std::string playerName;
	std::cout << "Enter your name: ";
	std::cin >> playerName;
	std::cout << "Welcome, " << playerName << "!\n";
	std::cout << "The game has started";


while (isAlive(playerHP)) {		
		//while loop keeps going as long as a condition is true
	std::cout << "\nEnemy has land an attack! You take " << damage << " damage.\n";
	playerHP -= damage;

	if (!isAlive(playerHP)) {
		break;  // Exit loop if player died
	}

	std::cout << "Your HP after damage: " << playerHP << "\n";
	std::cout << "You have " << potionAmount << " potions.\n";

	char choice; //character
	std::cout << "Use a potion? (y/n): ";
	std::cin >> choice;

	if ((choice == 'y' || choice == 'Y') && potionAmount > 0) {
		playerHP += healing;
		if (playerHP > maxHP) {
			playerHP = maxHP;
		}
		potionAmount--;

		std::cout << "You used a potion and healed for " << healing << " HP.\n";
	}
	else {
		std::cout << "You did not use a potion.\n";
	}

	std::cout << "Your current HP: " << playerHP << "\n";

	std::cout << "Press enter to continue...\n";
	std::cin.ignore(); // To handle leftover newline from std::cin
	std::cin.get();    // Waits for Enter
}
std::cout << "\n--- High Scores ---\n";
for (int i = 0; i < 5; ++i) {
	highScores(scoreMade[i]);
	std::cout << std::endl; // for cleaner output
}


std::cout << "\nYou have died. Game over!\n";
return 0;
}




//rand() is a built - in C++ function that gives you a random number, but it's usually a big number (like 13784, 9201, etc.).


//int rand1 = rand() % 5;
//int rand2 = rand() % 5; %5 is to divide the big numbers of rand and give the remainings.


/*
int doMath(int first, int second, int third, int fourth)
{
	return first + second * third / fourth;
}
*/
/*
int add(int x, int y) // even though the body of add() isn't defined until here
{
	return x + y;



}
*/
