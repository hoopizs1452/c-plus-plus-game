#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

const int size = 52;

void poker(int array[], int start, int length)
{
  int i;

  for(i=start;i<start+length;i++)
  {
//  	switch(array[i]/13)
//	{
//  		case 0: cout<< setw(4)<< "\06";break;
//		case 1: cout<< setw(4)<< "\03";break;
//		case 2: cout<< setw(4)<< "\04";break;
//		case 3: cout<< setw(4)<< "\05";break;  	
//	}
	
	switch(array[i]%13)
	{
		case 12: cout<< setw(2)<< "K";break;
		case 11: cout<< setw(2)<< "Q";break;
		case 10: cout<< setw(2)<< "J";break;
		case 0: cout<< setw(2)<< "A";break;
		default: cout<< setw(2)<< array[i]%13+1;break;
	}
    cout <<" ";
  }
  cout <<endl;
}

void initArray4(int array[])
{
  int i;
  for (i=0;i<=size-1;i++)
  {
     array[i]=i;
  }
}

void randomArray4(int array[])
{
   int i,j,a,b;
   initArray4(array);
   for(j=0;j<=size-1;j++){
     a=rand()%size;

     b=array[a];
     array[a]=array[j];
     array[j]=b;
   }
}

void sortCard(int data[], int size)
{
	for ( int next = 1; next < size; next++ )
   {
      int insert = data[ next ];
      
      int moveItem = next;
	  
      while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
      {
         data[ moveItem ] = data[ moveItem - 1 ];
         moveItem--;
      }
   
      data[ moveItem ] = insert;
   }
}

int main()
{
	int jackpot;
	int player=5;
	int card[size];
	srand(time(NULL));
	randomArray4(card);
	
	cout << "彩金:";
	cin >> jackpot;
	
	for(int i=0; i<player; i++)
	{
		sortCard(&card[13*i], 13);
		cout << "Player " << i+1 << ":";
		poker(card, i*13, 2);
	}
	
	system("PAUSE");
     return 0;
}
