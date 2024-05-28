#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double a, b;
  int choice;
  char right;
  do {
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Choose your option: " << endl;
    cout << "<1> Add" << endl;
    cout << "<2> Subtract" << endl;
    cout << "<3> Multiply" << endl;
    cout << "<4> Divide" << endl;
    cout << "<5> Find power" << endl;
    cout << "<6> Round down" << endl;
    cout << "<7> Round up" << endl;
    cout << "<8> Find logarithim" << endl;
    cout << "<9> Square root" << endl;
    cout << "You chose option:  ";
    cin >> choice;

    switch (choice) {
    case 1:
      cout << "Your result is: " << a + b << endl;
      break;
    case 2:
      cout << "Your result is: " << a - b << endl;
      break;
    case 3:
      cout << "Your result is: " << a * b << endl;
      break;
    case 4:
      cout << "Your result is: " << a / b << endl;
      break;
    case 5:
      cout << "Your result is: " << pow(a, b) << endl;
      break;
    case 6:
      cout << "Your result is: " << floor(a + b) << endl;
      break;
    case 7:
      cout << "Your result is: " << ceil(a + b) << endl;
      break;
    case 8:
      cout << "Your result is: " << log(b) / log(a) << endl;
      break;
    case 9:
      cout << "Your result is: " << sqrt(a + b) << endl;
      break;
    default:
      cout << "Not an option" << endl;
      break;
    }
    cout << "Would you like to enter a new number? (Y/N): ";
    cin >> right;
    cout << endl;

  } while (right != 'N' && right != 'n');
  cout << "Have a great day!" << endl;
}