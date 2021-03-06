#include <bits/stdc++.h>
using namespace std;

const int N = 15;
const int M = 15;
const int a_row = 5;
const int n_players = 2;
char marks[n_players] = {'X', 'O'};
char grid[N][M];

//This function prints the grid of Gomoku as the game progresses
void print_grid() {
	for (int i = 0; i< n_players; i++) {
        cout << "Player " << i+1 << ": " << marks[i] << "  ";
        if (i < n_players-1)
            cout << "vs  ";
	}
	cout << "\n";
	cout << "--";
    for (int i = 0; i < M; cout << "---", i++);
    cout << "--\n";
    for (int i = 0; i < N; i++) {
        cout << "|  ";
        for (int j = 0; j < M; j++)
            cout << grid[i][j] << "  ";
        cout << "|\n";
        cout << "--";
        for (int i = 0; i < M; cout << "---", i++);
        cout << "--\n";
    }
}
//This function checks if the game has a win state or not
bool check_win() {

}
//This function checks if row or column or diagonal is full with same characters
bool check_tie(char mark) {

}
//This function checks if given cell is empty or not 
bool check_empty(int i, int j) {

}
//This function checks if given position is valid or not 
bool check_valid_position(int i, int j) {

}
//This function sets the given mark to the given column
void set_cell(int i, int j, char mark) {

}
//This function clears the game structures
void grid_clear() {

}
//This function reads a valid position input
void read_input(int &i, int &j) {

}
//MAIN FUNCTION
void play_game() {
    cout << "Gomoku Game!\n";
    cout << "Welcome...\n";
    cout << "============================\n";
    int player = 0;
    while (true) {
        //Prints the grid
        print_grid();
        //Read an input from the player
        cout << "Player " << marks[player] << " is playing now\n";
        int i, j;
		read_input(i, j);
        //Set the input position with the mark
        set_cell(i, j, marks[player]);
        //Check if the state of the grid has a win state
        if (check_win()) {
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Congrats, Player " << marks[player] << " is won!\n";
            break;
        }
        //Check if the state of the grid has a tie state
        if (check_tie(marks[player])) {
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Woah! That's a tie!\n";
            break;
        }
        //Player number changes after each turn
        player = (player + 1) % n_players;
    }
}
int main() {
    while (true) {
    	grid_clear();
    	play_game();
    	char c;
    	cout << "Play Again [Y/N] ";
    	cin >> c;
    	if (c != 'y' && c != 'Y')
    		break;
    }
}
