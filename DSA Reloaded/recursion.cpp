#include <bits/stdc++.h>
using namespace std;

// int cnt = 0;
// void print(){
//     if(cnt==3) return ;
//     cout<<cnt<<endl;
//     cnt++;
//     print();
// }

// int main() {
//     print();
//     return 0;
// }

//! Print name n time
// void name(int i, int n){
//     if(i>n) return;
//     cout<<"Dev"<<endl;
//     name(i+1, n);
// }
// int main(){
//     int n;
//     cin>>n;
//     name(1,n);
// }

//! Print from 1 to n linearly
// void lin(int i, int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     lin(i+1, n);
// }
// int main(){
//     int n;
//     cin>>n;
//     lin(1,n);
// }

//! Print from n to 15 linearly
void lin(int i,int n){
    if(i<1) return;
    cout<<i<<" ";
    lin(i-1,n);
}
int main(){
    int n;
    cin>>n;
    lin(n,n);
}