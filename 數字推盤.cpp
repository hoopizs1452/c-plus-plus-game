#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;

void print(string array[4][4]) //排列 
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout << setw(5) << array[i][j];
		}
		cout << "\n\n";
	}
}

int *change(string array[4][4]) //找星星 
{
	int *point = new int[2];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(array[i][j] =="*")
			{
				point[0] = i;
				point[1] = j;
				return point;
			}
		}
	}
}

void shuffle(string array[][4]) //洗牌 
{
	for(int i=0; i<1000; i++)
	{
		int *starPoint = change(array);
		int row = *starPoint;
		int col = *(starPoint+1);
		switch(rand()%4)
		{
			case 0:
				if(row!=0)
					swap(array[row][col], array[row-1][col]);
				break;
			case 1:
				if(row!=3)
					swap(array[row][col], array[row+1][col]);
				break;
			case 2:
				if(col!=0)
					swap(array[row][col], array[row][col-1]);
				break;
			case 3:
				if(col!=3)
					swap(array[row][col], array[row][col+1]);	
				break;
		}
	}
}

void move(string array[][4]) //移動 
{
	int *starPoint = change(array);
		int row = *starPoint;
		int col = *(starPoint+1);
		
		print(array);
		
		int input = _getch();
		switch(input)
		{
			case 72: //上 
				if(row!=0)
					swap(array[row][col], array[row-1][col]);
				break;
			case 80: //下 
				if(row!=3)
					swap(array[row][col], array[row+1][col]);
				break;
			case 75: //左 
				if(col!=0)
					swap(array[row][col], array[row][col-1]);
				break;
			case 77: //右 
				if(col!=3)
					swap(array[row][col], array[row][col+1]);	
				break;
		}
}

bool isDone(string array[][4]) //判斷是否完成 
{
	string ans[4][4] = {{"1","2","3","4"},{"5","6","7","8"},{"9","10","11","12"},{"13","14","15","*"}};
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(array[i][j] != ans[i][j])
				return false;
		}
	}
	
	return true;
}

int main()
{
	string array[4][4] = {{"1","2","3","4"},{"5","6","7","8"},{"9","10","11","12"},{"13","14","15","*"}}; //初始化 
	
	//洗牌 
	srand(time(0));
	shuffle(array);
	
	//推牌與判斷 
	while(true)
	{
		move(array); //推盤 
		system("cls"); //清空畫面 
		if(isDone(array)) break; //判斷答案若正確及跳出迴圈 
	}
	print(array);
	cout << "Win" << endl;
	return 0;
}
