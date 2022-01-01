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

void place_piece();

char b_arr[3][3] = {' ',' ',' ',' ',' '
    ,' ',' ',' ',' '};

int main() {
    
    print_board();
    place_piece();
    cout << endl;
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

void place_piece() {
    int location = 0;
    char symbol = ' ';
    cout << "Where do you want to place your peice? (1 - 9)" << endl;
    cin >> location;
    
    cout << "What is your symbol? (X or O)" << endl;
    cin >> symbol;
    if (symbol == 'X') {
        if (location == 1) {
            if (b_arr[0][0] == ' ') {
                b_arr[0][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 2){
            if (b_arr[0][1] == ' ') {
                b_arr[0][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 3){
            if (b_arr[0][2] == ' ') {
                b_arr[0][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 4){
            if (b_arr[1][0] == ' ') {
                b_arr[1][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 5){
            if (b_arr[1][1] == ' ') {
                b_arr[1][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 6){
            if (b_arr[1][2] == ' ') {
                b_arr[1][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 7){
            if (b_arr[2][0] == ' ') {
                b_arr[2][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 8){
            if (b_arr[2][1] == ' ') {
                b_arr[2][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else {
            if (b_arr[2][2] == ' ') {
                b_arr[2][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
            
        }
    }
    else {
        if (location == 1) {
            if (b_arr[0][0] == ' ') {
                b_arr[0][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 2){
            if (b_arr[0][1] == ' ') {
                b_arr[0][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 3){
            if (b_arr[0][2] == ' ') {
                b_arr[0][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 4){
            if (b_arr[1][0] == ' ') {
                b_arr[1][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 5){
            if (b_arr[1][1] == ' ') {
                b_arr[1][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 6){
            if (b_arr[1][2] == ' ') {
                b_arr[1][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 7){
            if (b_arr[2][0] == ' ') {
                b_arr[2][0] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else if (location == 8){
            if (b_arr[2][1] == ' ') {
                b_arr[2][1] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
        }
        else {
            if (b_arr[2][2] == ' ') {
                b_arr[2][2] = 'X';
            }
            else {
                cout << "Invalid Location";
            }
            
        }
    }
    
    
}
