#include <iostream>
#include <string>
#include <cstring>  // เพิ่มไลบรารีนี้เพื่อใช้ strcpy
using namespace std;

int main() {
    string name, movie, day, farewell;
    string studentID;

    // Greeting and asking for the user's name
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, name); // Get full name

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    // Asking for the student ID
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentID;

    // Use an array to store the student ID and get the first two digits
    char studentIDArray[studentID.length() + 1];
    strcpy(studentIDArray, studentID.c_str()); // Copy string into char array

    // Extracting the first two digits from the student ID
    int firstTwoDigits = (studentIDArray[0] - '0') * 10 + (studentIDArray[1] - '0');

    // Determining the GEAR based on the first two digits of the student ID
    int gearYear = firstTwoDigits - 12;
    cout << "Fahsai: I think you may be GEAR " << gearYear << ". I have a free movie ticket for you.\n";

    // Asking about the movie
    cin.ignore(); // Clear the input buffer
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, movie);

    // Asking about the free day
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin, day);

    // Final response
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";

    // User's farewell
    cout << name << ": ";
    getline(cin, farewell);

    // Fahsai's farewell
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";

    return 0;
}
