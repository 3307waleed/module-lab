#include <iostream>
using namespace std;

int main() {
    int choice, marks;
    string name;

    while (true) {
        cout << "\n1. View Exam Dates\n2. View Invigilators\n3. Check Grade\n4. Show Result\n5. Academic Report\n6. Exit\nPick an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "aict: 12 Jan\nPhysics: 15 Jan\nChemistry: 18 Jan\n";
        } 
        else if (choice == 2) {
            cout << "ali: Room 101\nayan: Room 102\n";
        } 
        else if (choice == 3) {
            cout << "Enter your marks: ";
            cin >> marks;
            if (marks >= 90) cout << "You got Grade A\n";
            else if (marks >= 75) cout << "You got Grade B\n";
            else if (marks >= 50) cout << "You got Grade C\n";
            else if (marks >= 35) cout << "You got Grade D\n";
            else cout << "You got Grade F\n";
        } 
        else if (choice == 4) {
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter total marks (out of 500): ";
            cin >> marks;
            cout << name << "'s Percentage: " << (marks * 100) / 500 << "%\n";
        } 
        else if (choice == 5) {
            cout << "Top Performer: Alice (95%)\nAverage Score: 72%\nLowest Score: 35%\n";
        } 
        else if (choice == 6) {
            cout << "Goodbye!\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}