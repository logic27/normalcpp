#include<bits/stdc++.h>
using namespace std;

int cnt =0;

void print(){
    if(cnt ==3) return;
    cout<<cnt<<endl;

    cnt++;
    //recursive fucntion is called here

    print();

}

int main(){
    print();
    return 0;
}

