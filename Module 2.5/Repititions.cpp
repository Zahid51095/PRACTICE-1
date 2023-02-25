#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int max_length = 0;
    int current_length = 1;
    char current_char = str[0];

    for (int i = 1; i < str.length(); i++)
    {

        if (str[i] == current_char)
        {
            current_length++;
        }
        else
        {

            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_length = 1;
            current_char = str[i];
        }
    }

    if (current_length > max_length)
    {
        max_length = current_length;
    }

    cout << max_length << endl;
    return 0;
}