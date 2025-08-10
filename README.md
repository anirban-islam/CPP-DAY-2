
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)


## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day Two CPP 🎈

# conditional-operator-using-if-else-and-sort-hand-rendering-C++

	#include <iostream>
	using namespace std;

	int main()
	{
		int a, b;
		cout << "Enter The value of A : ";
		cin >> a;
		cout << "Enter The value of B : ";
		cin >> b;

		// conditional operator
		//if(condition) { working code }

		if (a > b)
		{
			cout << "Value A is Greater than B";
		}
		else if (b > a)
		{
			cout << "Value B is Greater than A";
		}
		else if (a == b)
		{
			cout << "Value A is Equal to B";
		}

		return 0;
	}


# Switch-Case-In-C++
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
		//  case x:
		//    code block
		//    break;
		//  case y:
		//    code block
		//    break;
		//  default:
		//    code block
		//}

		// Switch(condition) Case Use for One conditional with multiple answer
		// case(Ans) if answer match the code will run
		// break keyword  code stop command for the block
		// default keyword is that statement that should run anyway if the break keyword not found

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

# While-Do-While-Loop-In-C++
	#include<iostream>
	using namespace std;

	int main(){
		int num;
		cout<<"Enter The limit Number : ";
		cin>>num;

		for(int i = 1; i <= num; i++){
			cout<<"General loop Output "<<endl;
			cout<<"Number : "<<i<<endl;

			for(int j = 1; j <= i; j++){
				cout<<"Output From Inner Loop"<<endl;
				cout<<j<<endl;
			}
		}

		return 0;
	}

# For-Loop-In-C++
	#include<iostream>
	using namespace std;

	int main(){
		//When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
		//for (statement 1; statement 2; statement 3) {
		//  code block to be executed
		//}
		//Statement 1 is executed (one time) before the execution of the code block.
		//Statement 2 defines the condition for executing the code block.
		//Statement 3 is executed (every time) after the code block has been executed.

		cout<<"Print Number Using For Loop"<<endl;

		int num;
		cout<<"Enter The Number Where You want to Print: ";
		cin>>num;

		for(int i = 1; i <= num; i++){
			cout<<"Number : "<<i<<endl;
		}

		return 0;
	}


#  Nested-Loop-In-C++
	#include<iostream>
	using namespace std;

	int main(){
		int num;
		cout<<"Enter The limit Number : ";
		cin>>num;

		for(int i = 1; i <= num; i++){
			cout<<"General loop Output "<<endl;
			cout<<"Number : "<<i<<endl;

			for(int j = 1; j <= i; j++){
				cout<<"Output From Inner Loop"<<endl;
				cout<<j<<endl;
			}
		}

		return 0;
	}

# sort-hand-if-elase-C++

	#include<iostream>
	using namespace std;

	int main(){
		int num;
		cout<<"Enter The limit Number : ";
		cin>>num;

		for(int i = 1; i <= num; i++){
			cout<<"General loop Output "<<endl;
			cout<<"Number : "<<i<<endl;

			for(int j = 1; j <= i; j++){
				cout<<"Output From Inner Loop"<<endl;
				cout<<j<<endl;
			}
		}

		return 0;
	}

