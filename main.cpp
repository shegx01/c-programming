#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1459;
//    variables like function calls
int i(3), j(20);
// modulo operator
50 % 2;
//carefull with division
// 5 / 2 = 2 not 2.5
// 5.0 / 2 = 2.5  dividend type must be double or floating point to expect floating point result
//multi assignment in single call
//same as l = 9 and k = l
cout << i * j << endl;
//    console output using << out operator
// use see-out << for multiple output data to the console
    cout << "Hello, World!" << std::endl;
    int radius;
    cout << "Input the radius to calculate for" << endl;
//    console input use see-in operator >>
    cin >> radius;
    cout << "Area is" << " " << PI * radius * radius << endl;
    return 0;
}
