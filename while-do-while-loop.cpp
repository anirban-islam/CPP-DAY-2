#include<iostream>
using namespace std;

int main(){

    //The while loop loops through a block of code as long as a specified condition is true
    //while (condition) {
    // code block to be executed
    //}

    int number;
    cout<<"Enter The Limit Of count : ";
    cin>>number;


    //while loops
    cout<<"While Loop"<<endl;

    int i=1;
    while(i<=number){
        if(i==number){
            cout<<"You Reached Your Limt"<<endl;
        }
        else{
            cout<<"The Number is : "<<i<<endl;
        }

        i++;
    }

    //The do/while loop is a variant of the while loop.
    // This loop will execute the code block once, before checking if the condition is true.
    // Then it will repeat the loop as long as the condition is true.

    //do {
    // code block to be executed
    //}
    //while (condition)

    cout<<"Do-While Loop"<<endl;

    int j =1;
    do{
        if(j==number){
            cout<<"You Reached Your Limt"<<endl;
        }
        else{
            cout<<"The Number is : "<<j<<endl;
        }
        j++;
    }while(j<=number);



return 0;
}
