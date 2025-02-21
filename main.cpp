#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0},
    };

    //Keep track of how many hits the player has and how many turns they have played in the variables
    int hits = 0;
    int numberOfTurns = 0;

    //Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        //Ask the player for a row
        cout << "Choose a row  number between 0 and 3: ";
        cin >> row;

        //Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        //Check if a ship exists in those coordinates
        if (ships[row][column]) {
            ships[row][column] = 0;

            //Increase the hit counter
            hits++;

            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            //Tell the player that they missed
            cout << "Miss\n\n";
        }

        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in  " << numberOfTurns << " turns";
    return 0;
}
