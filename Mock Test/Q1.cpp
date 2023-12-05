#include <iostream>
#include <iomanip>

using namespace std;

float bmiFunc(float weight, float mass){
    float bmi = weight / (mass*mass);
    return bmi;
}


int main(){
    float bmiRisk = 23, bmiHighRisk = 27.5, userWeight, userHeight, userBMI;

    cout << "Your weight (kg): ";
    cin >> userWeight;
    while ((userWeight > 150) || (userWeight < 50))
    {
        cout << "Invalid input!" << endl;
        cout << "Your weight (kg): ";
        cin >> userWeight;
    } 

    cout << endl << "Your height(m): ";
    cin >> userHeight;
    cout << endl;
    while ((userHeight > 1.90) || (userHeight < 1.60))
    {
        cout << "Invalid input!" << endl;
        cout << endl << "Your height(m): ";
        cin >> userHeight;
        cout << endl;
    }
    
    userBMI = bmiFunc(userWeight, userHeight); 
    int switchVar = userBMI < 23 ? 1 : (userBMI < 27.5 ? 2 : 3);
    switch (switchVar)
    {
        case 1:
            cout << "You are at no Risk" << endl;
            break;
        case 2:
            cout << "You are at increased Risk" << endl;
            break;
        case 3:
            cout << "You are at high Risk" << endl;
            break;
    }
    return 0;
}