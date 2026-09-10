#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER THE NATURAL NUMBER : ";
    cin>>n;
    if (n>1) {
        for (int i =n-1;i>=1;i--) {
            if (n%i==0) {
                cout<<"HIGHEST FACTOR OF "<<n<<" IS : "<<i;
                break;
            }
        }

    }
    else {
        cout<<"ENTER A NATURAL NUMBER GREATER THAN 1";
    }
} 
    
