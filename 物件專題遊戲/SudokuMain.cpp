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
			cout << "�A�٦��Ѿl " << s.getSpace() << " �ӪŮ�|����!!" << endl;
	}
	cout << "Congratulations!!���ߧA�L��~~" << endl;
	
	system("pause");
	return 0;
}