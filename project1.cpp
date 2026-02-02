#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    int choice;

    time_t currentTime = time(nullptr);
    char* timeString = ctime(&currentTime);

    // set of options to begin
    string option1 = "1. Hardware Info";
    string option2 = "2. Time";
    string option3 = "3. Exit";

    
    cout << option1 << endl
    << option2 << endl
    << option3 << endl;
    cin >> choice;

    
    switch (choice) {
        case 1:
            cout << option1 << endl;
            system("systeminfo");
            break;
        case 2:
            cout << option2 << endl;
            cout << "Current time: " << timeString;
            break;
        case 3:
            cout << option3 << endl;
            // theres nothing here since its an exit
            break;
        default:
            cout << "Invalid choice please select a choice from the numbers given" << endl;
    }

    return 0;
}