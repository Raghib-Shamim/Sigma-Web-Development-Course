// for example of function
#include<iostream>
using namespace std;
int sum(int a, int b){
    return (a*b);
}
float sum(float a, float b){
    return (a*b);
}
int main(){
   int result1 = sum(5,5);
   float result2 = sum(5.5f,5.5f);
   cout<<"Result1:"<<result1<<endl;
   cout<<"Result2:"<<result2<<endl;
   return 0;
}

