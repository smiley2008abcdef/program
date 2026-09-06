#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    cout<<"THE TABLE OF "<<n<<" IS : "<<endl;
    for (int i=1;i<=10;i++) {
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
}
