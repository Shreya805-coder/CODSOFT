#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 15;
    int n,m, i = 0;

    cout<<"Guess the no."<<endl;

    do{
        cin>>n;
        cout<<n<<endl;
        if(n == x){
            cout<<"correct";
            break;
        }
        else if(n > x){
            cout<<"guess lower";
        }
        else{
            cout<<"guess higher";
        }
        cout<<endl;
    }while(i>=0);
    i++;
    return 0;
}