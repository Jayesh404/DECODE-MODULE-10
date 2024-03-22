# include <iostream>
using namespace std;

void func(int x){
    int digit=0;
    while(x!=0){
        x/=10;
        digit++;
    }
    cout<<digit*digit;
}

int main(){

    int x;
    cin>>x;
    func(x);

    return 0;
}