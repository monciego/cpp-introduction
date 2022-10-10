#include <iostream>

using namespace std;

int main()
{
    double farenheitTemperature = 98.6;
    double celciusTemperature;
    celciusTemperature = (farenheitTemperature - 32) / 1.8;
    cout << farenheitTemperature << " farenheit is " << celciusTemperature << " degrees celcius.\n";
    return 0;
}