#include <iostream>
using namespace std;

int main(){

    double num1 , num2;
    string operation;

    cout<< "Enter first number: "; cin>> num1; 
    cout << "Enter second number: ";cin>>num2;
    cout <<"Choose your operation: \n + for addition\n - for subtracktion\n * for multiplication\n / for division"<<endl; 
    cout <<"You choose? --> "; cin>> operation;   

    double result;
    if (operation == "+")
    {
        result = num1 + num2;
    }else if(operation == "-"){
        result = num1 - num2;
    }else if(operation == "*"){
        result = num1 * num2;
    }else if(operation == "/"){
        if(num2 == 0){
            cout<< "You can not divide anything with zero (0)"<<endl;
            }
        else
            result = num1 / num2;

    }else{
        cout<<"You can only type +, -, * or  / --> " <<endl;
        cout <<"You choose? --> "; cin>> operation;   

    }

    cout << "Your result is: "<< result << endl; 
     
    system("pause>0");
    return 0;
}