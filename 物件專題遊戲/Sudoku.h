//#pragma once
#ifndef Sudoku_H
#define Sudoku_H

class Sudoku
{
private:
	int x, y, num;
	int sudoku[9][9] = { {5, 0, 4, 0, 7, 0, 9, 0, 2}, {0, 7, 0, 1, 0, 5, 0, 4, 0},
	{1, 0, 8, 0, 4, 0, 5, 0, 7}, {0, 5, 0, 7, 0, 1, 0, 2, 0}, {4, 0, 6, 0, 5, 0, 7, 0, 1},
	{0, 1, 0, 9, 0, 4, 0, 5, 0},  {9, 0, 1, 0, 3, 0, 2, 0, 4}, {0, 8, 0, 4, 0, 9, 0, 3, 0},
	{3, 0, 5, 0, 8, 0, 1, 0, 9 } };
public:
	Sudoku(int = 0, int = 0, int = 0);
	void setNum();
	int getNum() const;
	int getSpace() const;
	void print();
	void print2();
};

#endif