#include "Ride.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Ride r1, r2, r3, r4;
    string name; double rate, distance;
    cout << "--Information for Parametarized function --\nEnter name of rider: ";
    getline(cin, name);
    cout << "Enter distance of rider: ";
    cin >> distance;
    cout << "Enter rate per km: ";
    cin >> rate;
    cout << "\nEnter Ride 1 details: (Default Function) " << endl;
    r1.setRide();
    r2.setRide(name, distance, rate);
    cout << "\nEnter Ride 3 details to copy it in Object 4" << endl;
    r3.setRide();
    r4.setRide(r3);
    cout << "\nRide 1:" << endl << r1;
    cout << "\nRide 2: " << endl << r2;
    cout << "\n--Object r3 copied into r4:--" << endl << r3 << endl;
    cout << "\nCombinig Data Of Both Riders (1 & 2) using + Operator" << endl;
    Ride sum = r1 + r2; // operator +
    cout << sum;
    cout << "\nDifferentiating Data Of Both Riders (1 & 2) using - Operator" << endl;
    Ride diff = r1 - r2; // operator -
    cout << diff;
    cout << "\n--Comparing fares of Ride 1 and 2 using< operator:-- " << endl;
    if (r1 < r2)            // comparison <
        cout << "\nRide 1 is cheaper\n";
    else
        cout << "\nRide 2 is cheaper \n";
        cout << "\n--Comparing Fares of Ride 3 and 4(Copied objects) using = operator:-- " << endl;
    if (r3 == r4)        //comparison ==
        cout << "Rides are equal\n";
    else
        cout << "Rides are different\n";

    return 0;
}