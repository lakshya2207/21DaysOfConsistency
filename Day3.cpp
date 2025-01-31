#include <iostream>
using namespace std;

// int main() {
//     // int x;
//     // int y;
//     string str;
//     // cout << "Enter the value f x and y";
//     cout << "Enter your name please \n";
//     // cin >> x >> y
//     // cin >> str;
//     getline(cin, str);
//     // cout << "Value of x: " << x << " and y: " <<y;
//     cout << "Your name is " << str;
//     return 0;
// }
int main()
{
    cout << "Enter your age please \n";
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "You're not an Adult";
    }
    else if (age==18)
    {
        cout << "You're just 18";
        /* code */
    }
    
    else
    {
        cout << "You're an Adult";
    }
    return 0;
}