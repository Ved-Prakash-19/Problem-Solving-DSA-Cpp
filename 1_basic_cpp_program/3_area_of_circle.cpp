#include <iostream>
using namespace std;

int main() {
    float radius, area;
    cout << "Enter the radius of circle: ";
    cin >> radius;

    area = 3.14159 * radius * radius;
     
    cout << "Area of the circle is: " << area << endl;

    return 0;
}
