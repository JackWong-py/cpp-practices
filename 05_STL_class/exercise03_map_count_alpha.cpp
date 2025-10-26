/*3. Counting with Map – Input a string of text,

count the occurrences of each word using `map<string, int>`, and display frequency counts.*/
#include <iostream>
#include <map>

using namespace std;

void display_frequency_text(string text)
{
    map<char, int>occur_text;
    for (int i = 0; i < text.size(); i++)
    {
        char alpha = text[i];
        occur_text[alpha] += 1;
    }
    for (auto itr = occur_text.begin(), end_itr = occur_text.end(); itr != end_itr; itr++)
    {
        cout << itr->first << ": " << itr->second << endl;
    }
}
int main()
{
    cout << "This program count the occurrences of each word using map, and display frequency." << endl;
    cout << "Enter a word: " << endl;
    string text;
    getline(cin, text);

    cout << "\nFrequency of text:\n";
    display_frequency_text(text);
    return 0;
}
