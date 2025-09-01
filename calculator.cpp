#include<iostream>
using namespace std;

int main(){

    float num1, num2, result;
    char operation;

    std::cout << "-----Basic Calculator-----\n";
    cout << "Enter frist number : ";
    cin >> num1;
    
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout <<"Enter second number : ";
    cin >> num2;

    switch(operation){

        case '+':
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;

        case '-':
            result = num1 - num2;   
            cout << "Result : " << result << endl;
            break;    

        case '*':
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
            
        case '/':
             if(num2 != 0){
                result = num1 / num2;
                cout << "Result : " << result << endl;
                 }else {
                    cout << "Error : Division by zero is not allowed." << endl;
                }
                break;
        default:
            cout << "Error : Invalid operation." << endl;           
        break;   
    }
    return 0;
}