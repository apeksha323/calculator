#include <iostream>
using namespace std;
int a, b;

void getData()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

void cal()
{
    char op;
    cout << "Enter operator: +, -, , /: ";
    cin >> op;

    switch (op)
    {

    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;

    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break; 
    }
}

int main()
{
    getData();
    cal();
    return 0;
}
