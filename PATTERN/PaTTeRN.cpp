#include <iostream>
using namespace std;
int main () {
int n;    
cout<<" ENTER THE NUMBER OF LINES: ";
cin>>n;
int nsp=1;
for(int k=1;k<=n;k++) {
    cout<<k<<" ";
}
for (int m=n-1;m>=1;m--) {
    cout<<m<<" ";
}
cout<<endl;
for(int i=1;i<=n;i++) {
    for(int j=1;j<=n-i;j++) {
        cout<<j<<" ";
    }
    for(int j=1;j<=nsp;j++) {
        cout<<"  ";
    }
    for(int j=n-i;j>=1;j--) {
        cout<<j<<" ";
    }
    nsp+=2;
    cout<<endl;
}
}
