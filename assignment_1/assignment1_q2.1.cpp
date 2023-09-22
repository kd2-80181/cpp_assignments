#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    void initDate()
    {
        this->year = 0;
        cout << "Year Is Initialized: " << endl;
        this->month = 0;
        cout << "Month Is Initialized: " << endl;
        this->day = 0;
        cout << "Day Is Initialized: " << endl;
    }

    void printDateOnConsole()
    {
        cout << "Year: " << this->year << endl;
        cout << "Month: " << this->month << endl;
        cout << "Day: " << this->day << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Year: " << endl;
        cin >> this->year;
        cout << "Enter Month: " << endl;
        cin >> this->month;
        cout << "Enter Day: " << endl;
        cin >> this->day;
    }

    bool isLeapYear()
    {
        if (this->year % 4 == 0 && this->year % 100 != 0)
            return true;
        else
            return false;
    }

    int menu()
    {
        int choice;
        printf("***MENU DRIVEN PROGRAM FOR DATE***\n");
        printf("Press 1 to print initialized date.\n");
        printf("Press 2 to accept date from console.\n");
        printf("Press 3 to print date on console.\n");
        printf("Press 4 to check leap year.\n");
        printf("Press 0 to exit from the menu.\n");
        scanf("%d", &choice);
        return choice;
    }
};

int main()
{
    int choice;
    Date D1;

    while ((choice = D1.menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            D1.initDate();
            break;

        case 2:
            D1.acceptDateFromConsole();
            break;

        case 3:
            D1.printDateOnConsole();
            break;

        case 4:
            if (D1.isLeapYear())
                cout<<"Leap Year"<<endl;
            else
                cout<<"Not a leap Year"<<endl;

            break;

        case 5:
            break;
        }
    }
    return 0;
}