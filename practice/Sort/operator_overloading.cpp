#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len = 0.0, double wid = 0.0) : length(len), width(wid) {}

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    int n;

    std::cin >> n;

    double length, width;
    double smallestPerimeter = -1;
    Rectangle smallestRectangle;

    for (int i = 1; i <= n; ++i) {
        std::cin >> length >> width;

        Rectangle rectangle(length, width); // Basic to class type conversion

        double perimeter = rectangle.getPerimeter();
        std::cout << "Perimeter of rectangle " << i << ": " << perimeter << std::endl;

        if (smallestPerimeter == -1 || perimeter < smallestPerimeter) {
            smallestPerimeter = perimeter;
            smallestRectangle = rectangle;
        }
    }

//    std::cout << "Perimeter of the smallest rectangle: " << smallestRectangle.getPerimeter();
    std::cout << "Perimeter of the smallest rectangle: " << smallestPerimeter ;

    return 0;
}

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//class WeatherData {
//private:
//    double celsius;
//
//public:
//    WeatherData(double c = 0.0) : celsius(c) {}
//
//    double getFahrenheit() const {
//        return (celsius * 9 / 5) + 32;
//    }
//
//    WeatherData operator+() const {
//        return *this;
//    }
//
//    WeatherData operator-() const {
//        return WeatherData(-getFahrenheit());
//    }
//};
//
//int main() {
//    double celsius;
//    cin >> celsius;
//
//    WeatherData temp(celsius);
//
//
//    WeatherData tempFahrenheit = +temp;
//    cout << fixed << setprecision(1) << tempFahrenheit.getFahrenheit() << "°F" << endl;
//
//    WeatherData tempNegativeFahrenheit = -temp;
//    cout << fixed << setprecision(1) << tempNegativeFahrenheit.getFahrenheit() << "°F";
//
//    return 0;
//}
