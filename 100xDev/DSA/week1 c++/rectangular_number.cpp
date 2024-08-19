#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){  
        for(int j=i;j<=col;j++){
            cout<<j;
        }
        for(int k=1;k<i;k++){
            cout<<k;
        }   
        cout<<endl;
        
    }
}