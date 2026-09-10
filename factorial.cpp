 #include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER : ";
    cin>>n;
    int factorial=1;
    while(n!=0) {
        factorial*=n;
        n--;
    }
    cout<<" FACTORIAL IS :" <<factorial;
}    