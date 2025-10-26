//10. **String Iterator Practice** – Use an iterator to iterate through a `string` and count vowels.
#include <iostream>
#include <map>
#include <cctype>

using namespace std;

map<char, int> get_map(string text)
{
    map<char, int> vowel_count;
    for (auto itr = text.begin(); itr != text.end(); itr++)
    {
        char ch = tolower(*itr);
        if (isalpha(ch))
        {
            if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
                vowel_count[ch] += 1;
        }
    }
    return vowel_count;
}
void display_map(const map<char, int>& map_to_display)
{
    for (auto itr = map_to_display.begin(); itr != map_to_display.end(); ++itr)
    {
        cout << itr->first << ": " << itr->second << "\n";
    }
}
int main()
{
    cout << "This program count vowels. \n";

    string text = "";
    cout << "Enter text: " << endl;
    getline(cin, text, '\n');
    cout << "Text: " << text << endl;
    map<char, int> vowels_num = get_map(text);
    display_map(vowels_num);
    return 0;
}
