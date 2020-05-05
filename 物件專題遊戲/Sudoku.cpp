#include <iostream>
#include <iomanip>
#include "Sudoku.h"
using namespace std;;

Sudoku::Sudoku(int x1, int y1, int num1)
{
	x = x1 - 1;
	y = y1 - 1;
	num = num1;
}

void Sudoku::setNum()
{
	sudoku[x][y] = num;
}

int Sudoku::getNum() const
{
	return sudoku[0][0];
}

int Sudoku::getSpace() const
{
	int count = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (sudoku[i][j] == 0)
				count++;
		}
	}
	return count;
}

void Sudoku::print()
{
	cout << setw(14) << "1   ";
	for (int k = 2; k <= 9; k++)
	{
		cout << k << "   ";
	}
	cout << "\n\n";
	for (int i = 0; i < 9; i++)
	{
		cout << setw(5) << i+1 << "-->";
		cout << setw(2) << "| ";
		for (int j = 0; j < 9; j++)
		{
			if (sudoku[i][j] == 0)
				cout << " " << " | ";
			else
				cout << sudoku[i][j] << " | ";
		}
		cout << endl;
	}
}

void Sudoku::print2()
{
	sudoku[x][y] = num;
	cout << setw(14) << "1   ";
	for (int k = 2; k <= 9; k++)
	{
		cout << k << "   ";
	}
	cout << "\n\n";
	for (int i = 0; i < 9; i++)
	{
		cout << setw(5) << i + 1 << "-->";
		cout << setw(2) << "| ";
		for (int j = 0; j < 9; j++)
		{
			if (sudoku[i][j] == 0)
				cout << " " << " | ";
			else
				cout << sudoku[i][j] << " | ";
		}
		cout << endl;
	}
}