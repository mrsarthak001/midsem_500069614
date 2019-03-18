include<iostream>
using namespace std;
	float add(float, float);
	float subtract(float, float);
	float multiply(float, float);
	float divide(float, float);

class Calculator
{
	float a, b;
public:
	float add(float, float);
	float subtract(float, float);
	float multiply(float, float);
	float divide(float, float);
};

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << add(num1, num2);
            break;

        case '-':
            cout << subtract(num1, num2);
            break;

        case '*':
            cout << multiply(num1, num2);
            break;

        case '/':
            cout <<  divide(num1, num2);
            break;

        default:

            cout << "Error! operator is not correct";
            break;
    }
float add(float num1, float num2)
{

    return(num1+num2);

}
float subtract(float num1, float num2)
{

    return(num1-num2);

}
float multiply(float num1,float num2)
{

    return(num1*num2);

}
float divide(float num1,float num2)
{

    return(num1/num2);

}}
