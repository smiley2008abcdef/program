#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< " ENTER THE NUMBER: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" IS A COMPOSITE NUMBER";
            break;
        }
    else{
        cout<<n<<" IS NOT A COMPOSITE NUMBER";
        break;
    }
    }
}    