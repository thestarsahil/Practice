#include<bits/stdc++.h>
using namespace std;

int main(){
    static int a;
    int b,c;
    int *ptr=new int[5];
    *(ptr+2)=10;
    delete[]ptr;
    ptr=NULL;
    return 0;
}