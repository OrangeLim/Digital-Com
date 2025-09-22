#include <iostream>
using namespace std;

int main() {
    char choice = 'y';
    
    while (choice == 'y' || choice == 'Y') {
        float w, d;
        float total = 0;
        int time = 0;
        
        cout << "\nDRONE DELIVERY CALCULATOR" << endl;
        cout << "-------------------------" << endl;
        
        cout << "Enter weight (0-5kg): ";
        cin >> w;
        cout << "Enter distance (0-10km): ";
        cin >> d;
        
        if (w < 0 || w > 5) {
            cout << "Weight error! 0-5kg only" << endl;
            continue;
        }
        if (d < 0 || d > 10) {
            cout << "Distance error! 0-10km only" << endl;
            continue;
        }

        if (w <= 1) {
            if (d <= 3) total = 5;
            else if (d <= 7) total = 8;
            else total = 12;
        }
        else if (w <= 3) {
            if (d <= 3) total = 8;
            else if (d <= 7) total = 12;
            else total = 16;
        }
        else {
            if (d <= 3) total = 12;
            else if (d <= 7) total = 16;
            else total = 20;
        }

        if (d <= 3) time = 30;
        else if (d <= 5) time = 40;
        else if (d <= 7) time = 50;
        else if (d <= 9) time = 60;
        else time = 70;

        if (w > 3) time += 5;
        else if (w > 1) time += 2;

        cout << "\n--- BILL ---" << endl;
        cout << "Weight: " << w << "kg" << endl;
        cout << "Distance: " << d << "km" << endl;
        cout << "Cost: RM " << total << endl;
        cout << "Time needed: " << time << " mins" << endl;

        cout << "\nAgain? (y/n): ";
        cin >> choice;
    }
    
    cout << "Thanks for using! Goodbye!" << endl;
    return 0;
}