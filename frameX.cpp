#include <iostream>
using namespace std;
int main () {
    int rows;
    cout<<" ENTER THE NUMBER OF ROWS : ";
    cin>>rows;
    int col;
    cout<<" ENTER THE NUMBER OF COLUMNS: ";
    cin>>col;
    for (int i=1;i<=rows;i++) {
        for (int j=1;j<=col;j++) {
            if (i==j) {
                cout<<" * ";
            }
            else if (i+j==6) {
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }

}