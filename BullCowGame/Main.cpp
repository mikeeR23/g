
#include <iostream>

//for strings 
#include <string>
#include "Main.h"
#include "FBullCowGame.h"

// std::cout
//using namespace std;

void printIntro();
std::string getGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame;

int main()
{
	bool game = true;
	do{
		printIntro();
	PlayGame();
	game = AskToPlayAgain();
	}while(game);
	
	return 0;
}


void printIntro()
{
	constexpr int WORDLENGTH = 9;

	std::cout << "Welcome to Bulls and Cows, a fun word game. " << std::endl;
	std::cout << "Can you guess the " << WORDLENGTH << " letter isogam i'm thinking of?\n";

}

std::string getGuess()
{
	std::string guess = "";
	int currentTry = BCGame.getCurrentTry();
	std::cout << std::endl << "Try "<< currentTry <<  ". Enter your guess: ";
	
	

	std::getline(std::cin, guess);

	return guess;
}


void PlayGame()
{
	
	int maxTries = BCGame.getMaxTries();
	std::cout << "Max Tries: " << maxTries << std::endl;

	for (int i = 0;i < maxTries;i++)
	{
		std::string res = getGuess();
		std::cout << "You guessed " << res << std::endl;
	}
}

bool AskToPlayAgain()
{	
	std::cout << "Do you want to play again? (y/n)";
	std::string response = "";
	std::getline(std::cin, response);

	return (response[0] == 'y' || response[0] == 'Y');
}