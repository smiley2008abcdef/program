#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS : ";
    cin>>n;
    int nsp=1;
    for( int k=1;k<=(2*n-1);k++) {
        cout<<" * ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for( int j=n-1;j>=i;j--) {
            cout<<" * ";
        }
        for (int j=1;j<=nsp;j++) {
            cout<<"   ";
        }
        for (int j=n-1;j>=i;j--) {
            cout<<" * ";
        }
        nsp+=2;
        cout<<endl;
    }
}
        
