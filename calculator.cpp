//This code +is made by SadCat
#include <iostream>

using std::cin;
using std::cout;

void plus(int x, int y, int result)
{
 result = x + y;
 cout << x << "+" << y << "=" << result;
}
void minus(int x, int y, int result)
{
 result = x - y;
 cout << x << "-" << y << "=" << result;
}
void times(int x, int y, int result)
{
 result = x * y;
 cout << x << "*" << y << "=" << result;
}
void divided(int x, int y, int result)
{
 result = x / y;
 cout << x << "/" << y << "=" << result;
}

int main()
{
    int x;
    int y;
    int number;
    int result;
    cout << "Pick one\n 1 - +\n 2 - -\n 3 - *\n 4 - /\n";
    cin >> number;
    if(number == 1) //this is for +
    {
        cout << "Put the first number\n";
        cin >> x;
        cout << "Put the second number\n";
        cin >> y;
        plus(x, y, result); //this is a void
    }
    else if(number == 2) //this is for -
    {
      cout << "Put the first number\n";
        cin >> x;
        cout << "Put the second number\n";
        cin >> y;
        minus(x, y, result); //this is a void
    }
    else if (number == 3) //this is for *
    {
        cout << "Put the first number\n";
        cin >> x;
        cout << "Put the second number\n";
        cin >> y;
        times(x, y, result);
    }
     else if (number == 4) //this is for /
    {
        cout << "Put the first number\n";
        cin >> x;
        cout << "Put the second number\n";
        cin >> y;
        divided(x, y, result); //this is a void
    }

    return 0;
}