#pragma once
// Never use namespace in h file
#include <string>

class FBullCowGame {
public:
	int getMaxTries() const; 
	int getCurrentTry() const;
	bool isGameWon() const;

    void reset(); // TODO make a more rich return value
	bool checkGuessValidity(std::string); // TODO make a rich return value

private:
	int myCurrentTry = 1;
	int myMaxTries = 5;
	
};
