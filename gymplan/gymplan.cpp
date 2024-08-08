// gymplan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
    double cost = 0.00; 
    string kindOfPlan, typeOfPlan, everydayAccess, facilitiesAccess, autoPay, paperlessBill;
    cout << "What kind of gym membership plan do you want to buy? ";
    getline(cin, kindOfPlan);
    cout << "What type of gym membership do you want to buy? ";
    getline(cin, typeOfPlan);
    cout << "Which days do you want to workout? ";
    getline(cin, everydayAccess);
    cout << "Which facilities do you want to access to? ";
    getline(cin, facilitiesAccess);
    cout << "Are you on autopay? ";
    getline(cin, autoPay);
    cout << "Are you on paperless billing? ";
    getline(cin, paperlessBill);


    if (kindOfPlan == "Executive") {
        cost += 100.00;
    }
        else if (kindOfPlan == "Basic") {
        cost += 50.00;   
        }
        else {
        cout << "Your kind of membership plan is not valid!\n";
        return (-1);
        }
    //inserted this to make this error message still pop up in right order 
    if (typeOfPlan != "Adult" && typeOfPlan != "Child" && typeOfPlan != "Senior") {
        cout << "Your type of membership is not valid!\n";
        return (-1);
    }   
    //here
    
    if (everydayAccess == "Odd") {
        cost = cost + 0.00;
    }
        else if (everydayAccess == "Even") {
        cost = cost + 0.00;
        }
        else if (everydayAccess == "Everyday") {
        cost = cost + 25.00;
        }
        else {
        cout << "Your membership days are not valid!\n";
        return (-1);
        }

    if (facilitiesAccess == "Regional") {
        cost = cost + 30.00;
    }
        else if (facilitiesAccess == "National") {
        cost = cost + 50.00;
        }
        else if (facilitiesAccess == "Just One") {
        cost = cost + 0.00;
        }
        else {
        cout << "Your facilities choice is not valid!\n";
        return (-1);
        }
    //Plan Discounts reducing all costs put this section after all costs but before discounts
    if (typeOfPlan == "Adult") {
        cost = 1 * cost;
    }
        else if (typeOfPlan == "Child") {
        cost = 0.5 * cost;
    }
        else if (typeOfPlan == "Senior") {
        cost = 0.75 * cost;
    }
        else {
        cout << "Your type of membership is not valid!\n";
        return (-1);
    }

    //Discounts

    if (autoPay == "Yes") {
        cost = cost - 2.00;
    }
        else if (autoPay == "No") {
        cost = cost;
        }
        else {
        cout << "Your autopay is not valid!\n";
        return (-1);
        }
    if (paperlessBill == "Yes") {
        cost = cost - 3.00;
    }
        else if (paperlessBill == "No") {
        cost = cost;
        }
        else {
        cout << "Your paperless billing is not valid!\n";
        return (-1);
        }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Your " << kindOfPlan << " gym membership costs $" << cost;
 
    return (0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
