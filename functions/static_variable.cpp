#include<iostream>
using namespace std;

// int v=0; // global variable
void fun(){
    static int v=0; // just like global variable , excessable through function
    int a =5; // a erase after stack remove after function call
    v++;
    cout<<a<<" "<<v<<endl;
}
int main(){
    fun();
    fun();
    fun();
    v++;
    cout<<v<<endl;
} 