#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;

void print(string array[4][4]) //�ƦC 
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

int *change(string array[4][4]) //��P�P 
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

void shuffle(string array[][4]) //�~�P 
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

void move(string array[][4]) //���� 
{
	int *starPoint = change(array);
		int row = *starPoint;
		int col = *(starPoint+1);
		
		print(array);
		
		int input = _getch();
		switch(input)
		{
			case 72: //�W 
				if(row!=0)
					swap(array[row][col], array[row-1][col]);
				break;
			case 80: //�U 
				if(row!=3)
					swap(array[row][col], array[row+1][col]);
				break;
			case 75: //�� 
				if(col!=0)
					swap(array[row][col], array[row][col-1]);
				break;
			case 77: //�k 
				if(col!=3)
					swap(array[row][col], array[row][col+1]);	
				break;
		}
}

bool isDone(string array[][4]) //�P�_�O�_���� 
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
	string array[4][4] = {{"1","2","3","4"},{"5","6","7","8"},{"9","10","11","12"},{"13","14","15","*"}}; //��l�� 
	
	//�~�P 
	srand(time(0));
	shuffle(array);
	
	//���P�P�P�_ 
	while(true)
	{
		move(array); //���L 
		system("cls"); //�M�ŵe�� 
		if(isDone(array)) break; //�P�_���׭Y���T�θ��X�j�� 
	}
	print(array);
	cout << "Win" << endl;
	return 0;
}
