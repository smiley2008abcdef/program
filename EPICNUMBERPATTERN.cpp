 #include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS : ";
    cin>>n;
    int nsp=1;
    for( int k=1;k<=(2*n-1);k++) {
        cout<<k<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++) {
        for( int j=1;j<=n-i;j++) {
            cout<<j<<" ";
        }
        for (int j=1;j<=nsp;j++) {
            cout<<"  ";
        }
        for (int j=n+i;j<=(2*n-1);j++)  {
            cout<<j<<" ";
        }
        nsp+=2;
        cout<<endl;
    }
}        