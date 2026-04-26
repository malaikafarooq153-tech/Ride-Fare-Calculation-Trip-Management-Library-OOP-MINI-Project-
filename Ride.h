#pragma once
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Ride
{
private:
    string riderName;
    double distance;
    double ratePerKm;
    double fare;
public:
    Ride()
    {
        riderName = "";
        distance = 0;
        ratePerKm = 0;
        fare = 0;
    }
    void setRide() //function overloading 1
    {
        cout << "Enter rider name: ";
        cin.ignore();
        getline(cin, riderName);
        cout << "Enter distance (km): ";
        cin >> distance;
        cout << "Enter rate per km: ";
        cin >> ratePerKm;
        calculateFare();
    }
    void setRide(string name, double dist, double rate) //overloading function 2
    {
        riderName = name;
        distance = dist;
        ratePerKm = rate; // default rate
        calculateFare();
    }
    void setRide(const Ride& r) //overloading function by copying object
    {
        riderName = r.riderName;
        distance = r.distance;
        ratePerKm = r.ratePerKm;
        fare = r.fare;
    }
    void calculateFare()
    {
        fare = abs(distance * ratePerKm);
    }
    Ride operator + (const Ride& r) //overloading+operator
    {
        Ride temp;
        temp.riderName = riderName + " + " + r.riderName;
        temp.distance = distance + r.distance;
        temp.ratePerKm = (ratePerKm + r.ratePerKm) / 2;
        temp.calculateFare();
        return temp;
    }
    Ride operator - (const Ride& r) //overloading - operator
    {
        Ride temp;
        temp.riderName = riderName + " - " + r.riderName;
        temp.distance = abs(distance - r.distance);
        temp.ratePerKm = ratePerKm;
        temp.calculateFare();
        return temp;
    }
    bool operator < (const Ride& r)const //overloading comparison operator
    {
        return fare < r.fare;
    }
    bool operator == (const Ride& r) const
    {
        return fare == r.fare;
    }
    friend ostream& operator << (ostream& out, const Ride& r) //overloaded stream insertion operator
    {
        out << endl << "--- Rider  Details ---" << endl;
        out << "Rider Name     : " << r.riderName << endl;
        out << "Distance       : " << r.distance << " km" << endl;
        out << "Rate Per KM    : " << r.ratePerKm << endl;
        out << "Fare           : " << r.fare << endl;
        return out;
    }
};
