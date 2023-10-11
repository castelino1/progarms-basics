#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ascii1, ascii2, ascii3, ascii4, ascii5;

    cout << "Enter five ASCII values (space-separated): ";
    cin >> ascii1 >> ascii2 >> ascii3 >> ascii4 >> ascii5;

    // Convert ASCII values to characters
    char c1 = static_cast<char>(ascii1);
    char c2 = static_cast<char>(ascii2);
    char c3 = static_cast<char>(ascii3);
    char c4 = static_cast<char>(ascii4);
    char c5 = static_cast<char>(ascii5);

    // Output the words
    cout << "Corresponding words: " << c1 << c2 << c3 << c4 << c5 << endl;

    return 0;
}