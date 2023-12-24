#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

	time_t current_time = time(NULL);  // creating a timestamp

	srand((unsigned)time(NULL)); // passing timestamp to srand to generate random number

	int attempts;		// initializing attempts
	cout << "how many attempts do you want to have?\n";			// printing text
	cin >> attempts;	// saving the number of attempts

	int randomAnsw = rand() % 11;		// creating a random number between 0-10

	for (int i = 0; i < attempts; i++)	 // as long as "i" is smaller than the inserted attempts the loop runs (initializing the loop)
	{
		cout << "Enter a number between 0 and 10!\n";	// printing stuff
		int userInput;			// initializing the userInput so we can store it right after
		cin >> userInput;		// saving the user input 
		if (userInput == randomAnsw)	// if userInput is the answer we do the following
		{
			cout << "you won!\n";		// printing stuff
			break;						// breaking the loop if the user guessed right
		}
		else	// if the userInput was false we print "try again" 
		{
			cout << "try again!\n"; // printing
		}
	}
	cout << "you have no more try's left, restart the programm!\n"; // after the loop ends we print this
	system("pause");
	return 0;
}
