#include <iostream> 
using namespace std;
int main() {
int n; 
do{

    cout<<"Enter a positive integer:"<<endl; cin>>n;
} while(n<=0);
    for(int i=10; i>=0; i--) {
    cout<<n<<"x"<<i<<"="<<n*i<<endl; }
    return 0;

    }