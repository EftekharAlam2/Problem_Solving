// Problem - Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.
// Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute.
// How many customers can Chef serve in Y minutes if each customer orders exactly 11 packet of noodles?
// The first and only line of input contains two space-separated integers
// X and Y — the number of stoves and the number of minutes, respectively.

#include<iostream>
using namespace std;

int main() {
    int x, y, result;
    cin>>x>>y;
    result = x*y;
    cout<<result<<endl;

    return 0;
}

// Problem - In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. For eg. "Python Beginner - Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for N languages, what will be the total number of courses in this section?
// Input Format
// The only line of input will contain a single integer N, denoting the number of languages for which there are courses.

#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    x*=2;
    cout<<x<<endl;

    return 0;
}

// Problem - In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors?If Chef is prone to errors print YES, otherwise print NO.
// Input Format
// The only line of input contains two space separated integers X and Y — the threshold limit and the rate at which Chef is currently working at.

#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if(y>x){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    return 0;
}

// Problem - Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.
// Input Format
// The first and only line of input contains two space-separated integers ,X,Y — the marks of Alice and Bob respectively.

#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if(x>=(2*y)){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }

    return 0;
}

// Problem - Chef defines a pair of positive integers (a,b) to be a Oneful Pair, if a+b+(a⋅b)=111
// Given two positive integers a and b, output Yes if they are a Oneful Pair. And No otherwise.
// Input Format
// The only line of input contains two space-separated integers a and b.

#include<iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if((x+y+(x*y))==111){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }

    return 0;
}

// Problem - Your task is very simple: given two integers A and B, write a program to add these two numbers and output the sum.
// Input Format
// The first line contains an integer T, the total number of test cases.
// Then follow T lines, each line contains two integers, A and B.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,sum;
        cin>>a>>b;
        sum=a+b;
        cout<<sum<<endl;
    }
	
	return 0;
}

// Problem - Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.
// They consider a turn to be good if the sum of the numbers on their dice is greater than 6. Given that in a particular turn Chef and Chefina got X and Y on their respective dice, find whether the turn was good.
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case contains two space-separated integers X and Y — the numbers Chef and Chefina got on their respective dice.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x+y)>6){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

// Problem - Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.
// Input Format
// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer X — the amount of water Chef drank today.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=2000){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }

    }
	return 0;
}

// Problem - Chef wants to appear in a competitive exam. To take the exam, there are following requirements:Minimum age limit is X (i.e. Age should be greater than or equal to X) Age should be strictly less than Y.Chef's current Age is A. Find whether he is currently eligible to take the exam or not.
// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, containing three integers ,X,Y, and A as mentioned in the statement.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if((a>=x) && (a<y)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

// Problem - According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. What is the total amount of money that Chef will have to pay?
// Input Format
// The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers X and Y, as described in the problem statement.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
	    int x,y;
	    cin>>x>>y;
	    cout<<x*y<<endl;
	}
	return 0;
}

// Problem - Chef is fond of burgers and decided to make as many burgers as possible.Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.Find the maximum number of burgers that Chef can make.
// Input Format
// The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers A and B, the number of patties and buns respectively.

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        if(A<B)
        {
            cout<<A<<endl;
        }
        else if(A>B)
        {
            cout<<B<<endl;
        }
        else if(A==B)
        {
            cout<<A<<endl;
        }
    }
	return 0;
}

// Problem - Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. Help Charlie decide who is taller.
// Input Format
// The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two integers X and Y, as described in the problem statement.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(x>y)
	    cout<<"A"<<endl;
	    else
	    cout<<"B"<<endl;
	}
	return 0;
}





