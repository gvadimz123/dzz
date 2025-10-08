
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    double length, width;
    cout << "Enter rectangle length and width: ";
    cin >> length >> width;
    cout << "Perimeter = " << 2 * (length + width)
         << ", Area = " << length * width << endl;

    const double RATE = 90.0;
    double rub;
    cout << "Enter amount in rubles: ";
    cin >> rub;
    cout << "Equivalent in dollars: " << rub / RATE << endl;

    int num = rand() % 100;
    int guess;
    cout << "Guess the number (0–99): ";
    cin >> guess;
    cout << boolalpha << (guess == num) << " (the number was " << num << ")" << endl;

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII code: " << int(ch)
         << ", Next character: " << char(ch + 1) << endl;

    int minutes;
    cout << "Enter number of minutes: ";
    cin >> minutes;
    cout << minutes / 60 << " hours " << minutes % 60 << " minutes" << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool inRange = (n >= 0 && n <= 10) && (n >= 5 && n <= 15);
    cout << "Belongs to both intervals [0,10] and [5,15]? "
         << boolalpha << inRange << endl;

    int x = 5, y = 10, temp;
    temp = x; x = y; y = temp;
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double avg = (a + b + c) / 3;
    cout << "Average (integer): " << int(avg)
         << ", Average (decimal): " << avg << endl;

    double A, B;
    cout << "Enter coefficients a and b: ";
    cin >> A >> B;
    if (A != 0)
        cout << "x = " << -B / A << endl;
    else
        cout << "No solution (a = 0)" << endl;

    string name;
    int age, fav;
    cout << "Enter your name, age, and favorite number: ";
    cin >> name >> age >> fav;
    cout << "Hello, " << name << "! You are " << age
         << " years old and your favorite number is " << fav << "." << endl;

    return 0;
}
