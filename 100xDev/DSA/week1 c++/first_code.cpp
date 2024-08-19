#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World!"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<"This is a:"<<a<<"\n"<<"This is b:"<<b;
    //Thi is condition 
    int max= a>b ? a:b;
    cout<<"\n"<<"Max is :"<<max<<endl; 
    //This is while loop
    int i = 0;
    while(i < 10){
        cout<<i<<endl;
        i++;
    };
    //This is for loop
    for(int i=0;i<max;i++){
        cout<<i<<endl;
    }
};