#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS: ";
    cin>>n;
    int ml=(n/2)+1;
    int nsp=n/2;
    int nstars=1;
    for (int i=1;i<=n;i++) {
        for(int j=1;j<=nsp;j++) {
            cout<<"   ";
        }
        for( int j=1;j<=nstars;j++) {
            cout<<" * ";
        }
        if (i<ml) {
            nsp--;
            nstars+=2;
        }
        else  {
            nsp++;
            nstars-=2;
        }
        cout<<endl;
    }
}
