# include<iostream>
using namespace std;

int main(){

    int x=5,y=8;
    int* a=&x,*b=&y;
    cout<<(*a)*(*b);

    return 0;
}