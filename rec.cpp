#include<bits/stdc++.h>
using namespace std;


int i =1;
void func(int i , int n){

    if(i>n) return;
    cout<<"anmol"<<endl;
    

    //
    func(i+1 , n);
}

int main(){
    int n =3;
    func(i,n);
    return 0;
}