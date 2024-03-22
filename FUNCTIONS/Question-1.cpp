# include <iostream>
using namespace std;

void square(int x){
    for (int i = 1; i <=x; i++)
    {
        cout<<i*i<<endl;
    }
    
}

int main(){

    int n;
    cin>>n;
    square(n);

    return 0;
}