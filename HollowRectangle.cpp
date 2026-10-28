#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"length";
    cin>>n;
    cout<<"breadth";
    cin>>m;
    for(int i = 1; i <=n; i++){
        if( i == 1 || i == n){
            for(int j = 1 ; j <= m; j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for( int j = 1; j<= m-2; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}