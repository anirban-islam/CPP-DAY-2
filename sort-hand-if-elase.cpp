#include<iostream>
using namespace std;

int main(){

int age;

cout<<"Enter You're age : ";
cin>>age;

// conditional rendering using if else
if(age>18){
    cout<<"You Can Vote"<<endl<<endl;
}
else{
    cout<<"You're Child"<<endl<<endl;

}

// using sort hand conditional rendering
//variable = (condition) ? expressionTrue : expressionFalse;

string result = (age>18)?"You Can Vote" : "You're Child";
cout<<"Using Sort Hand Conditional Rendering"<<endl;

cout<<result;




return 0;
}
