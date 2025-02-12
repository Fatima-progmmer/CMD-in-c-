#include <iostream>
#include <fstream>
#include <string>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

// Function to display the current directory
void displayDirectory() {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(".")) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            cout << ent->d_name << endl;
        }
        closedir(dir);
    } else {
        cout << "Could not open directory" << endl;
    }
}

// Function to create a new directory
void createDirectory(string dirName) {
    #ifdef _WIN32
        if (mkdir(dirName.c_str()) == -1)  
    #else
        if (mkdir(dirName.c_str(), 0777) == -1)  
    #endif
    {
        cout << "Error creating directory" << endl;
    } else {
        cout << "Directory created successfully" << endl;
    }
}

// Function to copy a file
void copyFile(string source, string destination) {
    ifstream src(source, ios::binary);
    ofstream dest(destination, ios::binary);

    if (!src.is_open() || !dest.is_open()) {
        cout << "Error copying file" << endl;
        return;
    }

    dest << src.rdbuf();

    src.close();
    dest.close();

    cout << "File copied successfully" << endl;
}

// Function to move a file
void moveFile(string source, string destination) {
    if (rename(source.c_str(), destination.c_str()) != 0) {
        cout << "Error moving file" << endl;
    } else {
        cout << "File moved successfully" << endl;
    }
}

// Function to change the current directory
void changeDirectory(string dirName) {
    if (chdir(dirName.c_str()) != 0) {
        cout << "Error changing directory" << endl;
    } else {
        cout << "Directory changed successfully" << endl;
    }
}

int main() {
    string command, arg1, arg2;

    while (true) {
        cout << "\nFile Manager> ";
        cin >> command;
        cin.ignore();  // Fix input issue
        cout << "Command received: " << command << endl;  // Debugging output

        if (command == "exit") {
            break;
        } else if (command == "ls") {
            displayDirectory();
        } else if (command == "mkdir") {
            cout << "Enter directory name: ";
            getline(cin, arg1);  // Fix input
            createDirectory(arg1);
        } else if (command == "cp") {
            cout << "Enter source file: ";
            getline(cin, arg1);
            cout << "Enter destination file: ";
            getline(cin, arg2);
            copyFile(arg1, arg2);
        } else if (command == "mv") {
            cout << "Enter source file: ";
            getline(cin, arg1);
            cout << "Enter destination file: ";
            getline(cin, arg2);
            moveFile(arg1, arg2);
        } else if (command == "cd") {
            cout << "Enter directory name: ";
            getline(cin, arg1);
            changeDirectory(arg1);
        } else {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}
