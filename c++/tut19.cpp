#include<iostream>
using namespace std;
int main(){
    int n;
    int a[10];
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter "<<n<<" values : ";
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int  max=a[0],min=a[0];
    for ( int j=0,k = 0 ; j <=n-1 ,k<n;k++, j++){
        if (a[j]>max){
            max = a[j];}
            if(a[k]<min) {min=a[k];
            }
        }
        cout<<"Largest element = "<<max<<endl;
        cout<<"Smallest element = "<<min<<endl;
        return 0;
    }