#include <iostream>
using namespace std;
void square()
{
    int l = 6, w = 4;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void triangle()
{
    int l = 6;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void revtriangle()
{
    int l = 6;
    for (int i = 6 - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void numtriangle()
{
    int l = 6;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << '\n';
    }
}
void numtriangle2()
{
    int l = 6;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << '\n';
    }
}
void pyramid()
{
    int l = 4;
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < (2 * (l - i) + 1); j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void revpyramid()
{
    int l = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < (2 * (l - i) + 1); j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void rhombus()
{
    pyramid();
    revpyramid();
}
void flag()
{
    int l = 4;
    for (int i = 4; i >= 0; i--)
    {

        for (int j = 0; j < (2 * (l - i) + 1); j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (2 * (l - i) + 1); j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
void numsq()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == 6 || j == 6 || j == 0)
            {
                cout << 4;
            }
            else if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << 3;
            }
            else if (i == 2 || i == 4 || j == 2 || j == 4)
            {
                cout << 2;
            }
            else if (i == 3 && j == 3)
            {
                cout << 1;
            }
            else
            {

                cout << i << ',' << j << ' ';
            }
        }
        cout << "\n";
    }
}
void numsqoptimised()
{
    int n = 4;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i, left = j;
            int bottom = 2 * n - 2 - i, right = 2 * n - 2 - j;
            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << "\n";
    }
}
int main()
{
    // square();
    // triangle();
    // numtriangle();
    // numtriangle2();
    // revtriangle();
    // pyramid();
    // revpyramid();
    // rhombus();
    // flag();
    // numsq();
    numsqoptimised();
    return 0;
}