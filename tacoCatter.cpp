/*
* 
* 
*	File: backwardString.cpp
*	Name: Huthsady Legend Boun
*	Professor: Grace Comp
*	Class: CISP 1020
*	Date: Februrary 12, 2025
* 
* 
*/


#include <iostream>
#include <string>
#include <array>



// Function to gather the user's input
// Note: getline
std::string* userInput()
{
	std::string userString;
	
	std::cout << "Please insert the string you would like reversed!\n";
	std::getline(std::cin, userString);

	return new std::string (userString);
}



// Function to reverse the string AND output it
void tacoCatter(std::string* pointString)
{

	std::string userString = *pointString;
	std::string reversedString;


	int stringSize = userString.size();

	for (int i = stringSize; i >= 0; i--)
	{
		std::cout << userString[i];
	}


}



// Main function. Every cpp program needs it
int main()
{
	std::string* pointToString = userInput();
	tacoCatter(pointToString);

	// Deletes the allocated space with new VERY IMPORTANT
	delete pointToString;
}
