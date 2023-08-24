// Create a program that allows the user to play the classic game of rock, paper, scissors
// against the computer.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

enum class Choice {
    ROCK,
    PAPER,
    SCISSORS
};

int main() {
    srand(time(0));

    string choices[] = {"Rock", "Paper", "Scissors"};

    cout << "---------Welcome to Rock, Paper, Scissors!------------" <<endl;

    while (true) {
        Choice userChoice;
        int userNum;
        cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
        cin >> userNum;

        userChoice = static_cast<Choice>(userNum);

        Choice computerChoice = static_cast<Choice>(rand() % 3);

        cout << "\nYou chose: " << choices[static_cast<int>(userChoice)] <<endl;
        cout << "\nComputer chose: " << choices[static_cast<int>(computerChoice)] <<endl;

        if (userChoice == computerChoice) {
             cout << "\nIt's a tie!" <<endl;
        } else if (
            (userChoice == Choice::ROCK && computerChoice == Choice::SCISSORS) ||
            (userChoice == Choice::PAPER && computerChoice == Choice::ROCK) ||
            (userChoice == Choice::SCISSORS && computerChoice == Choice::PAPER)
        ) {
            cout << "\nYou win!\n" << endl;
        } else {
            cout << "Computer wins!\n" <<endl;
        }

        char playAgain;
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "\nThanks for playing!" <<endl;
            break;
        }
        
        }

        return 0;
    }
    

    

