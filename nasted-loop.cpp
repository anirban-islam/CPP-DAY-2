#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter The limit Number : ";
cin>>num;

for(int i =1; i<=num; i++){
    cout<<"General loop Output "<<endl;
    cout<<"Number : "<<i<<endl;

    for(int j=1; j<=i; j++){
            cout<<"Output From Inner Loop"<<endl;
        cout<<j<<endl;
    }
}

return 0 ;
}
