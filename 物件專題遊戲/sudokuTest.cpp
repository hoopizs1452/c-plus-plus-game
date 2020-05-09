#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int x, y, num;
    int count = 0;
    bool space = false;
    int sudoku[9][9] = { {5, 0, 4, 0, 7, 0, 9, 0, 2}, {0, 7, 0, 1, 0, 5, 0, 4, 0},
	{1, 0, 8, 0, 4, 0, 5, 0, 7}, {0, 5, 0, 7, 0, 1, 0, 2, 0}, {4, 0, 6, 0, 5, 0, 7, 0, 1},
	{0, 1, 0, 9, 0, 4, 0, 5, 0},  {9, 0, 1, 0, 3, 0, 2, 0, 4}, {0, 8, 0, 4, 0, 9, 0, 3, 0},
	{3, 0, 5, 0, 8, 0, 1, 0, 9 } };

    while(true)
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
                if(sudoku[i][j] == 0)
                {
                    cout << " " << " | ";
                    //count++;
                }
                else
                {
                    cout << sudoku[i][j] << " | ";
                }
                
		    }
		    cout << endl;
	    }
//        if(count != 0)
//			cout << "你還有 " << count << " 個空格尚未填寫!!" << endl;
//		else
//		{
//			cout << "恭喜你過關!!" << endl;
//			space = true;
//		}
        
        cout << "第一個請先輸入有-->的數字， 第二個輸入最上面的數字， 第三個請輸入你要填入的數字: ";
        cin >> x >> y >> num;
        
        if(sudoku[x][y] != 0 || num < 0 || num > 9)
        	cout << "Error!!" << endl;
        else
        	sudoku[x-1][y-1] = num;

        system("cls");
    }
}
