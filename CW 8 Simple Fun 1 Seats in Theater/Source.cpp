#include<iostream>
using namespace std;

int seats_in_theater(const int total_col,const  int total_row,const int col,const int row) {
	return (total_col-col+1)*(total_row-row);
}
int main() {
	int tcol = 16;
	int trow = 11;
	int col = 5;
	int row = 3;
	cout << seats_in_theater(tcol, trow, col, row) << endl;
	return 0;
}