#include<iostream>
using namespace std;
int main()
{
    int num = 10;
    int i;
    for(i = 0; i < num; i++)
    {
        if (i == 8)
        {
            break;
        }
        cout << i << " ";
    }
    return 0;
}