#include <iostream>
using namespace std;
#include <string>

int main()
{
    int goal;
    cin >> goal;
    int moneyTotal;
    moneyTotal = 0;

    while (true)
    {
        string service;
        string serviceType;
        cin >> service;

        if (service == "closed")
        {
            cout << "Target not reached! You need " << goal - moneyTotal << "lv. more." << endl;
            cout << "Earned money: " << moneyTotal << "lv.";
            break;
        }
        else if (service == "haircut")
        {
            cin.ignore();
            getline(cin, serviceType);
            if (serviceType == "mens")
            {   
                moneyTotal = moneyTotal + 15;
            }
            else if (serviceType == "ladies")
            {
                moneyTotal = moneyTotal + 20;
            }
            else if (serviceType == "kids")
            {
                moneyTotal = moneyTotal + 10;
            }
        }
        else if (service == "color")
        {
            cin.ignore();
            getline(cin, serviceType);
            if (serviceType == "touch up")
            {
                moneyTotal = moneyTotal + 20;
            }
            else if (serviceType == "full color")
            {
                moneyTotal = moneyTotal + 30;
            }
        }

        if (goal <= moneyTotal)
        {
            cout << "You have reached your target for the day!" << endl;
            cout << "Earned money: " << moneyTotal << "lv.";
            break;
        }
    }
}

