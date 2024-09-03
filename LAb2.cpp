#include <iostream>
#include <direct.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

void displayFiles() {
    system("dir");
}

void createDirectory(const string& dirName) {
    if (_mkdir(dirName.c_str()) == 0) {
        cout << dirName << " Directory Successfully created." << endl;
    } else {
        cout << "Failed to create directory. It may already exist." << endl;

    }

}

void changeDirectory(const string& dirName) {
    if (_chdir(dirName.c_str()) == 0) {
        cout << "Changed to directory: " << dirName << endl;
    } else {
        cout << "Failed to change directory. It may not exist." << endl;
    }
}

int main() {
    int choice;
    string dirName;

    while (true) {
        cout << "\nMAIN MENU" << endl;
        cout << "\n----------------------\n";
        cout << "1. Display List of Files" << endl;
        cout << "2. Create New Directory" << endl;
        cout << "3. Change the Working Directory" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the Number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayFiles();
                break;
            case 2:
                cout << "Enter new directory name: ";
                cin >> dirName;
                createDirectory(dirName);
                break;
            case 3:
                cout << "Enter directory to change to: ";
                cin >> dirName;
                changeDirectory(dirName);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid Option. Please try again." << endl;
        }
    }
    return 0;
}
