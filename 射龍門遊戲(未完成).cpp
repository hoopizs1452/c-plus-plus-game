#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int jackpot=0;
	int player=5;
	
	cout << "±mª÷:";
	cin >> jackpot;
	
	srand(time(0));
	for(int i=0; i<player; i++)
	{
		cout << "Player " << i+1 << ":";
	}
}

//int poker()

void initArray4(int array[])
{
  int i;
  for (i=0;i<52;i++)
  {
     array[i]=i;
  }
}
