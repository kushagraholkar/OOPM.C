
#include <iostream>
using namespace std;
void print(int n){
    cout<<"first"<<n<<"natural numbers : ";
    for(int i = 1 ; i <= n ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int sum(int n){
    int s = 0;
    for(int i = 1 ; i <= n ; i++){
        s+=i;
    }
    return s;
}
float average(int sum , int n ){
    return (float)sum/n ;
}
int main() {
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    print(n);
    int S = sum(n);
    cout<<"The sum of first"<<n<<"natural number: "<<S<<endl;
    float avg = average(S , n);
    cout<<"The Average of first"<<n<<"natural number: "<<avg<<endl;
    return 0;
}
