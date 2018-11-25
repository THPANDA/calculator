#include <iostream>
using namespace std;

class function{
    public:
    void  Body();
    int Add(int x,int y){
        int ans =x+y;
        return ans;
    }
    int Sub(int x,int y){
        int ans =x-y;
        return ans;
    }
    int Mul(int x,int y){
        int ans =x*y;
        return ans;
    }
    int Div(int x,int y){
        int ans=x/y;
        return ans;
    }
};

int main(){
    int func;
    int x,y;

    function key;

    cout << "What function do you want to use?" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "Input:" << endl;

    cin >> func;
    cout << endl;

    switch(func){
        case 1://Addiction
        cout << "ADDITION" << endl;
        cout << "Please enter first number:" << endl;
        cin >> x;
        cout << "Please enter second number:" << endl;
        cin >> y;
        cout << x << " + " << y << " = ";
        cout << key.Add(x,y);
        break;

        case 2://Subtraction
        cout << "SUBTRACTION" << endl;
        cout << "Please enter first number:" << endl;
        cin >> x;
        cout << "Please enter second number:" << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Sub(x,y);
        break;

        case 3://Multiplication
        cout << "MULTIPLICATION" << endl;
        cout << "Please enter first number:" << endl;
        cin >> x;
        cout << "Please enter second number:" << endl;
        cin >> y;
        cout << x << " * " << y << " = ";
        cout << key.Mul(x,y);
        break;

        case 4://Division
        cout << "DIVISION" << endl;
        cout << "Please enter first number:" << endl;
        cin >> x;
        cout << "Please enter second number:" << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Div(x,y);
        break;
        
        default:
        cout << "Invalid Input";
        break;
    }
}