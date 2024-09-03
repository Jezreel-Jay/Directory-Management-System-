#include <iostream> // Facilitates input/output operations.
#include <vector> // Facilitates dynamic storage.
#include <string> // Enables string manipulation.

using namespace std;

vector<string> files; // Declare the vector without initialization
string currentDir = "C:\\Users\\UserName\\Documents";

void initializeFiles() {
    files.push_back("file1.txt");
    files.push_back("file2.cpp");
    files.push_back("report.doc");
    files.push_back("image.jpg");
}

void displayFiles() {
    cout << endl; // endl is used for both formatting the output and managing the output stream’s buffer.
    cout << "    LIST FILE DETAIL" << endl;
    cout << "------------------------------\n";
    cout << "1. List All Files\n2. List of Extension Files\n3. List of Name Wise\n";
    cout << "Enter the Number: ";
    int choice; cin >> choice;
    if (choice == 1) {
        cout << endl;
        cout << "List of All(*.*) Files\n";
        for (size_t i = 0; i < files.size(); ++i) {
            cout << files[i] << endl;
        }
        cout << "(continues...)" << endl << endl;
        cout << "Total Files: " << files.size() << "\nPress any key to continue.." << endl << endl;
        cin.ignore(); cin.get(); // wait for user input
    }
}

void createDirectory() {
    string dirName;
    cout << endl;
    cout << "Enter the Directory name: "; cin >> dirName;
    cout << "Current directory: " << currentDir << " " << dirName << " Directory Successfully Created\n";
    cout << "Press any key to continue..." << endl << endl;
    cin.ignore(); cin.get(); // wait for user input
}

void changeDirectory() {
    cout << endl;
    cout << "Current Directory: " << currentDir << "\nChange Directory\n  ------------------\n1. Step by Step Backward\n2. Goto Root Directory\n3. Forward Directory\n";
    cout << "Enter the Number: ";
    int choice; cin >> choice;
    if (choice == 3) {
        string newDir;
        cout << endl;
        cout << "Please enter the Directory Name: "; cin >> newDir;
        currentDir += "\\" + newDir;
        cout << "Current Directory: " << currentDir << "\nPress any key to continue..." << endl << endl;
        cin.ignore(); cin.get(); // wait for user input
    }
}

int main() {
    initializeFiles(); // Initialize the files vector
    while (true) {
        cout << "    MAIN MENU" << endl;
        cout << "------------------------------\n";
        cout << "\n1. To Display List of Files\n2. To Create New Directory\n3. To Change the Working Directory\n4. Exit\n";
        cout << "Enter the Number: ";
        int choice; cin >> choice;
        if (choice == 1) displayFiles();
        else if (choice == 2) createDirectory();
        else if (choice == 3) changeDirectory();
        else if (choice == 4) { cout << "Exiting..\nThank You :)\n"; break; }
    }
    return 0;
}

