//8\. \*\*Palindrome Checker\*\* – Check if a user-entered string is a palindrome (ignore case and spaces).
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool is_palindrome(const string& text)
{
    string plain;

    for (int i = 0; i < text.length(); ++i)
    {
        char ch = text[i];
        if (isalpha(ch))
            plain += tolower(ch);
    }
    string reversed = plain;
    reverse(reversed.begin(), reversed.end());

    return (reversed == plain);
}
int main()
{
    string text = "A man, a plan, a canal, Panama!";
    cout << (is_palindrome(text) ? "It is a palindrome." : "It is not a palindrome.");
    return 0;
}
