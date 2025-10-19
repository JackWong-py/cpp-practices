/*10. **Scope Test**
    Create a global variable and a local variable with the same name. Show how scope works inside a function.*/
#include <iostream>

using namespace std;

//Global variables.
int counter = 0;

//Function declarations (prototype)
void show_counter();
void increases_counter();

int main()
{
    cout << "Program start - global counter = " << counter << endl;
    int counter = 100; //Local variable shadow the global one
    cout << "Inside main(): local counter = " << counter << endl;

    //Call a function that uses global one
    increases_counter();
    show_counter();

    cout << "Back in main() function: local counter = " << counter << endl;
    cout << "Back in main() function: global counter now = " << ::counter << endl; //Access global counter explicitly
    return 0;
}

void increases_counter()
{
    cout << "Inside increases_counter(): global counter before = " << counter << endl;
    counter += 5;
    cout << "Inside increases_counter(): global counter after = " << counter << endl;
}

void show_counter()
{
    cout << "Inside show_counter(): global counter = " << counter << endl;
}
