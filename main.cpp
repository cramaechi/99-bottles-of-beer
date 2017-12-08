#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void zeroToNineteen(int i); 
//Precondition: i is >=0 and <=9
//Postconditin: Outputs a number from 0 to 9.

void beerNumber(int i);
//Precondition: i is >=0 and <= 9
//Postcondition: Outputs a number from 20 to 90.

int main()
{

    for(int i = 99; i >= 1; i--)
    {
        beerNumber(i);
        cout<<" bottles of beer on the wall,\n";
        beerNumber(i);
        cout<<" bottles of beer,\n";
        cout<<"Take one down, pass it around,\n";
        beerNumber(i-1);
        cout<<" of beer on the wall.\n\n";
    }

    system("pause");
    return 0;
}

void beerNumber(int i)
{
    if (i >= 90 && i<= 99)
        cout<<"Ninety";
    else if (i >= 80 && i<= 89)
        cout<<"Eighty";
    else if(i >= 70 && i<= 79)
        cout<<"Seventy";
    else if(i >= 60 && i<= 69)
        cout<<"Sixty";
    else if(i >= 50 && i<= 59)
        cout<<"Fifty";
    else if(i >= 40 && i<= 49)
        cout<<"Forty";
    else if(i >= 30 && i<= 39)
        cout<<"Thirty";
    else if(i >= 20 && i<= 29)
        cout<<"Twenty";

    if(i%10 != 0 && i >= 20)
        cout<<"-";

    zeroToNineteen(i);
}

void zeroToNineteen(int i)
{
    if (i >= 20)
    {   
        i = i%10;
        switch(i)
        {
            case 0:
                cout<<"";
                break;
            case 1:
                cout<<"one";
                break;
            case 2:
                cout<<"two";
                break;
            case 3:
                cout<<"three";
                break;
            case 4:
                cout<<"four";
                break;
            case 5:
                cout<<"five";
                break;
            case 6:
                cout<<"six";
                break;
            case 7:
                cout<<"seven";
                break;
            case 8:
                cout<<"eight";
                break;
            case 9:
                cout<<"nine";
                break;
            default:
                {
                    cout<<"Fatal Error: Aborting program.";
                    exit(1);
                    break;
                }
        }
    }
    else
    {
        switch(i)
        {
            case 0:
                cout<<"Zero";
                break;
            case 1:
                cout<<"One";
                break;
            case 2:
                cout<<"Two";
                break;
            case 3:
                cout<<"Three";
                break;
            case 4:
                cout<<"Four";
                break;
            case 5:
                cout<<"Five";
                break;
            case 6:
                cout<<"Six";
                break;
            case 7:
                cout<<"Seven";
                break;
            case 8:
                cout<<"Eight";
                break;
            case 9:
                cout<<"Nine";
                break;
            case 10:
                cout<<"Ten";
                break;
            case 11:
                cout<<"Eleven";
                break;
            case 12:
                cout<<"Twelve";
                break;
            case 13:
                cout<<"Thirteen";
                break;
            case 14:
                cout<<"Forteen";
                break;
            case 15:
                cout<<"Fifteen";
                break;
            case 16:
                cout<<"Sixteen";
                break;
            case 17:
                cout<<"Seventeen";
                break;
            case 18:
                cout<<"Eighteen";
                break;
            case 19:
                cout<<"Nineteen";
                break;
            default:
                {
                    cout<<"Fatal Error: Aborting program.";
                    exit(1);
                    break;
                }
        }
    }
}
