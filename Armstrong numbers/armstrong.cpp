#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {

    int original = num;
    int digits = 0;
    int sum = 0;

    int temp = num;

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    temp = num;

    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main(){

    int number;

    cout<<"Ingrese numero: ";
    cin>>number;

    if(isArmstrong(number))
        cout<<"Es Armstrong"<<endl;
    else
        cout<<"No es Armstrong"<<endl;

}