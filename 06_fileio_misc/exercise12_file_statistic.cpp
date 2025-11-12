//12. **File Statistics**
//
//    * Read a text file and count how many lines, words, and characters it contains.
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("exercise12.txt");
    if(!file.is_open())
    {
        cout << "Could'nt open file.";
        return 1;
    }
    int char_count = 0;
    int line_count = 0;
    int word_count = 0;

    string line;
    while(getline(file, line))
    {
        line_count++;
        char_count += line.length() + 1;

        stringstream ss(line);
        string word;
        while(ss >> word)
        {
            word_count++;
        }
    }
    file.close();

    cout << "File Statistics:\n";
    cout << "Lines     : " << line_count << endl;
    cout << "Words     : " << word_count << endl;
    cout << "Characters: " << char_count << endl;

    return 0;
}
