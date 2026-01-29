#include <iostream>
using namespace std;

int main()
{
    string str = "Shravan@\tRaut#2005";
    string result = "";

    for(int i = 0; i < str.length(); i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || 
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            result = result + str[i];
        }
    }

    cout << "Output: " << result;
    return 0;
}

