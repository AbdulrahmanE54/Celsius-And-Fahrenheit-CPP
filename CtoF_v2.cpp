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
    double choiceBetween = 0;
    while ( ( choiceBetween  !=1 ) && (choiceBetween !=2) )
    {
        system("CLS");
        cout << "Hello" << endl << "What do you want to convert?" << endl;
        cout << "1) Celsius to Fahrenheit" << endl;
        cout << "2) Fahrenheit to Celsius" << endl;
        cin >> choiceBetween;
        system ("CLS");
        if ( choiceBetween  <=0 )
        {
            cout << "too low, please try again" << endl;
            system("PAUSE");
        }
        if ( choiceBetween >=3 )
        {
            cout << " too high, please try again" << endl;
            system("PAUSE");
        }
    }
        system("CLS");
        if (choiceBetween == 1)
        {
                cout << "Enter which temperature you want in fahrenheit" << endl;
                cin >> tempFahrenheit;
                system("CLS");
                cout << tempFahrenheit << " degrees in fahrenheit is ";
                tempFahrenheit = (tempFahrenheit - 32) * 5.0/9.0;
                cout << tempFahrenheit << " degrees" << endl;
                system("PAUSE"); system("CLS");
         }
         if (choiceBetween == 2)
         {
                cout << "Enter which temperature you want in celsius" << endl;
                cin >> tempCelsius;
                system("CLS");
                cout << tempCelsius << " degrees in celsius is ";
                tempCelsius = tempCelsius * (9.0/5.0) + 32;
                cout << tempCelsius << " degrees" << endl;
                system("PAUSE"); system("CLS");
         }
        cout << "thanks for using this calculator i guess" << endl;
        system("PAUSE");
        return 0;
}
