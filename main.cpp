#include <iostream>
#include <string>
#include <array>
#include <cmath>
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

double power(double a);
void Input(double arr[], int size);



//double convToDouble(int a);


int main () {
    bool rerun(1);
    do{
        double arr[2];
        cout << "What operation would you like to do? " << endl << "1. Addition" << endl <<  "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << "5. Sqrt" << endl << "6. Power" << endl;
        int selection;
        cout << "Enter Here: "; 
        cin >> selection;
        cout << endl;
        if(selection < 5){
            Input(arr, 2);
        } else {
            Input(arr, 1);
        }




        switch(selection){
            case 1:
                cout << add(arr[0], arr[1]);
                break;
            case 2:
                cout << sub(arr[0], arr[1]);
                break;
            case 3:
                cout << multip(arr[0], arr[1]);
                break;
            case 4:
                cout << divide(arr[0], arr[1]);
                break;
            case 5:
                cout << sqrt(arr[0]);
                break;
            case 6:
                cout << power(arr[0]);
                break;


            default:
                cout << "Unable to complete.";
        }

        cout << endl << endl << "Would you like to run again? 1 for yes, 0 for no: ";
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

double power(double a){
    return (a * a);
}

void Input(double arr[], int size){
    double x;
    cout << "Enter number: ";
    cin >> x;
    cout << endl;
    arr[0] = x;
    for(int i = 1; i < size; ++i){
        cout << "Enter next number: " ;
        cin >> x;
        arr[i] = x;
        cout << endl;

    }
}