#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double a = 3;
    double b = -4;
    double c = 9;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (b + sqrt(discriminant)) / (2 * a);
        double x2 = (b - sqrt(discriminant)) / (2 * a);
        cout << "Уравнение имеет два корня:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Уравнение имеет один корень:\n";
        cout << "x = " << x << "\n";
    }
    else {
        cout << "Уравнение не имеет действительных корней\n";
    }

    return 0;
}