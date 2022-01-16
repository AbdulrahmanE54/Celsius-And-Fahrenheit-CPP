#include <iostream>
#include <windows.h>
/*
Name: Abdulrahman Elmi
Description: Celsius to Fahrenheit
Date Created: 2019-09-13

Date Modified:2019-10-25
*/
using namespace std;
float fahrenheitToCelsius (float);
float celsiusToFahrenheit (float);
int menu (float);
int main()
{
    float numberToConvert = 0;
    menu(numberToConvert);
}
int menu(float numberToConvert)
{
    int initialMenuChoice = 0;
    system("CLS");
    do
    {
        cout << "Hello, what do you want to do?" << endl << "1) fahrenheit to celsius" << endl << "2) celsius to fahrenheit" << endl << "3) leave" << endl;
        cin >> initialMenuChoice; // user selects between the 3 options and exit, exit function got removed due to redundancy
        if (initialMenuChoice == 1)// then it goes into a function of choice
        {
            system("CLS");
            cout << "Input a number you want in celsius." << endl;
            cin >> numberToConvert;
            cout << "That's " <<fahrenheitToCelsius(numberToConvert) << " in celsius. " << endl;
            system("PAUSE");
            main();
        }
        else if (initialMenuChoice == 2)
        {
            system("CLS");
            cout << "Input a number you want in fahrenheit" << endl;
            cin >> numberToConvert;
            cout << "That's " << celsiusToFahrenheit (numberToConvert) << " in fahrenheit." << endl;
            system("PAUSE");
            main();
        }
        else if (initialMenuChoice == 3)
        {
            cout << "aight, imma head out";
            return 0;
        }
        else
        {
            cout << "YOU HAVE TO INPUT 1-3 YOU dumbUS" << endl;
            system ("PAUSE");
            system ("CLS");
        }
    }
    while (initialMenuChoice >3 || initialMenuChoice < 1); // forces user to put in correct answer
}
float celsiusToFahrenheit (float numberToConvert)
{
   return numberToConvert * (9.0/5.0) + 32;
}
float fahrenheitToCelsius (float numberToConvert)
{
    return (numberToConvert - 32) * 5.0/9.0;
}
