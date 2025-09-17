#include <iostream>
using namespace std;
int DecTObinary(int value){
    int ans=0;
    int power=1;
while (value > 0)
{
    int rem=value % 2;
    value=value/2;
    ans+=(rem*power);
    power*=10;
}
return ans;

}
int main(){
cout<<"Enter the Decimal you want to convert into Binary"<<endl;
int number;
cin>>number;
cout<<"The Binary of "<<number<<" is "<<DecTObinary(number);

for (int i = 0; i <=10; i++)
{
    cout<<DecTObinary(i);
    cout<<endl;
}

}