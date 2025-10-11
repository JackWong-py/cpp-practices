/*14. **Guess the Number Game**
    Program generates random 1–50, user keeps guessing until correct.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

int main()
{
    cout << "Welcome!  This is a guess random number (1-50) program." << endl;

    uniform_int_distribution<> dist(1, 50);//Generate a random number between 1 - 50.
    int answer = dist(gen);
    cout << "Generating random number...\n";
    cout << "A random number has generated.\n";

    int num_guess, attempt = 0;
    do
    {
        cout << "Guess the number: " << endl;
        if(!(cin >> num_guess))
        {
            cout << "Invalid input. Enter number only:\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        attempt++;

        if (num_guess > answer)
        {
            cout << "Your guess is too high. Guess lower.\n";
        }else if (num_guess < answer)
        {
            cout << "Your guess is too low. Guess higher.\n";
        }
    }while(num_guess != answer);

    cout << "Congratulation! The random number is " << answer << "!\n";
    cout << "You use " << attempt << " attempt.\nBest luck next time.";

    return 0;
}
