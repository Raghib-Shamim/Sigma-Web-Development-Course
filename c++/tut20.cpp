#include <iostream>
using namespace std;
 
int a = 5; //global variable
 
void func()
{
    cout << a << endl;
}
 
int main()
{
    int a = 10; //local variable
    cout << a << endl;
    func();
    return 0;
}