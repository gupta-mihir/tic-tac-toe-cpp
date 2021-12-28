//
//  main.cpp
//  tic-tac-toe
//
//  Created by Mihir Gupta on 12/27/21.
//

#include <iostream>
#include <string>

using namespace std;

void print_board();

void place_peice();

char b_arr[3][3] = {' ',' ',' ',' ',' '
    ,' ',' ',' ',' '};

int main() {
    
    print_board();
    return 0;
}

void print_board() {
    cout << b_arr[0][0] << "|";
    cout << b_arr[0][1] << "|";
    cout << b_arr[0][2] << endl;
    cout << "-----" << endl;
    cout << b_arr[1][0] << "|";
    cout << b_arr[1][1] << "|";
    cout << b_arr[1][2] << endl;
    cout << "-----" << endl;
    cout << b_arr[2][0] << "|";
    cout << b_arr[2][1] << "|";
    cout << b_arr[2][2] << endl;
}
