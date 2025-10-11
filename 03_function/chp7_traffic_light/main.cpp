/*4. **Traffic Light (Enum + Switch)**
   Use `enum Light { RED, YELLOW, GREEN }`. Input a value and print action (“Stop”, “Slow down”, “Go”).*/
#include <iostream>

using namespace std;

enum light
{
    RED = 1,
    YELLOW,
    GREEN
};

int main()
{
    cout << "This program tell you action of traffic light. " << endl;
    cout << "1) Red light\n";
    cout << "2) Yellow light\n";
    cout << "3) Green light\n";
    cout << "Enter a light: " << endl;

    int choice;
    cin >> choice;

    light choice_light = static_cast<light>(choice);

    switch(choice_light)
    {
        case RED: cout << "Stop"; break;
        case YELLOW: cout << "Slow down"; break;
        case GREEN: cout << "Go"; break;
        default: cout << "Invalid input."; break;
    }
    return 0;
}
