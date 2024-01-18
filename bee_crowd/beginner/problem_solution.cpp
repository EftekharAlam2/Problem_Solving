// Problem 01
#include<iostream>

using namespace std;

int main(){
    cout<<"Hello World!"<<endl;
    return 0;
}

// Problem 02 - Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.
// The input file will contain 2 integer numbers

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,X;
    cin>>A;
    cin>>B;
    X=A+B;
    cout<<"X = "<<X<<endl;
    return 0;
}

// Problem 03 - The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
// Calculate the area using the formula given in the problem description.
// The input contains a value of floating point (double precision), that is the variable R.

#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double X, n=3.14159, A;
    cin>>X;
    A=n*X*X;
    
    cout<<fixed<<setprecision(4);
    cout<<"A="<<A<<endl;
    
    return 0;
}

// Problem 04 - Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.
// The input file contains 2 integer numbers.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B, SOMA;
    cin>>A;
    cin>>B;
    SOMA=A+B;
    
    cout<<"SOMA = "<<SOMA<<endl;
 
    return 0;
}

// Problem 05 - Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
// The input file contains 2 integer numbers.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,PROD;
    cin>>A;
    cin>>B;
    PROD=A*B;
    
    cout<<"PROD = "<<PROD<<endl;
 
    return 0;
}

// Problem 06 - Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.
// The input file contains 2 floating points' values with one digit after the decimal point.

#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double A,B,MEDIA;
    cin>>setprecision(1)>>A;
    cin>>setprecision(1)>>B;
    MEDIA=((A*3.5)+(B*7.5))/(3.5+7.5);
    
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<MEDIA<<endl;
 
    return 0;
}


// Problem 07 - Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
// The input file contains 3 values of floating points (double) with one digit after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double A,B,C,MEDIA;

    cin>>setprecision(1)>>A;
    cin>>setprecision(1)>>B;
    cin>>setprecision(1)>>C;
    MEDIA=((A*2)+(B*3)+(C*5))/(2+3+5);

    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<MEDIA<<endl;
    return 0;
}


// Problem 08 - Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
// The input file contains 4 integer values.

#include<iostream>

using namespace std;

int main(){
    int A,B,C,D,DIFERENCA;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;
    DIFERENCA = (A*B)-(C*D);

    cout<<"DIFERENCA = "<<DIFERENCA<<endl;
    return 0;
}