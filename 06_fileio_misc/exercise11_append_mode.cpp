//11. **Append Mode**
//
//    * Modify Exercise 9 so that it appends new lines to the existing file rather than overwriting it.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file("exercise09.txt", ios::app);
    if(!file.is_open())
    {
        cout << "Could not open file! " << endl;
        return 1;
    }
    cout << "File open succesfully (append mode)." << endl;
    cout << "Enter the line you want to add. Type 'exit' to stop." << endl;

    string line;
    while(true)
    {
        cout << "> ";
        getline(cin, line);

        if(line == "exit")break;

        file << line << endl;
    }

    file.close();
    cout << "Text added successfully to file. " << endl;
    return 0;
}
