#include <iostream>
using namespace std;

int main() {
  // Define dimensions
  double length = 7.2;
  double width = 1.3;

  // Calculate area and perimeter
  double area = length * width;
  double perimeter = 2 * (length + width);

  // Display results
  cout << "Rectangle properties:" << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << static_cast<int>(perimeter) << endl;

  return 0;
}
