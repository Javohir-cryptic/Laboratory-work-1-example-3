#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c, x1, x2, discriminant, realPart, imajinaryPart;
    cout << "Введите коэффициенты a, b, и c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Корни являются вещественными и они разные" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "Корни являются вещественными и одинаковые" << endl;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b / (2 * a);
        imajinaryPart = sqrt(discriminant) / (2 * a);
        cout << "Корни являются комплексными и разными" << endl;

        cout << "x1 = " << realPart << "+" << imajinaryPart <<
            "i" << endl;
        cout << "x2 = " << realPart << "-" << imajinaryPart <<
            "i" << endl;
    }
    return 0;
}
