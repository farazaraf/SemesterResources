#include <iostream>
using namespace std;
struct dimension{
    double length;
    double width;
};
struct results{
    double area;
    double perimeter;
};
struct rectangle{
    dimension x;
    results y;
};
int main()
{
    rectangle rec;
    cout << "|Finding The Area and Perimeter of A Rectangle|" << endl
         << "Enter Length of Rectangle and Then Width: "; cin >> rec.x.length >> rec.x.width;
    cout << "\nArea of a Rectangle is: Length x Width\nPerimeter of Rectangle is: 2*(length+width)\n";
    rec.y.area = rec.x.length * rec.x.width;
    rec.y.perimeter = 2 * ( rec.x.length + rec.x.width ) ;
    cout << "\nArea = " << rec.y.area
         << "\nPerimeter = " << rec.y.perimeter;  }