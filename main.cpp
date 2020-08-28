#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
//    const float PI = 3.1459;
//    variables like function calls
//int i(3), j(20);
// modulo operator
//50 % 2;
//carefull with division
// 5 / 2 = 2 not 2.5
// 5.0 / 2 = 2.5  dividend type must be double or floating point to expect floating point result
//multi assignment in single call
//same as l = 9 and k = l
//cout << i * j << endl;
//    console output using << out operator
// use see-out << for multiple output data to the console
//    cout << "Hello, World!" << std::endl;
//    int radius;
//    cout << "Input the radius to calculate for" << endl;
//    console input use see-in operator >>
//    cin >> radius;
//    cout << "Area is" << " " << PI * radius * radius << endl;
//    return 0;


// sizeof function to get the size of common data type
//cout << sizeof(int) << endl;
//cout << sizeof(4.67) << endl;
// returns the sizes in bytes

//numeric literals
//int figure = 5; // literal

// power
//cout << pow(5, 6) << endl;
//cout << sin(30) << endl;
//cout << abs(-30) << endl;
//cout << floor(3.0) << endl;
//cout << (time(0) /60) % 60 << endl;

// time and date
//
//// Obtain the total seconds since the midnight, Jan 1, 1970
//    int totalSeconds = time(0);
//// Compute the current second in the minute in the hour
//    int currentSecond = totalSeconds % 60;
//// Obtain the total minutes
//    int totalMinutes = totalSeconds / 60;
//// Compute the current minute in the hour
//    int currentMinute = totalMinutes % 60;
//// Obtain the total hours
//    int totalHours = totalMinutes / 60;
//// Compute the current hour
//    int currentHour = totalHours % 24;
//// Display results
//    cout << "Current time is " << currentHour << ":"
//         << currentMinute << ":" << currentSecond << " GMT" << endl;
//

//    converting to types using static cast
// sizeof for checking the byte size

//    cout << sizeof(static_cast<double >(5)) << endl;

//    c-style type casting
// truncated the number after decimal points

// widening and narrowing types
// casting from a wider range to a lower range is narrowing casting
//reverse is widening casting
//careful cos of loss of precission
//    cout << (int)6.7 << endl;
double cartTotal;
cout << "please input the price for total products: ";
cin >> cartTotal;

double tax = cartTotal * 0.05;
cout << "Tax on your sales is " << ((int)tax * 100) / 100.0 << endl;
    return 0;
}
