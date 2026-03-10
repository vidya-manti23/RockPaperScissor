#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char user, again = 'y';
    char choices[] = {'r','p','s'};

    srand(time(0));

    while(again == 'y' || again == 'Y'){
        cout << "Enter r (Rock), p (Paper), s (Scissors): ";
        cin >> user;

        char computer = choices[rand() % 3];

        cout << "You chose: " << user << endl;
        cout << "Computer chose: " << computer << endl;

        if(user == computer){
            cout << "It's a tie!" << endl;
        }
        else if((user=='r' && computer=='s') ||
                (user=='s' && computer=='p') ||
                (user=='p' && computer=='r')){
            cout << "You win!" << endl;
        }
        else{
            cout << "Computer wins!" << endl;
        }

        cout << "Play again? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Game over!" << endl;
    return 0;
}