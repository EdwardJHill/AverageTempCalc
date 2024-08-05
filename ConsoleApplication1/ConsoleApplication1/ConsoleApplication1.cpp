// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

int main()
{
    int x, y;
    std::cout << "Hello World!\n";
    std::cin >> x;
    std::cin >> y;
    calculate(x, y);

}
//wakeup time and sleep time need to be reworked for people over the day cases
float calculate(int wakeUpTime, int SleepTime)
{
    int Total = 0;
    for (int i = wakeUpTime; i <= SleepTime; i++)
    {
        Total += fourth[i];
    }
   
    float Avearge = Total / (SleepTime - wakeUpTime);
    std::cout << Avearge <<"\n";
    return Avearge;
}
void PrepareAverages()
{

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
