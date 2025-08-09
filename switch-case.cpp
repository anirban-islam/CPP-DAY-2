#include<iostream>
using namespace std;

int main(){
int day;
cout<<"Enter The Number Of Day : ";
cin>>day;

//The switch expression is evaluated once
//The value of the expression is compared with the values of each case
//If there is a match, the associated block of code is executed
//The break and default keywords are optional, and will be described later in this chapter

//switch(expression) {
  //case x:
    // code block
   // break;
  //case y:
    // code block
    //break;
  //default:
    // code block
//}



// Switch(condition) Case Use for One conditional with multiple answer
// case(Ans) if answer match the code will run
// break keyword  code stop command for the block
// default keyword is that statement that shoud run anyway if the break keyword not found

switch(day){
 case 1:
    cout<<"Saturday";
    break;
 case 2:
    cout<<"Sunday";
    break;
 case 3:
    cout<<"Monday";
    break;
 case 4:
    cout<<"Tuesday";
    break;
 case 5:
    cout<<"Wednesday";
    break;
 case 6:
    cout<<"Thursday";
    break;
 case 7:
    cout<<"Friday";
    break;
 default:
    cout << "Invalid Input";
}

return 0;
}
