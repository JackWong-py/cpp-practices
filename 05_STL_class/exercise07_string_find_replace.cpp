//7\. \*\*String Find and Replace\*\* – Write a function `string replace\_word(string text, string old\_word, string new\_word)`
//
//that replaces all occurrences.
#include <iostream>

using namespace std;

string replace_word(string text, const string& old_word, const string& new_word)
{
    if (old_word.empty())return text;

//    size_t pos = text.find(old_word, 0);

//    while (pos != string::npos)
//    {
//        text.replace(pos, old_word.length(), new_word);
//        pos = text.find(old_word, pos + new_word.length());
//    }
    for (size_t pos = text.find(old_word, 0); pos != string::npos; pos = text.find(old_word, pos + new_word.length()))
        text.replace(pos, old_word.length(), new_word);
    return text;
}

int main()
{
    cout << "This program replace word. " << endl;

    string text = "I love cat so much, but I am not cathreyn. ";
    cout << "Original text: " << text << endl;

    string new_text = replace_word(text, "cat", "elephant");
    cout << "New text: " << new_text << endl;

    return 0;
}
