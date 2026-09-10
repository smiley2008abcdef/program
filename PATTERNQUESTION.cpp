#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS: ";
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (i%2==0) {
            for(int j=65;j<=i+64;j+=1) {
                cout<<(char)j<<" ";
            }

        }
        else {
            for (int m=1;m<=i;m++) {
                cout<<m<<" ";
            }
        }
    cout<< endl;    
}
}