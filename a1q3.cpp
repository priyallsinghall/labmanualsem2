#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    // Accept string input from the user
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Create a copy for converting to lowercase and remove spaces
    string s1 = input;
    // Convert to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // Remove spaces
    s1.erase(remove_if(s1.begin(), s1.end(), ::isspace), s1.end());

    // Check if string is a palindrome
    if (isPalindrome(s1))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

int freq[256] = {0};  

// Count the frequency of each character 
for (size_t i = 0; i < s1.length(); i++) {
    char ch = s1[i];
    // Increment the frequency for the character
    freq[static_cast<unsigned char>(ch)]++;
}

cout << "Character frequencies (case-insensitive):" << endl;
// Print only the characters that appear in the string
for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
        cout << static_cast<char>(i) << ": " << freq[i] << endl;
    }
}


    // Replace vowels in the original string with '*'
    string replaced = input;
    for (char &ch : replaced) {
        // Check case-insensitive vowel
        char lowerCh = tolower(ch);
        if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            ch = '*';
        }
    }
    cout << "String after replacing vowels: " << replaced << endl;

    return 0;
}
