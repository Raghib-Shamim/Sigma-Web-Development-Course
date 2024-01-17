#include<iostream>
using namespace std;
class MyClass {
    public:
    MyClass (){
        cout<<"Constructor called."<<endl;
    }
    ~MyClass (){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    MyClass obj;
    cout<<"Program is finished"<<endl;
    return 0;
}


    