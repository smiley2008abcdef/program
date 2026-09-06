#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER THE NUMBER OF TERMS: ";
    cin>>n;
    int a=1;
    for (int i=1 ; i<=n; i++) {
        cout<<a<<" ";
        a=a*2;
    }
    
}    
