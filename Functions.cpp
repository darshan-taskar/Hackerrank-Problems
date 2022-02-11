/*
Input Format

Input will contain four integers - a,b,c,d , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6
*/

#include <bits/stdc++.h>
using namespace std;
int max_of_four(int num1, int num2, int num3, int num4)
{
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        return num1;
    }
    else if (num2 > num3 && num2 > num4)
    {
        return num2;
    }
    else if (num3 > num4)
    {
        return num3;
    }
    else
    {
        return num4;
    }
}
int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << max_of_four(a, b, c, d) << endl;
}
