#include <iostream>
using namespace std;

int main() {
  int numDoors, winningDoors, numTrials;
  cout << "Enter how many doors you would like to choose from (classic MHP is "
          "3 doors): ";
  cin >> numDoors;
  cout << "\n How many winning doors would you like to have (classic MHP is 1 "
          "door): ";
  cin >> winningDoors;
  cout << "\n How many times would you like to run this experiment: ";
  cin >> numTrials;
  cout << "\n Would you like to switch doors? ";
  char doorChoice;
  cin >> doorChoice;
  bool switchChoice;

  if (doorChoice == 'y') {
    switchChoice = true;
  }

  else {
    switchChoice = false;
  }

  int numWins = 0;

  for (int i = 0; i < numTrials; i++) {
    int choice = rand() % numDoors + 1; // random number from 1 to numDoors
    if (switchChoice && choice > winningDoors) {
      numWins++;
    }
    if (!switchChoice && choice <= winningDoors) {
      numWins++;
    }
  }

  if (switchChoice) {
    cout << "You won " << numWins << " out of " << numTrials
         << " times by switching";
  } else {
    cout << "You won " << numWins << " out of " << numTrials
         << " times by NOT switching";
  }

  return 0;
}