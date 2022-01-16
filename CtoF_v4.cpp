#include <iostream>
#include <windows.h>
/*
Name: Abdul E.
Description: Celsius to Fahrenheit
Created: 2019-09-13
Modified: 2019-12-11
*/
using namespace std;
int menu();
float celsiusToFahrenheit(float);
float fahrenheitToCelsius(float);
int main()
{   float userInput = 0;
    int userChoice = menu();
    while (userChoice != 3)
    {   switch (userChoice)
        {   case 1:
                cout << "What temperature do you want converted from celsius to fahrenheit? " << endl;
                cin >> userInput;
                cout << userInput << " in fahrenheit is " << celsiusToFahrenheit(userInput) << endl;
                system("PAUSE");
                break;
            case 2:
                cout << "What temperature do you want converted from celsius to fahrenheit? " << endl;
                cin >> userInput;
                cout << userInput << "in fahrenheit is " << fahrenheitToCelsius(userInput) << endl;
                system("PAUSE");
                break;
        }
        userChoice = menu();
    }
    return 0;
}
int menu() // is meant to show up at the start and let users pick between which conversion they want
{	int menuStart = 0;
	int menuSize = 3;
	string menuOutput[3] = {") Celsius to Fahrenheit", ") Fahrenheit to Celsius",
                            ") exit"};
	system("CLS");
	do
	{   cout << "Whatcha wanna do. " << endl;
	for (int i = 0; i < menuSize; i++)
        {	cout << i+1 << menuOutput[i] << endl;
        }
        cin >> menuStart;
        if (menuStart == menuSize)
        {   cout << "peace" << endl;
        }
        else if (menuStart < 1 || menuStart > menuSize)
        {   cout << "Please input a valid response" << endl;
            system ("PAUSE");
        }
    }while (menuStart < 1 || menuStart > menuSize);
    return menuStart;
}
float celsiusToFahrenheit(float userInput)
{   return userInput * (9.0/5.0) + 32;
}
float fahrenheitToCelsius(float userInput)
{   return (userInput - 32)  * 5.0/9.0;
}
