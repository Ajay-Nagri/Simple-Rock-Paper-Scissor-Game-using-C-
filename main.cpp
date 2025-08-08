#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
using namespace std;

void GameResult() {
    unordered_map<int, string> mymap = {{1, "Scissor"}, {2, "Paper"}, {3, "Rock"}};

    int choice, compchoice, retry;

    do {
        cout << "\nType an option number:\n"
             << " '1' for Scissor\n '2' for Paper\n '3' for Rock\n";
        cout << "\nBest of Luck! Enter your choice: ";
        cin >> choice;

        if (choice < 1 || choice > 3) {
            cout << "\nInvalid option! Please try again.\n";
            continue; 
        }

        compchoice = rand() % 3 + 1;

        if (choice == compchoice) {
            cout << "\n\t\tOhh it's a tie!\n\n";
        }
        else if ((choice == 1 && compchoice == 3) || (choice == 2 && compchoice == 1) || (choice == 3 && compchoice == 2)) {
            cout << "\nYour choice: " << mymap[choice]
                 << "\tComputer choice: " << mymap[compchoice]
                 << "\n\n\t\tSorry, you lose!\n\n";
        }
        else {
            cout << "\nYour choice: " << mymap[choice]
                 << "\tComputer choice: " << mymap[compchoice]
                 << "\n\n\t\tCongratulations! You won!\n\n";
        }

        cout << "Play again? \nType '1' for yes or Type '2' for Exit : ";
        cin >> retry;

    } while (retry == 1);

    cout << "\nThank you for playing!\n";
}

int main() {
    srand(time(0)); 
    GameResult();
    return 0;
}
