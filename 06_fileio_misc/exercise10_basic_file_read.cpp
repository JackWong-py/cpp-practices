//10. **Basic File Read**
//
//    * Read and display the content of `exercise10.txt` line by line using `ifstream`.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream read_file("exercise10.txt");
    if (!read_file.is_open())
    {
        cout << "Invalid file! ";
        return 1;
    }
    string line;
    while(getline(read_file, line))
    {
        cout << line << endl;
    }

    read_file.close();
    return 0;
}
