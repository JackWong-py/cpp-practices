//9. **Basic File Write**
//
//   * Ask the user for 5 lines of text and save them into `exercise09.txt` using `ofstream`.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "This program ask user for 5 lines of text.\n";
    cout << "Please enter 5 lines of text. Press ennter after each line end.\n";

    string lines[5];
    string line;

    for (int i = 0; i < 5; i++)
    {
        cout << "Line " << i + 1 << ": ";
        getline(cin, line);

        // If the first getline returns immediately (because leftover newline),
        // you can handle it by checking and retrying once:
        if (line.empty() && cin.eof() == false && i == 0)
        {
            --i;
            continue;
        }
        // In typical programs you would do std::cin.ignore(), but
        // this protects against a leftover newline when switching from >> to getline.
        lines[i] = line;
    }

    ofstream ofs("exercise09.txt");
    if(!ofs)
    {
        cerr << "Error: cannot open notes.txt for writing.\n";
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        ofs << lines[i] << '\n';
    }
    //optional
    ofs.close();

    cout << "Saved 5 line to exercise09.txt.\n";
    return 0;
}
