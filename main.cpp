#include <iostream>
#include <string>
using namespace std;


// basic operations + - * / 
// convert all ints to double so math will be more precise

/* 
TODO list:

pow, sqrt next - requires different number of input handling
GUI



*/

double add(double a, double b);
double sub(double a, double b);
double multip(double a, double b);
double divide(double a, double b);

//double convToDouble(int a);


int main () {
    bool rerun(1);
    do{
        cout << "What operation would you like to do? " << endl << "1. Addition" << endl <<  "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl;
        int selection;
        cout << "Enter Here: "; 
        cin >> selection;
        cout << endl;
        double a;
        double b;
        cout << "Enter first number: ";
        cin >> a;
        cout << endl << "Enter second number: ";
        cin >> b;
        switch(selection){
            case 1:
                cout << add(a, b);
                break;
            case 2:
                cout << sub(a, b);
                break;
            case 3:
                cout << multip(a, b);
                break;
            case 4:
                cout << divide(a, b);
                break;
                
            default:
                cout << "Unable to complete.";
        }

        cout << endl << "Would you like to run again? 1 for yes, 0 for no: ";
        cin >> rerun;


    }while(rerun);
}


double add (double a, double b){
    return (a + b);
}

double sub (double a, double b){
    return (a - b);
}

double multip(double a, double b){
    return (a * b);
}

double divide(double a, double b){
    return (a / b);
}