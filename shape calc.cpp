// Shipping rates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    float weight;
    float distance;
    float rate;
    float charge;


    cout << "Weight of Package in Kg: ";
    cin >> weight;
    cout << "\nDistance Shipped in Miles: ";
    cin >> distance;

    //detrmines the shipping rate based on given information
    if (weight > 0 && weight <= 2)
        rate = 1.1;
    else if (weight > 2 && weight <= 6)
        rate = 2.2;
    else if (weight > 6 && weight <= 10)
        rate = 3.7;
    else (weight >= 10);
    rate = 4.8;



    //seperates the distance into 500 mile sections
    int section = distance / 500;


    //error handling
    if (distance < 10 || distance > 30000)
        cout << "\nPlease enter a distance between 10 and 30000 miles.";
    if (weight < 0 || weight > 20)
        cout << "\nPlease enter a weight above 0 Kg and below 20 Kg";


    if (distance > 10 && distance <= 30000 && weight > 0 && weight <= 20) {
        charge = rate * section;
        cout << fixed << setprecision(2) << "\nYour charge is $" << charge;

    }

}


