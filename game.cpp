#include <iostream>
using namespace std;

int main() {
    int points = 0;
    int answer[4];
    cout << "Complete the array \n\n";
    cout << "1,1,2,3,???\n";
    cin >> answer[0];
    cout << "Complete the array \n\n";
    cout << "2,4,16,32,???\n";
    cin >> answer[1];
    cout << "Complete the array \n\n";
    cout << "10,20,30,40,???\n";
    cin >> answer[2];
    cout << "Complete the array \n\n";
    cout << "3,9,27,81,???\n";
    cin >> answer[3];

    int array[4][5] = {
        {1,1,2,3,4},
        {2,4,16,32,64},
        {10,20,30,40,50},
        {3,9,27,81,243}
    };

    if (answer[0] == array[0][4]) {
        points++;
    }
    if (answer[1] == array[1][4]) {
        points++;
    }
    if (answer[2] == array[2][4]) {
        points++;
    }
    if (answer[3] == array[3][4]) {
        points++;
    }

    cout << "Your points are " << points << " out of 4\n";
    return 0;
}
