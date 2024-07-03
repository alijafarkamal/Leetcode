#include<iostream>
using namespace std;
//const int ROWS = 100;
//const int COLS = 100;
# define ROWS 100
# define COLS 100

int paths(int arr[][COLS],int row, int col, int maxMove, int startR, int startC) {
	int sum = 0;
	
	bool True = false;
	int Mover = 0;

	
		for (int j = startC; True==0 && Mover<=maxMove; Mover++,j++) 
			if (arr[startR][j] != 2 || arr[startR][j] != 1) {
				sum++;
				True = true;
			}
	
	Mover = 0;
	True = false;
	
		for (int j = startC; !True && Mover <= maxMove; Mover++,j--) 
			if (arr[startR][j] != 2 || arr[startR][j] != 1) {
				sum++;
				True = true;
			}
		
	True = false;
	Mover = 0;

	for (int i = startR; !True && Mover <= maxMove; Mover++,i--)
		if (arr[i][startC] != 2 || arr[i][startC] != 1) {
				sum++;
				True = true;
			}
	Mover = 0;
	True = false;

	for (int i = startR; !True && Mover <= maxMove; Mover++,i++)	
		if (arr[i][startC] != 2 || arr[i][startC] != 1) {
				sum++;
				True = true;
			}
	True = false;
	Mover = 0;

	//cout << arr[++startR][++startC];
	
	for (int i = startR, j = startC; True==0 && Mover < maxMove; i++,j++) {
	  Mover += 2;
		if (arr[i][j] != 2 || arr[i][j] != 1 && Mover < maxMove) {
			sum++;
			True = true;
			break;
		}
	}
	
	True = false;
	Mover = 0;
	for (int i = startR, j = startC; !True && Mover < maxMove; Mover += 2, i--, j++) {
		if (arr[i][j] != 2 || arr[i][j] != 1) {
			sum++;
			True = true;
		}
	}
	True = false;
	Mover = 0;
	if(startR!= 10 && startC!=10)
	for (int i = startR, j = startC; !True && Mover < maxMove ; Mover += 2, i--, j--) {
		if (arr[i][j] != 2 || arr[i][j] != 1) {
			sum++;
			True = true;
		}
	}
	True = false;
	Mover = 0;
	for (int i = startR, j = startC; !True && Mover < maxMove; Mover += 2, i++, j--) {
		if (arr[i][j] != 2 || arr[i][j] != 1) {
			sum++;
			True = true;
		}
	}
	return sum;
}



int main() {

	
	int arr[ROWS][COLS];
	int row = 0;
	int col= 0;
	cout << "Enter number of rows : \n";
	cin >> row;
	cout << endl;
	cout << "Enter number of columns : \n";
	cin >> col;
	cout << endl;
	row += 10;
	col += 10;
	for (int i = 10; i < row; i++)
		for (int j = 10; j < col; j++)
			arr[i][j] = 1;


	int maxMove= 0;
	int startRow= 0;
	int startCol= 0;
	cout << "Enter maximum move : \n";
	cin >> maxMove;
	cout << endl;
	cout << "Enter  starting row : \n";
	cin >> startRow;
	cout << endl;
	cout << "Enter  starting column : \n";
	cin >> startCol;
	cout << endl;
	startRow += 10;
	startCol += 10;
	arr[startRow][startCol] = 2;

	
	
	cout << "Total paths = " << paths(arr, row, col, maxMove, startRow, startCol) << endl;


	system("pause");
	return 0;
}