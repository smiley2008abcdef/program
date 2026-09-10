#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER : ";
    cin>>n;
    while(n>0) {
        int ld=n%10;
        cout<<ld;
        n=n/10;
    }
}