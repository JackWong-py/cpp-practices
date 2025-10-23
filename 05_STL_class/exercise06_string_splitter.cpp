/*6\. \*\*String Splitter\*\* – Ask the user to input a sentence,

and split it into words manually (without using `stringstream`). Store words in a `vector<string>`.*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display_vector(const vector<string> vector_to_display)
{
    cout << "\nVector: {";
    for (int i = 0; i < vector_to_display.size(); ++i)
    {
        if (i != 0)
            cout << ", ";
        cout << vector_to_display[i];
    }
    cout << "}\n";
}
int main()
{
    cout << "This program split a sentence into words manually. " << endl;

    string sentence;
    cout << "Enter a sentence: " << endl;
    getline(cin, sentence, '\n');

    string word = "";
    vector<string> words;

    for (int i = 0; i < sentence.length(); ++i)
    {
        char ch = sentence[i];
        if (ch == '.' || ch == ',' || ch == ' ' || ch == '?' || ch == '!')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word = "";
            }
        }
        else word += ch;
    }
    if (!word.empty())
        words.push_back(word);

    display_vector(words);
    return 0;
}
