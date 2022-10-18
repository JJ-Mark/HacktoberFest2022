#include<iostream>
using namespace std;

double CelciusToFahrenheit(double x)
{
    double fin;
    fin = x*1.8 + 32;
    return fin;
}

double FahrenheitToCelcius(double x)
{
    double fin;
    fin = (5*x - 160)/9;
    return fin;
}

double CelciusToKelvin(double x)
{
    double fin;
    fin = x + 273.15;
    return fin;
}

double FahrenheitToKelvin(double x)
{
    double fin;
    fin = FahrenheitToCelcius(x) + 273.15;
    return fin;
}

double KelvinToCelcius(double x)
{
    double fin;
    fin = x - 273.15;
    return fin;
}

double KelvinToFahrenheit(double x)
{
    double fin;
    fin = CelciusToFahrenheit(x - 273.15);;
    return fin;
}

int main()
{
    double x;
    int choice = 10;

    cout << "Press 1 for Fahrenheit to Celcius" << endl;
    cout << "Press 2 for Celcius to Fahrenheit" << endl;
    cout << "Press 3 for Celcius to Kelvin" << endl;
    cout << "Press 4 for Fahrenheit to Kelvin" << endl;
    cout << "Press 5 for Kelvin to Celcius" << endl;
    cout << "Press 6 for Kelvin to Fahrenheit" << endl;
    cout << "Press 0 to exit program" << endl;

    while(choice != 0)
    {
        cout << "Enter choice : ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            cout << "Enter input in Fahrenheit : ";
            cin >> x;
            cout << FahrenheitToCelcius(x)  << " in Celcius"<< endl;
            break;

            case 2:
            cout << "Enter input in Celcius : ";
            cin >> x;
            cout << CelciusToFahrenheit(x) << " in Fahrenheit" << endl;
            break;

            case 3:
            cout << "Enter input in Celcius : ";
            cin >> x;
            cout << CelciusToKelvin(x) << " in Kelvin" << endl;
            break;

            case 4:
            cout << "Enter input in Fahrenheit : ";
            cin >> x;
            cout << FahrenheitToKelvin(x) << " in Kelvin" << endl;
            break;

            case 5:
            cout << "Enter input in Kelvin : ";
            cin >> x;
            cout << KelvinToCelcius(x) << " in Celcius" << endl;
            break;

            case 6:
            cout << "Enter input in Kelvin : ";
            cin >> x;
            cout << KelvinToFahrenheit(x) << " in Fahrenheit" << endl;
            break;
        }
    }

    return 0;
}