// Problem 1001 - Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.
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

// Problem 1002 - The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
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

// Problem 1003 - Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.
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

// Problem 1004 - Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
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

// Problem 1005 - Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.
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


// Problem 1006 - Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
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


// Problem 1007 - Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
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

// Problem 1008 - Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
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


// Problem 1009 - Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
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


// Problem 1010 - In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
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

// Problem 1011 - Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.
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

// Problem 1012 - Make a program that reads three floating point values: A, B and C. Then, calculate and show:
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

// Problem 1013 - Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
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

// Problem 1014 - Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
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

// Problem 1015 - Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
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

// Problem 1016 - Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.
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

// Problem 1017 - Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.
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

// Problem 1018 - In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
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

// Problem 1019 - Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
// The input file contains an integer N.

#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    int hours = N/3600;
    int minutes = (N%3600)/60;
    int seconds = (N%60);

    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}

// Problem 1020 - Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
// Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
// The input file contains 1 integer value.

#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    int years = N/365;
    int remainingDays = N % 365;
    int months = remainingDays/30;
    int days = remainingDays%30;

    cout<<years<<" ano(s)"<<endl;
    cout<<months<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    return 0;
}

// Problem 1021 - Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
// The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double amount;
    cin >> setprecision(2) >> amount;

    int notes100, notes50, notes20, notes10, notes5, notes2;
    int coins1, coins50, coins25, coins10, coins5, coins1cent;

    int amountInCents = static_cast<int>(amount*100);

    notes100 = amountInCents / 10000;
    amountInCents -= notes100 * 10000;

    notes50 = amountInCents / 5000;
    amountInCents -= notes50 * 5000;

    notes20 = amountInCents / 2000;
    amountInCents -= notes20 * 2000;

    notes10 = amountInCents / 1000;
    amountInCents -= notes10 * 1000;

    notes5 = amountInCents / 500;
    amountInCents -= notes5 * 500;

    notes2 = amountInCents / 200;
    amountInCents -= notes2 * 200;

    coins1 = amountInCents / 100;
    amountInCents -= coins1 * 100;

    coins50 = amountInCents / 50;
    amountInCents -= coins50 * 50;

    coins25 = amountInCents / 25;
    amountInCents -= coins25 * 25;

    coins10 = amountInCents / 10;
    amountInCents -= coins10 * 10;

    coins5 = amountInCents / 5;
    amountInCents -= coins5 * 5;

    coins1cent = amountInCents;

    cout << "NOTAS:" << endl;
    cout << notes100 << " nota(s) de R$ 100.00" << endl;
    cout << notes50 << " nota(s) de R$ 50.00" << endl;
    cout << notes20 << " nota(s) de R$ 20.00" << endl;
    cout << notes10 << " nota(s) de R$ 10.00" << endl;
    cout << notes5 << " nota(s) de R$ 5.00" << endl;
    cout << notes2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << coins1 << " moeda(s) de R$ 1.00" << endl;
    cout << coins50 << " moeda(s) de R$ 0.50" << endl;
    cout << coins25 << " moeda(s) de R$ 0.25" << endl;
    cout << coins10 << " moeda(s) de R$ 0.10" << endl;
    cout << coins5 << " moeda(s) de R$ 0.05" << endl;
    cout << coins1cent << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

// Problem 1035 - Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
// Four integer numbers A, B, C and D.

#include<iostream>

using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int sumAB = A+B;
    int sumCD = C+D;

    if(B>C && D>A && sumCD>sumAB && C>0 && D>0 && A%2==0){
        cout<<"Valores aceitos"<<endl;
    }
    else{
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}

// Problem 1036 - Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
// Read 3 floating-point numbers (double) A, B and C.

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double A,B,C;
    cin>>A>>B>>C;

    double delta = (B*B)-(4*A*C);
    if(A==0 || delta<0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        double R1=((-B)+sqrt(delta))/(2*A);
        double R2=((-B)-sqrt(delta))/(2*A);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;
    }

    return 0;
}

// Problem 1037 - You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".
// The symbol '(' represents greather than. For example:
// [0,25] indicates numbers between 0 and 25.0000, including both.
// (25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.
// The input file contains a floating-point number.

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    float n;
    cin>>n;

    if(n>=0&&n<=25){
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if(n>25&&n<=50){
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(n>50&&n<=75){
        cout<<"Intervalo (50,75]"<<endl;
    }
    else if(n>75&&n<=100){
        cout<<"Intervalo (75,100]"<<endl;
    }
    else{
        cout<<"Fora de intervalo"<<endl;
    }

    return 0;
}

// Problem 1038 - Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
// --------------
// The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int X,Y;
    float total;
    cin>>X>>Y;

    switch(X){
    case 1:
        total=Y*4.00;
        break;
    case 2:
        total=Y*4.50;
        break;
    case 3:
        total=Y*5.00;
        break;
    case 4:
        total=Y*2.00;
        break;
    case 5:
        total=Y*1.50;
        break;
    }

    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<total<<endl;

    return 0;
}

// Problem 1040 - Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).
// In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.
// The input contains four floating point numbers that represent the students' grades.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float n1,n2,n3,n4,n5;
    cin>>setprecision(1)>>n1>>setprecision(1)>>n2>>setprecision(1)>>n3>>setprecision(1)>>n4;

    float average=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);

    if(average>=7.0){
        cout<<fixed<<setprecision(1);
        cout<<"Media: "<<average<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    else if(average<5.0){
        cout<<fixed<<setprecision(1);
        cout<<"Media: "<<average<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    else if(average>=5.0 && average<=6.9){
        cin>>setprecision(1)>>n5;
        cout<<fixed<<setprecision(1);
        cout<<"Media: "<<average<<endl;
        cout<<"Aluno em exame."<<endl;
        cout<<"Nota do exame: "<<n5<<endl;
        float average2=(average+n5)/2;
        if(average2>=5.0){
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final: "<<average2<<endl;
        }
        else if(average2<=4.9){
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<average2<<endl;
        }
    }

    return 0;
}

// Problem 1041 - Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).
// If the point is at the origin, write the message "Origem".
// If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".
// The input contains the coordinates of a point.

#include<iostream>

using namespace std;

int main(){
    float x,y;
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"Origem"<<endl;
    }
    else if(x==0){
        cout<<"Eixo Y"<<endl;
    }
    else if(y==0){
        cout<<"Eixo X"<<endl;
    }
    else if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"Q4"<<endl;
    }

    return 0;
}

// Problem 1042 - Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.
// The input contains three integer numbers.

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;

    int arr[]={a,b,c};
    sort(arr, arr+3);
    for(int i=0; i<3; ++i){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}

// Problem 1043 - Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:
// Perimetro = XX.X
// If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:
// Area = XX.X
// The input file has tree floating point numbers.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;

    if((a+b)>c && (a+c)>b && (c+b)>a){
        float p = a+b+c;
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<p<<endl;
    }
    else{
        float area = 0.5*(a+b)*c;
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<area<<endl;
    }

    return 0;
}

// Problem 1044 - Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.
// The input has two integer numbers.

#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if(a%b==0 || b%a==0){
        cout<<"Sao Multiplos"<<endl;
    } else{
        cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;
}

// Problem 1045 - Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
// if A ≥ B + C, write the message: NAO FORMA TRIANGULO
// if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
// if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
// if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
// if the three sides are the same size, write the message: TRIANGULO EQUILATERO
// if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
// The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    double x,y,z;
    cin>>x>>y>>z;
    double arr[]={x,y,z};
    sort(arr, arr+3, greater<float>());
    double a=arr[0];
    double b=arr[1];
    double c=arr[2];

    if(a>=(b+c)){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
        if((a*a)==((b*b)+(c*c))){
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if((a*a)>((b*b)+(c*c))){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if((a*a)<((b*b)+(c*c))){
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if((a==b) && (b==c)){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if(!((a==b)&&(b==c)) && ((a==b)||(a==c)||(b==c))){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }

    return 0;
}

// Problem 1046 - Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”
// Two integer numbers representing the start and end time of a game.

#include<iostream>

using namespace std;

int main(){
    int start, end;
    cin>>start>>end;

    int duration = (end<=start) ? (24-start+end) : (end-start);
    cout<<"O JOGO DUROU "<<duration<<" HORA(S)"<<endl;

    return 0;
}

// Problem 1047 - Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,
// Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.
// Four integer numbers representing the start and end time of the game.

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int start, end, startm, endm, durationh,durationm,totaldurationm;
    cin>>start>>startm>>end>>endm;

    int totalstartm = (start*60) + startm;
    int totalendm = (end*60) + endm;

    if(totalstartm>=totalendm){
        totaldurationm=24*60 - totalstartm+totalendm;
    }
    else{
        totaldurationm=totalendm-totalstartm;
    }

    durationh=totaldurationm/60;
    durationm=totaldurationm%60;

    cout<<"O JOGO DUROU "<<durationh<<" HORA(S) E "<<durationm<<" MINUTO(S)"<<endl;

    return 0;
}

// Problem 1048 - The company ABC decided to give a salary increase to its employees, according to the following table:
// Salary	Readjustment Rate
// 0 - 400.00
// 400.01 - 800.00
// 800.01 - 1200.00
// 1200.01 - 2000.00
// Above 2000.00

// 15%
// 12%
// 10%
// 7%
// 4%

// Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
// The input contains only a floating-point number, with 2 digits after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float salary, increment, totalSalary;
    int percentage;
    cin>>setprecision(2)>>salary;

    if(salary>=0 && salary<=400.00){
        increment = salary*0.15;
        totalSalary = salary+increment;
        percentage=15;
    }
    else if(salary>=400.01 && salary<=800.00){
        increment = salary*0.12;
        totalSalary = salary+increment;
        percentage=12;
    }
    else if(salary>=800.01 && salary<=1200.00){
        increment = salary*0.10;
        totalSalary = salary+increment;
        percentage=10;
    }
    else if(salary>=1200.01 && salary<=2000.00){
        increment = salary*0.07;
        totalSalary = salary+increment;
        percentage=7;
    }
    else if(salary>2000.00){
        increment = salary*0.04;
        totalSalary = salary+increment;
        percentage=4;
    }

    cout<<fixed<<setprecision(2);
    cout<<"Novo salario: "<<totalSalary<<endl;
    cout<<"Reajuste ganho: "<<increment<<endl;
    cout<<"Em percentual: "<<percentage<<" %"<<endl;

    return 0;
}

// Problem 1049 - In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.
// --------
// The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

#include<iostream>
#include<string>

using namespace std;

int main(){
    string w1,w2,w3;
    cin>>w1;
    cin>>w2;
    cin>>w3;

    if(w1=="vertebrado"){
        if(w2=="ave"){
            if(w3=="carnivoro"){
                cout<<"aguia"<<endl;
            }
            else if(w3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }
        else if(w2=="mamifero"){
            if(w3=="onivoro"){
                cout<<"homem"<<endl;
            }
            else if(w3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }
    else if(w1=="invertebrado"){
        if(w2=="inseto"){
            if(w3=="hematofago"){
                cout<<"pulga"<<endl;
            }
            else if(w3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }
        else if(w2=="anelideo"){
            if(w3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }
            else if(w3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }

    return 0;
}

// Problem 1050 - Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:
// -------------
// If the input number isn’t found in the above table, the output must be:
// DDD nao cadastrado
// That means “DDD not found” in Portuguese language.
// The input consists in a unique integer number.

#include<iostream>

using namespace std;

int main(){
    int number;
    cin>>number;

    if(number==61){
        cout<<"Brasilia"<<endl;
    }
    else if(number==71){
        cout<<"Salvador"<<endl;
    }
    else if(number==11){
        cout<<"Sao Paulo"<<endl;
    }
    else if(number==21){
        cout<<"Rio de Janeiro"<<endl;
    }
    else if(number==32){
        cout<<"Juiz de Fora"<<endl;
    }
    else if(number==19){
        cout<<"Campinas"<<endl;
    }
    else if(number==27){
        cout<<"Vitoria"<<endl;
    }
    else if(number==31){
        cout<<"Belo Horizonte"<<endl;
    }
    else{
        cout<<"DDD nao cadastrado"<<endl;
    }

    return 0;
}

// Problem 1051 - In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.
// Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.
// ------------
// Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.
// The input contains only a float-point number, with 2 digits after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float n, bonus, value;
    cin>>setprecision(2)>>n;

    if(n<2000.00){
        cout<<"Isento"<<endl;
    }
    else{
        if(n>3000.00){
            if(n>4500.00){
                value = n-4500.00;
                bonus = (value*0.28)+350;
            }
            else{
                value = n-3000.00;
                bonus = (value*0.18)+80;
            }
        }
        else{
            value = n-2000.00;
            bonus = value*0.08;
        }
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<bonus<<endl;
    }

    return 0;
}

// Problem 1052 - Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in english, with the first letter in uppercase.
// The input contains only an integer number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    switch(n){
    case 1:
        cout<<"January"<<endl;
        break;
    case 2:
        cout<<"February"<<endl;
        break;
    case 3:
        cout<<"March"<<endl;
        break;
    case 4:
        cout<<"April"<<endl;
        break;
    case 5:
        cout<<"May"<<endl;
        break;
    case 6:
        cout<<"June"<<endl;
        break;
    case 7:
        cout<<"July"<<endl;
        break;
    case 8:
        cout<<"August"<<endl;
        break;
    case 9:
        cout<<"September"<<endl;
        break;
    case 10:
        cout<<"October"<<endl;
        break;
    case 11:
        cout<<"November"<<endl;
        break;
    case 12:
        cout<<"December"<<endl;
        break;
    }

    return 0;
}

// Problem 1059 - Write a program that prints all even numbers between 1 and 100, including them if it is the case.
// In this extremely simple problem there is no input.

#include<iostream>

using namespace std;

int main(){
    for(int i=1; i<101; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

    return 0;
}

// Problem 1060 - Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.
// Six numbers, positive and/or negative.

#include<iostream>

using namespace std;

int main(){
    int count=0;

    for(int i=0; i<6; i++){
        float number;
        cin>>number;
        if(number>0){
            count++;
        }
    }

    cout<<count<<" valores positivos"<<endl;

    return 0;
}

// Problem 1061 - Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.
// You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.
// The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.

#include<iostream>
#include<string>

using namespace std;

int main(){
    int startday, endday;
    int startHours, startMinutes, startSeconds, endHours, endMinutes, endSeconds, durationInSeconds;
    cin.ignore(4);
    cin >> startday;
    cin.ignore(1); 

    cin >> startHours;
    cin.ignore(3);
    cin >> startMinutes;
    cin.ignore(3);
    cin >> startSeconds;
    cin.ignore(1); 

    cin.ignore(4);
    cin >> endday;
    cin.ignore(1); 

    cin >> endHours;
    cin.ignore(3);
    cin >> endMinutes;
    cin.ignore(3);
    cin >> endSeconds;
    cin.ignore(1);

    int startDurationInSeconds = startSeconds + (startMinutes*60) + (startHours*3600);
    int endDurationInSeconds = endSeconds + (endMinutes*60) + (endHours*3600);
    
    if(endday==startday){
        durationInSeconds = endDurationInSeconds - startDurationInSeconds;
    }
    else{
        durationInSeconds = (86400*(endday-startday)) + endDurationInSeconds - startDurationInSeconds;
    }

    int days = durationInSeconds/86400;
    durationInSeconds %= 86400;
    int hours = durationInSeconds/3600;
    durationInSeconds %= 3600;
    int minutes = durationInSeconds/60;
    int seconds = durationInSeconds%60;

    cout<<days<<" dia(s)"<<endl;
    cout<<hours<<" hora(s)"<<endl;
    cout<<minutes<<" minuto(s)"<<endl;
    cout<<seconds<<" segundo(s)"<<endl;

    return 0;
}

// Problem 1064 - Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.
// The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n=0;
    float values;
    double total=0;

    for(int i=0; i<6; i++){
        cin>>values;
        if(values>0){
            n++;
            total+=values;
        }
    }

    double average = total/n;
    cout<<n<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<average<<endl;

    return 0;
}

// Problem 1065 - Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.
// The input will be 5 integer values.

#include<iostream>

using namespace std;

int main(){
    int n=0, values;

    for(int i=0; i<5; i++){
        cin>>values;
        if(values%2 == 0){
            n++;
        }
    }

    cout<<n<<" valores pares"<<endl;

    return 0;
}

// Problem 1066 - Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.
// The input will be 5 integer values.

#include<iostream>

using namespace std;

int main(){
    int even=0, odd=0, negative=0, positive=0, values;

    for(int i=0; i<5; i++){
        cin>>values;
        if(values>0){
            positive++;
        }
        if(values<0){
            negative++;
        }
        if(values%2 == 0){
            even++;
        }
        if(values%2 != 0){
            odd++;
        }
    }

    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<positive<<" valor(es) positivo(s)"<<endl;
    cout<<negative<<" valor(es) negativo(s)"<<endl;

    return 0;
}

// Problem 1067 - Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.
// The input will be an integer value.

#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
        if(i%2 != 0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}

// Problem 1070 - Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.
// The input will be a positive integer value.

#include<iostream>

using namespace std;

int main(){
    int x, j=1;
    cin>>x;
    for(int i=x; j<7; i++){
        if(i%2 != 0){
            cout<<i<<endl;
            i++;
            j++;
        }
    }
    
    return 0;
}

// Problem 1071 - Read two integer values X and Y. Print the sum of all odd values between them.
// The input file contain two integer values.

#include<iostream>

using namespace std;

int main(){
    int x,y,sum=0;
    cin>>x;
    cin>>y;
    
    if(x>y){
        swap(x,y);
    }
    for(int i=x+1; i<y; i++){
        if(i%2 != 0){
            sum += i;
        }
    }

    cout<<sum<<endl;

    return 0;
}

// Problem 1072 - Read an integer N. This N will be the number of integer numbers X that will be read.
// Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
// The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
// Each case is an integer number X (-107 < X < 107).

#include<iostream>

using namespace std;

int main(){
    int x, n, in=0, out=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        if(x>=10 && x<=20){
            in++;
        }
        else{
            out++;
        }
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}

// Problem 1073 - Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.
// The input contains an integer N (5 < N < 2000).

#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
        if(i%2 == 0){
            int output = i*i;
            cout<<i<<"^2 = "<<output<<endl;
        }
    }

    return 0;
}

// Problem 1074 - Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.
// The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107).

#include<iostream>

using namespace std;

int main(){
    int x, n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%2 == 0){
            if(x>0){
                cout<<"EVEN POSITIVE"<<endl;
            }
            if(x<0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
        }
        if(x%2 != 0){
            if(x>0){
                cout<<"ODD POSITIVE"<<endl;
            }
            if(x<0){
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
        if(x == 0){
            cout<<"NULL"<<endl;
        }
    }

    return 0;
}

// Problem 1075 - Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
// The input is an integer N (N < 10000)

#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=10000; i++){
        if(i%x == 2){
            cout<<i<<endl;
        }
    }

    return 0;
}

// Problem 1078 - Read an integer N (2 < N < 1000). Print the multiplication table of N.
// 1 x N = N      2 x N = 2N        ...       10 x N = 10N  
// The input is an integer N (1 < N < 1000).

#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=10; i++){
        int output = i*x;
        cout<<i<<" x "<<x<<" = "<<output<<endl;
    }

    return 0;
}

// Problem 1079 - Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.
// The input file contains an integer number N in the first line. Each N following line is a test case with three float-point numbers, each one with one digit after the decimal point.

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    float x,y,z;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>setprecision(1)>>x>>setprecision(1)>>y>>setprecision(1)>>z;
        float output = ((x*2)+(y*3)+(z*5))/(2+3+5);
        cout<<fixed<<setprecision(1);
        cout<<output<<endl;
    }

    return 0;
}

// Problem 1080 - Read 100 integer numbers. Print the highest read value and the input position.
// The input file contains 100 distinct positive integer numbers.

#include<iostream>

using namespace std;

int main(){
    int x, highest=0, position;
    for(int i=1; i<=100; i++){
        cin>>x;
        if(x>highest){
            highest=x;
            position=i;
        }
    }

    cout<<highest<<endl;
    cout<<position<<endl;

    return 0;
}

// Problem 1094 - Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.
// This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.
// The first line of input contains an integer N indicating the number of test cases that follows. Each test case contains an integer Amount (1 ≤ Amount ≤ 15) which represents the amount of animal used and a character Type ('C', 'R' or 'S'), indicating the type of animal:
// - C: Coelho (rabbit in portuguese)
// - R: Rato (rat  in portuguese)
// - S: Sapo (frog in portuguese)

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n, count, totalAnimals=0, totalRabbit=0, totalRat=0, totalFrog=0;
    char type;
    float rabbitP, ratP, frogP;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>count>>type;
        totalAnimals+=count;
        switch(type){
            case 'C':
                totalRabbit+=count;
                break;
            case 'R':
                totalRat+=count;
                break;
            case 'S':
                totalFrog+=count;
                break;
        }
    }
    rabbitP = (static_cast<float>(totalRabbit)/totalAnimals)*100;
    ratP = (static_cast<float>(totalRat)/totalAnimals)*100;
    frogP = (static_cast<float>(totalFrog)/totalAnimals)*100;

    cout<<"Total: "<<totalAnimals<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<totalRabbit<<endl;
    cout<<"Total de ratos: "<<totalRat<<endl;
    cout<<"Total de sapos: "<<totalFrog<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<rabbitP<<" %"<<endl;
    cout<<"Percentual de ratos: "<<ratP<<" %"<<endl;
    cout<<"Percentual de sapos: "<<frogP<<" %"<<endl;

    return 0;
}

// Problem 1095 - Make a program that prints the sequence like the following example.
// This problem doesn't have input.

#include<iostream>

using namespace std;

int main(){
    int i=1, j=60;
    for(int a=0; j>=0; a++){
        cout<<"I="<<i<<" J="<<j<<endl;
        i+=3;
        j-=5;
    }

    return 0;
}

// Problem 1096 - Make a program that prints the sequence like the following exemple.
// This problem doesn't have input.

#include<iostream>

using namespace std;

int main(){
    for(int i=1; i<=9; i+=2){
        for(int j=7; j>=5; j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
    }

    return 0;
}

// Problem 1097 - Make a program that prints the sequence like the following exemple.
// This problem doesn't have input.

#include<iostream>

using namespace std;

int main(){
    for(int i=1; i<=9; i+=2){
        if(i==1){
            for(int j=7; j>=5; j--){
                cout<<"I="<<i<<" J="<<j<<endl;
            }
        }
        if(i==3){
            for(int j=9; j>=7; j--){
                cout<<"I="<<i<<" J="<<j<<endl;
            }
        }
        if(i==5){
            for(int j=11; j>=9; j--){
                cout<<"I="<<i<<" J="<<j<<endl;
            }
        }
        if(i==7){
            for(int j=13; j>=11; j--){
                cout<<"I="<<i<<" J="<<j<<endl;
            }
        }
        if(i==9){
            for(int j=15; j>=13; j--){
                cout<<"I="<<i<<" J="<<j<<endl;
            }
        }
    }

    return 0;
}

// Problem 1098 - Make a program that prints the sequence like the following example.
// This problem doesn't have input.

#include <iostream>

using namespace std;

int main() {
    for(int i=0; i<=20; i+=2){
        float fi=i/10.0;

        for(int j=1; j<=3; j++){
            cout << "I=" << fi << " J=" << (j + fi) << endl;
        }
    }

    return 0;
}

// Problem 1099 - Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y. Print the sum of all odd values between them, not including X and Y.
// The first line of input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        int sum=0;
        if(x>y){
            swap(x,y);
        }
        for(int j=x+1; j<y; j++){
            if(j%2 != 0){
                sum+=j;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}