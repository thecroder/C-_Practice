#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i =1;
    // First try
    // while(i<=n){
    //     int j =n;
    //     while(j>=1){
    //         cout << j ;
    //         j-- ;
    //     }
    //     cout << endl ;
    //     i++ ;
    // }
    //Second try
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << n-j+1 ;
            j++ ;
        }
        cout << endl ;
        i++ ;
    }
}