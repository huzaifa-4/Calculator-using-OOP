#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
#include<vector>
#include<iomanip>
using namespace std;

void add()
{ cout<<"Enter numbers you want to add (type '= and then press enter for result)\n";
    vector<double> numbers;
    double num;
    char inputEnd = '=';
    bool inputComplete = false;
    while (!inputComplete) {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            char terminator;
            cin >> terminator;
            if (terminator == inputEnd) {
                inputComplete = true;
            } else {
                cout << "Invalid input! Please enter numbers or '" << inputEnd << "' to finish.\n";
            }
        } else {
            numbers.push_back(num);
        }
    }
    double result = 0;
            for (double n : numbers) {
                result += n;
            }
            cout<<"result:"<<result<<endl;
}
void subtract()
{
    cout<<"Enter numbers you want to subtract (type '= and then press enter for result)\n";
      vector<double> numbers;
    double num;
    char inputEnd = '=';
    bool inputComplete = false;
    while (!inputComplete) {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            char terminator;
            cin >> terminator;
            if (terminator == inputEnd) {
                inputComplete = true;
            } else {
                cout << "Invalid input! Please enter numbers or '" << inputEnd << "' to finish.\n";
            }
        } else {
            numbers.push_back(num);
        }
    }
    double result=0;
   result = numbers[0];
            for (size_t i = 1; i < numbers.size(); ++i) {
                result -= numbers[i];
            }
            cout<<"Result:"<<result<<endl;
}
void multiply()
{
    cout<<"Enter numbers you want to Multiply (type '= and then press enter for result)\n";
    vector<double> numbers;
    double num;
    char inputEnd = '=';
    bool inputComplete = false;
    while (!inputComplete) {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            char terminator;
            cin >> terminator;
            if (terminator == inputEnd) {
                inputComplete = true;
            } else {
                cout << "Invalid input! Please enter numbers or '" << inputEnd << "' to finish.\n";
            }
        } else {
            numbers.push_back(num);
        }
    }
    double result=0;
    result = 1;
            for (double n : numbers) {
                result *= n;
            }
        cout<<"Result:"<<result<<endl;
}
void division() {
    cout<<"Enter numbers you want to divide (type '= and then press enter for result)\n";
    vector<double> numbers;
    double num;
    char inputEnd = '=';
    bool inputComplete = false;
    
    cout << "Enter the numbers (finish with '=' followed by Enter):\n";
    
    while (!inputComplete) {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            char terminator;
            cin >> terminator;
            if (terminator == inputEnd) {
                inputComplete = true;
            } else {
                cout << "Invalid input! Please enter numbers or '" << inputEnd << "' to finish.\n";
            }
        } else {
            numbers.push_back(num);
        }
    }
    
    double result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] != 0) {
            result /= numbers[i];
        } else {
            cout << "Error: Division by zero!" << endl;
            return; // Exit the function immediately in case of division by zero
        }
    }
    
cout << "Result: " << result << endl;
}
void naturallog(double n){
    cout<<"Result is :"<<log(n);
}
void log_10(double n)
{
    cout<<"RESULT IS :"<<log10(n);

}
void square(double n)
{
cout<<"Result is :"<<n*n;
}
void squareroot(double n)
{
cout<<"The result is :"<<sqrt(n);
}
void power(double m,double n)
{
    cout<<"The result is :"<<pow(m,n)<<endl;
}
double cosine(double angle_degrees)
{
    if (angle_degrees == 90.0) {
        return 0.0; // Special case: cosine of 90 degrees is 0
    }

    double angle_radians = angle_degrees * (M_PI / 180.0);
    return cos(angle_radians);
}
double accurateSine(double angle_degrees) {
    if (angle_degrees == 90.0 || angle_degrees == 270.0) {
        return 1.0; // Special cases: sine of 90 and 270 degrees is 1 and -1 respectively
    } else if (angle_degrees == 180.0 || angle_degrees == 360.0 || angle_degrees == 0.0) {
        return 0.0; // Special cases: sine of 0, 180, and 360 degrees is 0
    }

    double angle_radians = angle_degrees * (M_PI / 180.0);
    return sin(angle_radians);
}
double accurateTangent(double angle_degrees) {
    if (angle_degrees == 90.0 || angle_degrees == 270.0) {
        cout << "Error: Tangent is undefined for angles 90 and 270 degrees." << endl;
        return NAN; // Return NaN (Not-a-Number) for undefined values
    } else if (angle_degrees == 180.0 || angle_degrees == 360.0 || angle_degrees == 0.0) {
        return 0.0; // Special cases: tangent of 0, 180, and 360 degrees is 0
    }

    double angle_radians = angle_degrees * (M_PI / 180.0);
    return tan(angle_radians);
}
double accurateCosineInverse(double value) {
    if (value < -1.0 || value > 1.0) {
        cout << "Error: Input value must be between -1 and 1 for arccosine!" << endl;
        return NAN; // Return NaN (Not-a-Number) for invalid input
    }

    double angle_radians = acos(value);
    double angle_degrees = angle_radians * (180.0 / M_PI);
    return angle_degrees;
}
double accurateSineInverse(double value) {
    if (value < -1.0 || value > 1.0) {
        cout << "Error: Input value must be between -1 and 1 for arcsine!" << endl;
        return NAN; // Return NaN (Not-a-Number) for invalid input
    }

    double angle_radians = asin(value);
    double angle_degrees = angle_radians * (180.0 / M_PI);
    return angle_degrees;
}
double accurateTangentInverse(double value) {
    double angle_radians = atan(value);
    double angle_degrees = angle_radians * (180.0 / M_PI);
    return angle_degrees;
}
void cube()
{
    double n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"The Cube is: "<<n*n*n<<endl;
}
void factorial(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
      p=p*i;
    }
    cout<<"The factorial of the given number is : "<<p<<endl;
}

int main()
{
    Start:
    system("cls");
    int  choice;
    double num;
    cout<<setw(100)<<"PROJECT: SCIENTIFIC CALCULATOR"<<endl; 
    cout<<setw(37)<<"PRESENTED BY:"<<endl;
    cout<<setw(65)<<"HUZAIFA MUQEET(22014198-051)"<<endl;
    cout<<setw(65)<<"DANIYAL JAVEED(22014198-026)"<<endl;
    cout<<setw(63)<<"UMM-E-HABIBA(22014198-003)"<<endl;
    cout<<setw(39)<<"SUBMITTED TO : "<<endl;
    cout<<setw(55)<<"Prof. NAVEED ABBAS"<<endl;
    cout<<setw(34)<<"SECTION : "<<endl;
    cout<<setw(44)<<"SE-A-22"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<setw(100)<<"Scientific Calculator"<<endl;
    const char* text=R"(

            1.Addition              2.Subtraction        3.Multiplication        4.Division    
             
            5.Natural Log           6.Log Base(10)       7.sin                   8.cosine    
             
            9.Tangent               10.Sine Inverse      11.Cos Inverse          12.Tangent Inverse    
             
            13.Exponential Power    14.Square Root       15.Square               16.Cube

            17. Factorial)";
    cout<<text;
    cout<<"\n\n\n Enter Choice: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        multiply();
        break;
        case 4:
        division();
        break;
        case 5:
        cout<<"Enter The Number: ";
        cin>>num;
        naturallog(num);
        break;
        case 6:

        cout<<"Enter The Number: ";
        cin>>num;
        log_10(num);
        break;
        case 7:
        cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=accurateSine(num);
        cout<<"RESULT IS :"<<num<<endl;
        break;
        case 8:

       cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=cosine(num);
         cout<<"RESULT IS :"<<num<<endl;
        break;
        case 9:

        cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=accurateTangent(num);
         cout<<"RESULT IS :"<<num<<endl;
        break;
        case 10:
        cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=accurateSineInverse(num);
         cout<<"RESULT IS :"<<num<<endl;
        break;
        case 11:
        cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=accurateCosineInverse(num);
         cout<<"RESULT IS :"<<num<<endl;
        break;
        case 12:
        cout<<"Enter The angle in degrees: ";
        cin>>num;
        num=accurateTangentInverse(num);\
         cout<<"RESULT IS :"<<num<<endl;
        break;
        case 13:
        double a,b;
        cout<<"Enter the Number: ";
        cin>>a;
        cout<<"\nEnter the power:";
        cin>>b;
        power(a,b);
        break;
        case 14:
        cout<<"Enter the Number:";
        cin>>num;
        squareroot(num);
        break;
        case 15:
        cout<<"Enter the Number:";
        cin>>num;
        square(num);
        break;
        case 16:
        cube();
        break;
        case 17:
        int n;
        cout<<"Enter the number : "<<endl;
        cin>>n;
        factorial(n);
        break;
        default:
        cout<<"Invalid choice";
        break;
    }
    getch();
    goto Start;
     

return 0;
}
