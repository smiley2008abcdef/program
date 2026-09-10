#include <iostream>
using namespace std;
int main() {
    int n,temp;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    int rev=0;
    temp=n;
    while (temp!=0) {
        int ld=temp%10;
        rev*=10;
        rev+=ld;
        temp=temp/10;
    }
    cout<<"ADD : "<<rev+n;
}