/*12. **Coin Toss Simulator**
    Function simulates 100 coin flips and counts Heads/Tails.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char coin_toss();//Return H/T for Head/Tail.
void report_N_toss(int N);//Return counts of H/T of N toss.

int main()
{
    srand(time(NULL));

    cout << "This program counts N coin flip and counts Heads/Tails" << endl;
    cout << "Enter number of flip: " << endl;
    int N;
    cin >> N;
    report_N_toss(N);
    return 0;
}

char coin_toss()
{
    int result = rand() % 2;
    if (result == 0) return 'H';
    else return 'T';
}
void report_N_toss(int N)
{
    int heads = 0, tails = 0;
    char result;
    for (int i = 0; i < N; ++i)
    {
        result = coin_toss();
        if (result == 'H') heads += 1;
        else tails += 1;
    }
    cout << "Result of " << N << " coin flips.\n";
    cout << "Heads = " << heads << endl;
    cout << "Tails = " << tails << endl;
}
