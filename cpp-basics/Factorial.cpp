#include <iostream>
using namespace  std;
int fact=1;
int factorial(int value){
if (value <=0)
{
    cout<<"Factorial is 0"<<endl;
}else{
    for (int i = value; i > 0; i--)
    {
        fact*=i;
    }
    return fact;
}

}
int main(){
int number;
cout<<"Enter the number you want to find factorial "<<endl;
cin>>number;

cout<<"The Factorial is "<<factorial(number)<<endl;
}