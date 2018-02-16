#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//global variables

char continuation, condition, operation;
int x, y;

void retrieveXAndY()
{
    //Retrieve x and y values from user.
    cout << "Now type the first number (x): ";
    cin >> x;
    cout << "Now type the second number (y): "; 
    cin >> y;
}

void calculate()
{
    switch (operation)
    {
        case '+':
            retrieveXAndY();
            cout << x << " + " << y << " = " << x+y;
            break;
        case '-':
            retrieveXAndY();
            cout << x << " - " << y << " = " << x-y;
            break;
        case '/':
            retrieveXAndY();
            cout << x << " / " << y << " = " << (float) x/y;
            break;
        case '*':
            retrieveXAndY();
            cout << x << " * " << y << " = " << x*y;
            break;
        case '%':
            retrieveXAndY();
            cout << x << " % " << y << " = " <<  x%y;
            break;
        case 's':
            cout << "What number would you like to square root?: ";
            cin >> x;
            cout << "The square root of " << x << " is " << sqrt(x) << ".";
            break;
    }
    
}

//Portable console clearing operation.
void continueAndClear()
{

    if(continuation == 'y' || continuation == 'Y')
    {
        condition = true;
        cout << string( 100, '\n' );

    }
    else
    {
        //If user types anything other than y or capital Y then simply exit.
        condition = false;
        cout << string( 100, '\n' );
    }
}


int main()
{
    condition = true;
        
    while(condition)
    {
        //Retrieve the user's operation in the form of a char datatype.
        cout << "Do you want to do addition, division, subtraction, multiplication, modulus, or a square root operation?\n Type \"/\", \"*\", \"-\", \"+\", \"%\", or \"s\": ";
    	cin >> operation;
    
        //Determine the user's math operation through a switch.
        calculate();

    	//Ask user if they want to continue.
    	cout << "\nWould you like to continue? (y/n): "; 
        cin >> continuation;
    	
    	continueAndClear();
    	
    }
 
	return 0;
}
