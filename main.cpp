#include <iostream>
using namespace std;

int main(){

    double num1 , num2;
    string operation;

    cout<< "Enter first number: "; cin>> num1; 
    cout << "Enter second number: ";cin>>num2;

    double result;
    bool validOperation = false;

    while(!validOperation){

        cout <<"Choose your operation: \n + for addition\n - for subtracktion\n * for multiplication\n / for division"<<endl; 
        cout <<"You choose? --> "; cin>> operation; 

        if (operation == "+")
        {
            result = num1 + num2;
            validOperation = true;
        }else if(operation == "-"){
            result = num1 - num2;
            validOperation = true;
        }else if(operation == "*"){
            result = num1 * num2;
            validOperation = true;
        }else if(operation == "/"){
                if(num2 == 0){
                    cout<<"You can not divide anything by zero, numbers switched positions" <<endl;
                    double temp = num2;
                    num2 = num1;
                    num1 = temp;
                    cout<< "num1 = " << num1 << ", num2 = "<< num2 << endl;

                    result = num1 / num2;
                    validOperation = true;
                }else{
                    result = num1 / num2;
                    validOperation = true;
                }
        }else{
            cout<<"------ You can only type +, -, * or  /------" <<endl;
        }
    }

    cout << "Your result is: "<< result << endl; 
     
    system("pause>0");
    return 0;
}