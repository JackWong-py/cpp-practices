/*15. **Rock–Paper–Scissors**
    User chooses rock/paper/scissors, computer randomizes choice, decide winner.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

enum choice
{
    ROCK,
    SCISSORS,
    PAPER
};
string play_rps(choice host_choice, char user_choice);
string to_string(choice c);

int main()
{
    cout << "Welcome! This is a rock-scissors-paper program. " << endl;

    int win = 0, lose = 0;
    char play_again = 'y';

    while (play_again == 'y' || play_again == 'Y')
    {
        uniform_int_distribution<>dist(0, 2);//Generate a integer between 0-2.
        int random_choice = dist(gen);//Assign value to random_choice.
        choice host_choice = static_cast<choice>(random_choice);//Change the type from int to choice.

        char user_choice;//Get user choice
        cout << "Rock, Scissors, Paper! Enter your choice (r/s/p):" << endl;
        cin >> user_choice;
        if (user_choice != 'r' && user_choice != 's' && user_choice != 'p')
        {
            cout << "Invalid input! Please choose (r)ock, (s)cissors, (p)aper. ";
            continue;
        }

        string result = play_rps(host_choice, user_choice);

        cout << "Host choice: " << to_string(host_choice) << endl;//Display host choice

        if (result == "win")
        {
            win ++;
            cout << "You win!\n";
        }
        else if (result == "lose")
        {
            lose ++;
            cout << "You lose!\n";
        }
        else
        {
            cout << "Tie!\n";
        }
        cout << "Win = " << win << ", Lose = " << lose << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;
    }

    return 0;
}
string play_rps(choice host_choice, char user_choice)
{
    string result;
    switch (host_choice)
    {
    case ROCK:
        if (user_choice == 'p'){result = "win";}
        else if (user_choice == 's'){result = "lose";}
        else {result = "tie";}
        break;
    case SCISSORS:
        if (user_choice == 'p'){result = "lose";}
        else if (user_choice == 's'){result = "tie";}
        else {result = "win";}
        break;
    case PAPER:
        if (user_choice == 'p'){result = "tie";}
        else if (user_choice == 's'){result = "win";}
        else {result = "lose";}
        break;
    }
    return result;
}
string to_string(choice c)
{
    switch(c)
    {
        case ROCK: return "Rock";
        case SCISSORS: return "Scissors";
        case PAPER: return "Paper";
        default: return "Unknown";
    }
}
