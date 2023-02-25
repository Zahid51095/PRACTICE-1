#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    int input;
    for (int i = 1; i < n; i++)
    {
        cin >> input;
        sum -= input;
    }

    cout << sum << endl;
    return 0;
}