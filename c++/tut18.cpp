#include<iostream>
void printInvTriangle(int n) {
    for (int i = 0; i < n; i++){
        int space = i;
        for (int j=0; j<2*n-i-1; j++){
            if (space){
                std::cout << "  ";
                space--;
            }
            else {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}
int main()
{
    printInvTriangle(5);
    return 0;
}





