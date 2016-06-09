#include <stdio.h>
#include <windows.h>

int main()
{
    int hours, employeeID; // Hours an employee worked and their ID
    float rate, overTime; // Rate of pay and over time
    float salary; // Salary to be paid

    // Intro
    printf("Welcome to the Salary Calculator\n\n\n");
    Sleep(2000);

    // Employee ID Variable
    printf("Start by inputing the employee's ID# ");
    scanf("%d", &employeeID);

    // Program Loop
    while (employeeID != -1)
    {
        printf("How many hours did the employee work? "); // Input for hours variable
        scanf("%d", &hours);

        printf("What is this employee's hourly wage? "); //Input for rate variable
        scanf("%f", &rate);

        if (hours <= 40)
        {
            // Salary if no over time worked
            salary = hours * (float)rate;
            printf("This employee's salary is $%.2f", salary);

        }else
        {
            // Salary if over time worked
            hours -= 40; // Finding number of overtime hours
            overTime = (float)rate * 1.5; // Getting over time rate
            salary = (40 * (float)rate) + (hours * (float)overTime);

            printf("This employee's salary is $%.2f", salary);
        }

        // To restart loop
        printf("\n\n\nPut in next employee's ID# or -1 to end ");
        scanf("%d", &employeeID);
    }
}
