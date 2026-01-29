//Calculator using switch case
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    int op;

    cout << "Choose operation:\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n";
    cin >> op;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    switch(op)
    {
        case 1:
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;

        case 2:
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;

        case 3:
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;

        case 4:
            if(num2 == 0)
                cout << "Cannot divide by zero!" << endl;
            else
                cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

