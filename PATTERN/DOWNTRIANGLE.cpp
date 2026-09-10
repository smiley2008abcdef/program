#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<" ENTER THE NUMBER OF ROWS : ";
    cin>>n;
    for(int i=1;i<=n;i+=1) {
        for (int j=n;j>=i;j--) {
            cout<<" * ";
        }
    cout<<endl;    
    }
}
