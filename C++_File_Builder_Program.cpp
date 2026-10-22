
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string date;
    string firstName, lastName;
    string track;
    char codingExperience;
    char advancedWorkshop;
    int attendeeNumber;
    int skillLevel;
    char another;

    cout << "Enter the Intro to Tech Workshop date (YYYYMMDD): ";
    cin >> date;

    string fileName = "registrations_" + date + ".txt";

    ofstream outFile(fileName);

    if (!outFile)
    {
        cout << "Error creating file." << endl;
        return 1;
    }

    another = 'Y';

    while (another == 'Y' || another == 'y')
    {
        cout << "\nEnter first name: ";
        cin >> firstName;

        cout << "Enter last name: ";
        cin >> lastName;

        cout << "Enter 5-digit attendee number: ";
        cin >> attendeeNumber;

        cout << "Choose workshop track:" << endl;
        cout << "Computer Programming" << endl;
        cout << "Computer Maintenance" << endl;
        cout << "Cyber Security" << endl;
        cout << "Enter track: ";
        getline(cin >> ws, track);

        cout << "Prior coding experience? (Y/N): ";
        cin >> codingExperience;

        cout << "Enter skill level (1-5): ";
        cin >> skillLevel;

        cout << "Interested in advanced workshop? (Y/N): ";
        cin >> advancedWorkshop;

        outFile << firstName << " "
                << lastName << " "
                << attendeeNumber << " "
                << track << " "
                << codingExperience << " "
                << skillLevel << " "
                << advancedWorkshop << endl;

        cout << "\nEnter another attendee? (Y/N): ";
        cin >> another;
    }

    outFile.close();

    cout << "\nRegistration file created: "
         << fileName << endl;

    return 0;
}
