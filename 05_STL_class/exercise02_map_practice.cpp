/*2. Map Practice – Create a `map<string, int>` that stores student names and scores.

Then, print all key–value pairs sorted alphabetically by name.*/
#include <iostream>
#include <map>

using namespace std;

void display_map(map<string, int> map_to_print)
{
    for(auto itr = map_to_print.begin(), itr_end = map_to_print.end(); itr != itr_end; itr++)
    {
        cout << itr->first << " --> " << itr->second << endl;
    }
}
int main()
{
    map<string, int>name_scores;

    name_scores["Jack"] = 80;
    name_scores["Rachel"] = 99;
    name_scores["Haonan"] = 50;
    name_scores["Kim"] = 65;
    name_scores["Alex"] = 70;

    display_map(name_scores);
    return 0;
}
