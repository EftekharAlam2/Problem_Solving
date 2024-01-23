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