#include <iostream>
#include <windows.h>

/*
Name: Abdulrahman Elmi
Description: Fahrenheit to Celsius and Celsius to fahrneheit calculator
Date Created: 2019-09-13

Date Modified:2019-09-16
*/

//what i did on the 16th was more cleanup of the code
using namespace std;

int main()
{
    double tempFahrenheit = 0;
    double tempCelsius = 0;
    int choiceBetween = 0;

    cout << "Hello" << endl << "What do you want to convert?" << endl;

    cout << "1) Celsius to Fahrenheit" << endl;
    cout << "2) Fahrenheit to Celsius" << endl;

    cin >> choiceBetween;
/*do
{
    cout << " please input a correct value" << endl;

     system("PAUSE");


}
    while (choiceBetween  >=3 && choiceBetween <=0); */

        //I was attempting to do a "do while loop and I messed it up, Im already a bit late so I didn't want to continue going onto it

    system("CLS");

    if (choiceBetween == 1)

    {
        cout << "Enter which temperature you want in fahrenheit" << endl;

        cin >> tempFahrenheit;

        system("CLS");

        cout << tempFahrenheit << " degrees in fahrenheit is ";

        tempFahrenheit = (tempFahrenheit - 32) * 5.0/9.0;

        cout << tempFahrenheit << " degrees" << endl;

        system("PAUSE"); system("CLS")
    }

    else if(choiceBetween == 2)

    {
        cout << "Enter which temperature you want in celsius" << endl;

        cin >> tempCelsius;

        system("CLS");

        cout << tempCelsius << " degrees in celsius is ";

        tempCelsius = tempCelsius * (9.0/5.0) + 32;

        cout << tempCelsius << " degrees" << endl;

        system("PAUSE"); system("CLS");
    }

    else
    {
        system("CLS");

        cout << "invalid input, will shut down" << endl;

        system("PAUSE"); system("CLS");
    }

    cout << "thanks for using this calculator i guess, unless you did it wrong somehow" << endl;

    system("PAUSE");


    return 0;
}
