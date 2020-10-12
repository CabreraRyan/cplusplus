#include <iostream>

using namespace std;

int main()
{

    int length;
    int width;

    cout << "Enter the value of the Length: ";
    cin >> length;

    cout << "Enter the value of the Width: ";
    cin >> width;

    int area = length * width;
    int perimeter = (length + width) * 2;

    cout << "The area is " << area << ", while the perimeter is " << perimeter;

}
