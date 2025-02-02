#include <iostream>
using namespace std;
void bringbacktheking(string &str)
{
    str = "laskhya";
}
int main()
{
    string boss = "lallu";
    cout << boss << " is the boss\n";
    bringbacktheking(boss);
    cout << boss << " is the boss";

    return 0;
}