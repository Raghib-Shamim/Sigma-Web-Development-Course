#include<iostream>
#include<string>
#include<algorithm>
bool isCreditCardValid(std::string cardNumber){
    //Remove any whitespace from the input string
    cardNumber.erase(std::remove(cardNumber.begin(),cardNumber.end(),' '),cardNumber.end());
int sum=0;
int digit;
bool alternate=false;
for(int i =cardNumber.length()-1; i>=0; i--){

digit =cardNumber[i]-'0';
if(alternate){
    digit *=2;
    if(digit>9){
        digit-=9;
    }
}
sum +=digit;
alternate=!alternate;
}
return(sum%10==0);
}
int main(){
    std::string cardNumber;
    std::cout<<"Enter credit card number:";
    std::getline(std::cin,cardNumber);
    if(isCreditCardValid(cardNumber))
    {
        std::cout<<"Valid credit card number"<<std::endl;

    }else
    {
        std::cout<<"Invalid credit card number"<<std::endl;
    }
    return 0;
}