#include <iostream>
using namespace std;
int main (){
    int row;
    cout<<" ENTER THE NUMBER OF ROWS: ";
    cin>>row;
    int col;
    cout<<" ENTER THE NUMBER OF COLUMNS: ";
    cin>>col;
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=col-i;j++) {
            cout<<"   ";
        }
        for(int j=1;j<=i;j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}
