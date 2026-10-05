// #include <iostream>
// using namespace std;

// // Inline function to convert Celsius to Fahrenheit
// inline float celsiusToFahrenheit(float c)
// {
//     return (c * 9.0 / 5.0) + 32;
// }

// // Inline function to convert Fahrenheit to Celsius
// inline float fahrenheitToCelsius(float f)
// {
//     return (f - 32) * 5.0 / 9.0;
// }

// int main()
// {
//     float celsius, fahrenheit;

//     cout << "Enter temperature in Celsius: ";
//     cin >> celsius;

//     cout << "Temperature in Fahrenheit = "
//          << celsiusToFahrenheit(celsius) << endl;

//     cout << "\nEnter temperature in Fahrenheit: ";
//     cin >> fahrenheit;

//     cout << "Temperature in Celsius = "
//          << fahrenheitToCelsius(fahrenheit) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// float average(float s1, float s2, float s3 = 0, float s4 = 0, float s5 = 0) {
//     return (s1 + s2 + s3 + s4 + s5) / 5;
// }

// int main() {
//     cout << "Average of 2 subjects = "
//          << average(80, 90) << endl;

//     cout << "Average of 3 subjects = "
//          << average(80, 90, 70) << endl;

//     cout << "Average of 4 subjects = "
//          << average(80, 90, 70, 60) << endl;

//     cout << "Average of 5 subjects = "
//          << average(80, 90, 70, 60, 50) << endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

// Function 1
void checkVote(int age)
{
    if(age >= 18)
        cout << "Eligible to Vote." << endl;
    else
        cout << "Not Eligible to Vote." << endl;
}

// Function 2 (Overloaded)
void checkVote(int age, string post)
{
    if(age >= 18)
        cout << "Eligible to Vote for " << post << "." << endl;
    else
        cout << "Not Eligible to Vote for " << post << "." << endl;
}

int main()
{
    checkVote(17);

    checkVote(20, "College President");

    return 0;
}