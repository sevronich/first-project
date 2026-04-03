//Exchange money proram USD ->KHR
#include <iostream>
using namespace std;
int main () {
    system ("clear"); 
    float usd ;
    cout <<"-------Money Exchange-----"<<endl;
    cout <<" Enter amount (USD) : "; cin>>usd;
    float result = usd * 4000;
    cout << "\nResult is : "<<result<<" riels "<<endl;
    return 0 ;
  
}