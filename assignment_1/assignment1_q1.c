#include<stdio.h>

struct Date
{
    int y;
    int m;
    int d;
};

void initDate(struct Date* ptrDate)
{
    printf("Year is initialized\n");
    ptrDate->y = 0;
    printf("Month is initialized\n");
    ptrDate->m = 0;
    printf("Date is initialized\n"); 
    ptrDate->d = 0;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Year: %d\n", ptrDate->y);
    printf("Month: %d\n", ptrDate->m);
    printf("Date: %d\n", ptrDate->d);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter Year: \n");
    scanf("%d", &ptrDate->y);
    printf("Enter Month: \n");
    scanf("%d", &ptrDate->m);
    printf("Enter Date: \n");
    scanf("%d", &ptrDate->d);
}

int menu()
{
    int choice; 
    printf("***MENU DRIVEN PROGRAM FOR DATE***\n");
    printf("PRESS 1 TO INITIALIZE VALUES\n");
    printf("PRESS 2 TO ACCEPT VALUES\n");
    printf("PRESS 3 TO PRINT VALUES\n");
    printf("PRESS 0 TO PRINT VALUES\n");
    scanf("%d", &choice);
    return choice; 
}


int main()
{
    struct Date D1;
    int choice;

    while((choice=menu())!=0)
    {
        switch(choice){
            case 1: initDate(&D1);
                    break;
            case 2: acceptDateFromConsole(&D1);
                    break;
            case 3: printDateOnConsole(&D1);
                    break;
            case 0: break;       
            default:printf("Invalid Selection\n");
                    menu();
        }
    }
    return 0; 
}

