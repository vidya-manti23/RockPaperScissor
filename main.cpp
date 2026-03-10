#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getComputerChoice() {
    char choices[] = {'r','p','s'};
    return choices[rand() % 3];
}

void showChoices(char user, char computer) {
    cout << "You chose: " << user << endl;
    cout << "Computer chose: " << computer << endl;
}

void findWinner(char user, char computer) {
    if(user == computer)
        cout << "It's a tie!" << endl;

    else if((user=='r' && computer=='s') ||
            (user=='s' && computer=='p') ||
            (user=='p' && computer=='r'))
        cout << "You win!" << endl;

    else
        cout << "Computer wins!" << endl;
}

int main() {

    srand(time(0));

    char user, again = 'y';

    while(again == 'y' || again == 'Y') {

        cout << "Enter r (Rock), p (Paper), s (Scissors): ";
        cin >> user;

        char computer = getComputerChoice();

        showChoices(user, computer);

        findWinner(user, computer);

        cout << "Play again? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Game over!" << endl;

    return 0;
}
