#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS : ";
    cin>>n;
    for(int i=n;i!=0;i--) {
        for(int j=n;j>=i;j--) {
            cout<<j<<" ";
        }
    cout<<endl;    
    }
}