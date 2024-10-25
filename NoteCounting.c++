/********** Q: 1:  how many different note requird (total amount 1330) 100rs,50rs,20rs,10rs  ***********/
#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    int hundreds , fifties , twenties , tens ;

    switch (1)
    { // We use switch(1) to always enter the case blocks
    case 1:
        hundreds = amount / 100; // Calculate number of 100 Rs notes
        amount = amount % 100;   // Update the remaining amount
    case 2:
        fifties = amount / 50; // Calculate number of 50 Rs notes
        amount = amount % 50;
    case 3:
        twenties = amount / 20; // Calculate number of 20 Rs notes
        amount = amount % 20;
    case 4:
        tens = amount / 10; // Calculate number of 10 Rs notes
        amount = amount % 10;
    }

    // Display the number of notes required
    cout << "100 Rs notes: " << hundreds << endl;
    cout << "50 Rs notes: " << fifties << endl;
    cout << "20 Rs notes: " << twenties << endl;
    cout << "10 Rs notes: " << tens << endl;

    return 0;
}
