#include <iostream>
#include <iomanip>
using namespace std;

const int size = 52;

int main()
{
    for(int i=1; i<=size; i++)
    {
        if(i>=1 && i<=13)
            cout << setw(8) << "spade";
        else if(i>=14 && i<=26)
            cout << setw(8) << "heart";
        else if(i>=27 && i<=39)
            cout << setw(8) << "diamond";
        else if(i>=40 && i<=52)
            cout << setw(8) << "club";
        if(i%13==1)
            cout << setw(4) << "A";
        else if(i%13==11)
            cout << setw(4) << "J";
        else if(i%13==12)
            cout << setw(4) << "Q";
        else if(i%13==0)
            cout << setw(4) << "K";
        else
            cout << setw(4) << i%13;
        cout << endl;
        
    }
}