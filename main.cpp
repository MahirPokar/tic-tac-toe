//
//  main.cpp
//  Tictactoe
//
//  Created by Mahir Pokar on 11/04/21.
//

#include <iostream>
#include <vector>
using namespace std;
    vector<vector<char>> Board = {
    {' ', ' ', '|', ' ', ' ', '|', ' ', ' '},// 1,1 == 0, 1|| 1,2 == 0,4 || 1,3 == 0,7
    {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {' ', ' ', '|', ' ', ' ', '|', ' ', ' '},// 2,1 == 2,1|| 2,2 == 2,4 || 2,3 == 2,7
    {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {' ', ' ', '|', ' ', ' ', '|', ' ', ' '},};

void printer() {
    for(int i = 0; i < Board.size(); i++){
        for(int j = 0; j < Board[i].size(); j++){
            cout<<Board[i][j];
        }
        cout<<endl;
    }
    
}

void columnrow(int &r, int &c){
    if(c==2){
        c = 4;
    }
    if (c==3){
        c = 7;
    }
    if(r == 3){
        r = 4;
    }
    if (r == 1){
        r = 0;
    }
    
}
int askrow(){
    int r;
    cout<<"Enter the Row: ";
    cin>> r;
    return r;
}
int askcolumn(){
    int c;
    cout<<"enter the column";
    cin>> c;
    return c;
}

bool wincheck(){
    if (Board[0][1] == Board[0][4] && Board[0][4] == Board [0][7]) {
        if (Board[0][1] == ' ' || Board[0][4] == ' ' || Board [0][7] == ' '){
            return false;
        }
        if(Board[0][1] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
    }
    if (Board[2][1] == Board[2][4] && Board[2][4] == Board [2][7]) {
        if (Board[2][1] == ' ' || Board[2][4] == ' ' || Board [2][7] == ' '){
            return false;
        }
        if(Board[2][1] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
}
    if (Board[4][1] == Board[4][4] && Board[4][4] == Board [4][7]) {
        if (Board[4][1] == ' ' || Board[4][4] == ' ' || Board [4][7] == ' '){
            return false;
        }
        if(Board[4][1] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
}
    if (Board[0][1] == Board[2][1] && Board[2][1] == Board [4][1]) {
        if (Board[0][1] == ' ' || Board[2][1] == ' ' || Board [4][1] == ' '){
            return false;
        }
        if(Board[0][1] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
}
    if (Board[0][4] == Board[2][4] && Board[2][4] == Board [4][4]) {
        if (Board[0][4] == ' ' || Board[2][4] == ' ' || Board [4][4] == ' '){
            return false;
        }
        if(Board[0][4] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
    }
    if (Board[0][7] == Board[2][7] && Board[2][7] == Board [4][7]) {
        if (Board[0][7] == ' ' || Board[2][7] == ' ' || Board [4][7] == ' '){
            return false;
        }
        if(Board[0][7] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
    }
    if (Board[0][1] == Board[2][4] && Board[2][4] == Board [4][7]) {
        if (Board[0][1] == ' ' || Board[2][4] == ' ' || Board [4][7] == ' '){
            return false;
        }
        if(Board[0][1] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
    }
    if (Board[0][7] == Board[2][4] && Board[2][4] == Board [4][1]) {
        if (Board[0][7] == ' ' || Board[2][4] == ' ' || Board [4][7] == ' '){
            return false;
        }
        if(Board[0][7] == 'X'){
            cout<<"player one wins";
        }
        else{
            cout<<"player two wins";
        }
        return true;
    }

    return false;
}



int main(){
    int  row = NULL, column = NULL, turncounter = 1;
    while(turncounter <= 8){
       
        cout<<endl;
        if(turncounter % 2 != 0){
            printer();
            cout << "player one's turn"<< endl << "enter row: ";
            cin >> row;
            cout << "enter column: ";
            cin >> column;
            columnrow(row, column);
            if(Board[row][column] != ' '){
                cout<<"space already taken"<<endl;
                continue;
            }
            turncounter ++;
            Board[row][column] = 'X';
        }
        if(wincheck()){
            cout << "works";
            break;
        }

        printer();
        cout<<endl;
        if(turncounter % 2 == 0){
            cout << "player two's turn"<< endl << "enter row: ";
            cin >> row;
            cout << "enter column: ";
            cin >> column;
            columnrow(row, column);
            if(Board[row][column] != ' '){
                cout<<"space already taken"<<endl;
                continue;
            }
            turncounter ++;
            Board[row][column] = 'O';
        }
        if(wincheck()){
            cout<<endl;
            printer();
            break;
        }
    }
}


