#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cin >> n;
    int i = 1;
    while(i<=n){
        if(n%i==0){
            cout<<"Not prime"<< endl;
        }
        
        i++;
    }
// cout << sum;
}