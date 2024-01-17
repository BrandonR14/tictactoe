
#include <iostream>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void board();
bool checkwin();
void playerturn();
char turn = 'X';

int main()
{
    while (checkwin()) {
        board();
        playerturn();
        checkwin();
        board();
    }
    if (turn == 'X') {
        cout << "Player 2 has won the game!";
    }
    else if (turn == 'O') {
        cout << "Player 1 has won the game!";
    }
    else if (turn == 'D') {
        cout << "The game has ended in a draw";
    }
    return 0;
}
void playerturn() {
    int choice;
    if (turn == 'X') {
        cout << "Player 1, enter your move: ";
        cin >> choice;
        square[choice] = 'X';
        turn = 'O';
    }
    else if (turn == 'O') {
        cout << "Player 2, enter your move: ";
        cin >> choice;
        square[choice] = 'O';
        turn = 'X';
    }

}
bool checkwin() {
    if (square[1] == square[2] && square[2] == square[3])
        return false;
    else if (square[4] == square[5] && square[5] == square[6])
        return false;
    else if (square[7] == square[8] && square[8] == square[9])
        return false;
    else if (square[1] == square[4] && square[4] == square[7])
        return false;
    else if (square[2] == square[5] && square[5] == square[8])
        return false;
    else if (square[3] == square[6] && square[6] == square[9])
        return false;
    else if (square[1] == square[5] && square[5] == square[9])
        return false;
    else if (square[3] == square[5] && square[5] == square[7])
        return false;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {
        turn = 'D';
        return false;
    }
}
void board() {
    system("cls");
    cout << "\n\n            TickTacToe \n\n";
    cout << "   Player 1 = x    Player 2 = o" << endl;
    cout << "           |         |         " << endl;
    cout << "      " << square[1] << "    |    " << square[2] << "    |    " << square[3] << endl;
    cout << "           |         |         " << endl;
    cout << "  - - - - - - - - - - - - - - - " << endl;
    cout << "           |         |         " << endl;
    cout << "      " << square[4] << "    |    " << square[5] << "    |    " << square[6] << endl;
    cout << "           |         |         " << endl;
    cout << "  - - - - - - - - - - - - - - - " << endl;
    cout << "           |         |         " << endl;
    cout << "      " << square[7] << "    |    " << square[8] << "    |    " << square[9] << endl;
    cout << "           |         |         " << endl;
}

