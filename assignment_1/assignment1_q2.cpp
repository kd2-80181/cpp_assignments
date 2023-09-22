#include<iostream>
using namespace std;

struct Date
{
    int year;
    int month;
    int day;

    void initDate()
    {
        this->year=0;
        cout << "Year is initialized:" << this->year<< endl;
        this->month=0;
        cout << "Month is initialized:" << this->month << endl;
        this->day=0;
        cout << "Day is initialized:" << this->day << endl;
    }

    void printDateOnConsole()
    {
        cout << "Year: " << this->year << endl;
        cout << "Month: " << this->month << endl;
        cout << "Day: " << this->day << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter the year:" << endl;
        cin >> this->year;
        cout << "Enter the month:" << endl;
        cin >> this->month;
        cout << "Enter the day:" << endl;
        cin >> this->day;
    }

    bool isLeapYear()
    {
        if(this->year%4==0&&this->year%100!=0)
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
    struct Date D1;

    while((choice=D1.menu())!=0)
    {
        switch (choice)
        {
            case 1: D1.initDate();
                    break;
            case 2: D1.acceptDateFromConsole();
                    break;
            case 3: D1.printDateOnConsole();
                    break;
            case 4: if(D1.isLeapYear())
                    cout << "Leap Year"<<endl;
                    else
                    cout << "Not a Leap Year" << endl;
                    break;
            case 5: 
            break;

            default:printf("Invalid value.\n");
        }
    }
    return 0;
}