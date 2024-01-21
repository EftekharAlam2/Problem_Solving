// Problem 01 - Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.
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

// Problem 02 - The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
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

// Problem 03 - Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.
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

// Problem 04 - Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
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

// Problem 05 - Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.
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


// Problem 06 - Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
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


// Problem 07 - Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
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

// Problem 08 - Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
// Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
// Don’t forget the space before and after the equal signal and after the U$.
// The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int number, hrsSalary;
    float workingHrs, salary;

    cin>>number;
    cin>>hrsSalary;
    cin>>setprecision(2)>>workingHrs;

    salary = hrsSalary * workingHrs;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<salary<<endl;

    return 0;
}


// Problem 09 - Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
// - Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
// - Don’t forget the blank spaces.
// The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    string firstName;
    double salary, sell, totalSalary;

    cin>>firstName;
    cin>>salary;
    cin>>sell;

    totalSalary = salary + (sell * 0.15);

    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<totalSalary<<endl;

    return 0;
}


// Problem 10 - In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
// The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a, au, b, bu;
    float pa, pb, ra, rb, total;

    cin>>a>>au>>setprecision(2)>>pa;
    cin>>b>>bu>>setprecision(2)>>pb;

    ra = au*pa;
    rb = bu*pb;
    total = ra+rb;

    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;

}

// Problem 11 - Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.
// Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)
// The input contains a value of floating point (double precision).

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double pi=3.14159, R, volume;
    cin>>R;

    volume=(4.0/3)*pi*(R*R*R);

    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;

    return 0;

}

// Problem 12 - Make a program that reads three floating point values: A, B and C. Then, calculate and show:
// a) the area of the rectangled triangle that has base A and height C.
// b) the area of the radius's circle C. (pi = 3.14159)
// c) the area of the trapezium which has A and B by base, and C by height.
// d) the area of ​​the square that has side B.
// e) the area of the rectangle that has sides A and B.
// The input file contains three double values with one digit after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double A,B,C,pi=3.14159,triangle,circle,trapezium,square,rectangle;
    cin>>setprecision(1)>>A>>setprecision(1)>>B>>setprecision(1)>>C;

    triangle=(1/2.0)*A*C;
    circle = pi*C*C;
    trapezium=(1/2.0)*(A+B)*C;
    square=B*B;
    rectangle=A*B;

    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<triangle<<endl;
    cout<<"CIRCULO: "<<circle<<endl;
    cout<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<"QUADRADO: "<<square<<endl;
    cout<<"RETANGULO: "<<rectangle<<endl;

    return 0;
}

// Problem 13 - Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
// ______
// The input file contains 3 integer values.

#include<iostream>

using namespace std;

int main(){
    int a,b,c,maior;
    cin>>a>>b>>c;

    int greatest = a;

    if (b > greatest) {
        greatest = b;
    }

    if (c > greatest) {
        greatest = c;
    }

    cout << greatest << " eh o maior" << endl;

    return 0;
}

// Problem 14 - Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
// The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int X;
    float Y,consumation;

    cin>>X;
    cin>>setprecision(1)>>Y;

    consumation=X/Y;

    cout << fixed << setprecision(3);
    cout << consumation << " km/l" << endl;

    return 0;
}

// Problem 15 - Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
// __________
// The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double x1,y1,x2,y2,distance;

    cin>>setprecision(1)>>x1>>setprecision(1)>>y1;
    cin>>setprecision(1)>>x2>>setprecision(1)>>y2;

    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout<<fixed<<setprecision(4);
    cout<<distance<<endl;

    return 0;
}

// Problem 16 - Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.
// In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, it can get away one kilometer for each 2 minutes.
// Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.
// The input file contains 1 integer value.

#include<iostream>

using namespace std;

int main(){
    int a, minutes;

    cin>>a;
    minutes = a*2;

    cout<<minutes<<" minutos"<<endl;

    return 0;
}

// Problem 17 - Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.
// The input file contains two integers. The first one is the spent time in the trip (in hours). The second one is the average speed during the trip (in Km/h).

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int time, speed, distance;
    double liters, fuel=12.0;

    cin>>time;
    cin>>speed;
    distance = time*speed;
    liters=distance/fuel;

    cout<<fixed<<setprecision(3);
    cout<<liters<<endl;

    return 0;
}

// Problem 18 - In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
// The input file contains an integer value N (0 < N < 1000000).

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n, hundred, fifty, twenty, ten, five, two, one, hundredn, fiftyn, twentyn, tenn, fiven, twon, onen;

    cin>>n;
    hundred = n/100;
    hundredn = n-(hundred*100);
    fifty = hundredn/50;
    fiftyn = hundredn-(fifty*50);
    twenty = fiftyn/20;
    twentyn = fiftyn-(twenty*20);
    ten = twentyn/10;
    tenn = twentyn-(ten*10);
    five = tenn/5;
    fiven = tenn-(five*5);
    two = fiven/2;
    twon = fiven-(two*2);
    one = twon/1;


    cout<<n<<endl;
    cout<<hundred<<" nota(s) de R$ 100,00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
    cout<<twenty<<" nota(s) de R$ 20,00"<<endl;
    cout<<ten<<" nota(s) de R$ 10,00"<<endl;
    cout<<five<<" nota(s) de R$ 5,00"<<endl;
    cout<<two<<" nota(s) de R$ 2,00"<<endl;
    cout<<one<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}

