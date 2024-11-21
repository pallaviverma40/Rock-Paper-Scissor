#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int userChoice, computerChoice;
    string choices[3] = {"Rock", "Paper", "Scissors"};
    srand(time(0));      // Initialize random no.

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice: (1) Rock, (2) Paper, (3) Scissors" << endl;
    cout << "Enter 0 to exit the game." << endl;

    while (true) {
        cout << "Your choice: ";
        cin >> userChoice;

        if (userChoice == 0) {
            cout << "Thanks for playing! Goodbye!" << endl;
            break;
        }
  
        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;                   // Check if the input is valid
            continue;
        }
        computerChoice = rand() % 3 + 1;            // Generate computer's choice

        cout << "You choose: " << choices[userChoice - 1] << endl;
        cout << "Computer choose: " << choices[computerChoice - 1] << endl;

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;                 // to find the winner
        } 
        else if ((userChoice == 1 && computerChoice == 3) || 
                 (userChoice == 2 && computerChoice == 1) || 
                 (userChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
        } 
        else {
            cout << "Otherwise Computer wins!" << endl;
        }
        
        cout << endl;
    }

    return 0;
}
