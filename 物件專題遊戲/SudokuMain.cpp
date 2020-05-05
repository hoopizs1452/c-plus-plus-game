#include <iostream>
#include "Sudoku.h"
using namespace std;

int main()
{
	int x = 1, y = 1, num = 0;
	Sudoku s1;
	num = s1.getNum();
	s1.print();

	bool count = false;
	while (count != true)
	{
		cin >> x >> y >> num;
		Sudoku s(x, y, num);
		s.print2();
		if (s.getSpace() == 0)
		{
			count = true;
		}
		else
			cout << "你還有剩餘 " << s.getSpace() << " 個空格尚未填!!" << endl;
	}
	cout << "Congratulations!!恭喜你過關~~" << endl;
	
	system("pause");
	return 0;
}