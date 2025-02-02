#include <iostream>
using namespace std;
bool isEven(int n){
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void bringbacktheking(string &str){
    str = "laskhya";
}
int main()
{
    int num;
    cout << "Enter ";
    cin >> num;
    if (isEven(num))
    {
        cout << "Even";
        return 0;
    }
    cout << "Odd";
    return 0;
}