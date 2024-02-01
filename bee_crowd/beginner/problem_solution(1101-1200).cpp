// Problem 1101 - Read an undetermined number of pairs values M and N (stop when any of these values is less or equal to zero). For each pair, print the sequence from the smallest to the biggest (including both) and the sum of consecutive integers between them (including both).
// The input file contains pairs of integer values M and N. The last line of the file contains a number zero or negative, or both.

#include <iostream>

using namespace std;

int main() {
    while(true){
        int x,y;
        cin>>x>>y;
        if(x<=0 || y<=0){
            break;
        }
        else{
            if(x>y){
                swap(x,y);
            }
            int sum = 0;
            for (int i = x; i <= y; i++) {
                cout << i;
                sum += i;
                if (i < y) {
                    cout << " ";
                }
            }
            cout << " Sum=" << sum << endl;
        }
    }

    return 0;
}

// Problem 1113 - Read an undetermined number of pairs of integer values. Write a message for each pair indicating if this two numbers are in ascending or descending order.
// The input file contains several test cases. Each test case contains two integer numbers X and Y. The input will finished when X = Y.

#include <iostream>

using namespace std;

int main() {
    while(true){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"Decrescente"<<endl;
        }
        else if(x<y){
            cout<<"Crescente"<<endl;
        }
        else if(x==y){
            break;
        }
    }

    return 0;
}

// Problem 1114 - Write a program that keep reading a password until it is valid. For each wrong password read, write the message "Senha inválida". When the password is typed correctly print the message "Acesso Permitido" and finished the program. The correct password is the number 2002.
// The input file contains several tests cases. Each test case contains only an integer number.

#include <iostream>

using namespace std;

int main() {
    while(true){
        int x;
        cin>>x;
        if(x==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }

    return 0;
}

// Problem 1115 - Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system. For each point write the quadrant to which it belongs. The program finish when at least one of two coordinates is NULL (in this situation without writing any message).
// The input contains several tests cases. Each test case contains two integer numbers.

#include <iostream>

using namespace std;

int main() {
    while(true){
        int x,y;
        cin>>x>>y;
        if(x>0 && y>0){
            cout<<"primeiro"<<endl;
        }
        else if(x>0 && y<0){
            cout<<"quarto"<<endl;
        }
        else if(x<0 && y<0){
            cout<<"terceiro"<<endl;
        }
        else if(x<0 && y>0){
            cout<<"segundo"<<endl;
        }
        else if(x==0 || y==0){
            break;
        }
    }

    return 0;
}

// Problem 1116 - Write a program that read two numbers X and Y and print the result of dividing the X by Y. If it's not possible, print the message "divisao impossivel".
// The input contains an integer number N. This N is the quantity of pairs of integer numbers X and Y read (dividend and divisor).

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        float x,y;
        cin>>x>>y;
        float result=x/y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            cout<<fixed<<setprecision(1);
            cout<<result<<endl;
        }
    }

    return 0;
}

// Problem 1117 - Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. Each score must be validated separately.
// The input file contains many floating-point numbers​​, positive or negative. The program execution will be finished after the input of two valid scores.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int count=0;
    float x, y;
    while(count<2){
        float n;
        cin>>n;
        if(n<0 || n>10){
            cout<<"nota invalida"<<endl;
        }
        else{
            if(count == 0){
                x=n;
            }
            else{
                y=n;
            }
            count++;
        }
    }
    float result=(x+y)/2;
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<result<<endl;

    return 0;
}

// Problem 1118 - Write an program to read two scores of a student. Calculate and print the semester average. The program must accept only valid scores (a score must fit in the range [0.10]). Each score must be validated separately.
// The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2). 1 means a new calculation, 2 means that the execution must be finished.
// The input file contains several positive or negative floating-point (double) values​. After the input of 2 valid scores, an integer number X will be read. Your program must stop when X = 2.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int count=0;
    float sum=0.0;

    while(true){
        float n;
        cin>>n;
        if(n<0 || n>10){
            cout<<"nota invalida"<<endl;
        }
        else{
            sum+=n;
            count++;
        }

        if(count==2){
            float result = sum/2;
            cout<<fixed<<setprecision(2);
            cout<<"media = "<<result<<endl;

            int choice;
            do{
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                cin>>choice;
            } while(choice != 1 && choice != 2);

            if(choice == 2){
                break;
            }
            else{
                sum = 0.0;
                count = 0;
            }
        }
    }

    return 0;
}

// Problem 1131 - The Federação Gaúcha de Futebol invited you to write a program to present a statistical result of several GRENAIS. Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL. Write the message "Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number of goals scored by the teams in a new departure, otherwise the program must be finished, printing:
// - How many GRENAIS were part of the statistics.
// - The number of victories of Inter.
// - The number of victories of Gremio.
// - The number of Draws.
// - A message indicating the team that won the largest number of GRENAIS (or the message: "Não houve vencedor" if both team won the same quantity of GRENAIS).
// The input contains two integer values​​, corresponding to the goals scored by both teams. Then there is an integer (1 or 2), corresponding to the repetition of the algorithm.

#include <iostream>

using namespace std;

int main() {
    int grenais=0, draws=0, inter=0, gremio=0;

    while(true){
        int interG,gremioG;
        cin>>interG>>gremioG;
        grenais++;
        if(interG>gremioG){
            inter++;
        }
        else if(interG<gremioG){
            gremio++;
        }
        else{
            draws++;
        }

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        int choice;
        cin>>choice;
        if(choice != 1){
            break;
        }
    }

    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<draws<<endl;
    if(inter>gremio){
        cout<<"Inter venceu mais"<<endl;
    }
    else if(inter<gremio){
        cout<<"Gremio venceu mais"<<endl;
    }
    else{
        cout<<"Não houve vencedor"<<endl;
    }

    return 0;
}

// Problem 1132 - Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.
// The input file contains 2 integer numbers X and Y without any order.

#include <iostream>

using namespace std;

int main() {
    int x,y,sum=0;
    cin>>x;
    cin>>y;
    if(x>y){
        swap(x,y);
    }

    for(int i=x; i<=y; i++){
        if(i%13 != 0){
            sum+=i;
        }
    }
    cout<<sum<<endl;

    return 0;
}

// Problem 1133 - Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.
// The input file contains 2 any positive integers, not necessarily in ascending order.

#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin>>x;
    cin>>y;
    if(x>y){
        swap(x,y);
    }

    for(int i=x+1; i<y; i++){
        if(i%5 == 2 || i%5 == 3){
            cout<<i<<endl;
        }
    }

    return 0;
}

// Problem 1134 - A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.
// The input contains only integer and positive values.

#include <iostream>

using namespace std;

int main() {
    int alcohol=0, gasoline=0, diesel=0;
    while(true){
        int n;
        cin>>n;
        if(n==4){
            break;
        }
        else{
            switch(n){
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
            default:
                break;
            }
        }
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcohol<<endl;
    cout<<"Gasolina: "<<gasoline<<endl;
    cout<<"Diesel: "<<diesel<<endl;

    return 0;
}

// Problem 1142 - Write a program that reads an integer N. This N is the number of output lines printed by this program.
// The input file contains an integer N.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n*4; i+=4){
        cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
    }

    return 0;
}

// Problem 1143 - Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.
// The input file contains an integer N.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
    }

    return 0;
}

// Problem 1144 - Write a program that reads an integer N. N * 2 lines must be printed by this program according to the example below. For numbers with more than 6 digits, all digits must be printed (no cientific notation allowed).
// The input file contains an integer N (1 < N < 1000).

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
    }

    return 0;
}

// Problem 1145 - Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers.
// The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).

#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    for(int i=1; i<=y; i++){
        cout<<i;
        if(i%x == 0 || i==x){
            cout<<endl;
        }
        else{
            cout<<" ";
        }
    }

    return 0;
}

// Problem 1146 - Your program must read an integer X indefinited times (the program must stop when X is equal to zero). For each X print the sequence from 1 to X, with one space between each one of these numbers.
// PS: Be carefull. Don't leave any space after the last number of each line, otherwise you'll get Presentation Error.
// The input file contains many integer numbers. The last one is zero.

#include <iostream>

using namespace std;


int main() {
    while(true){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        else{
            for(int i=1; i<=n; i++){
                cout<<i;
                if(i==n){
                    cout<<endl;
                }
                else{
                    cout<<" ";
                }
            }
        }
    }

    return 0;
}

// Problem 1149 - Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive). While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line.
// The input contains only integer values, ​​can be positive or negative.

#include <iostream>

using namespace std;

int main() {
    int x,n,sum=0;
    cin>>x>>n;
    while(true){
        if(n<=0){
            cin>>n;
        }
        else{
            break;
        }
    }
    for(int i=x; i<x+n; i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}

// Problem 1150 - Write a program that reads two integers: X and Z (Z must be read as many times as necessary, until a number greater than X is read). Count how many integers must be summed in sequence (starting at and including X) so that the sum exceeds Z the minimum possible and writes this number.
// The input may have, for example, the numbers ​​21 21 15 30. In this case, the number 21 is assumed for X, The numbers 21 and 15 must be ignored because they are smaller or equal to X. The number 30 is within the specification (greater than X) and is valid. So, the final result must be 2 for this test case, because the sum (21 + 22) is bigger than 30.
// The input contains only integer values​​, one per line, which may be positive or negative. The first number is the value of X. The next line will contain Z. If Z does not meet the specification of the problem, it should be read again, as many times as necessary.

#include <iostream>

using namespace std;

int main() {
    int x,z,sum=0,count=0;
    cin>>x;
    cin>>z;
    while(z<=x){
        cin>>z;
    }
    while(sum<=z){
        sum+=x;
        x++;
        count++;
    }
    cout<<count<<endl;

    return 0;
}

// Problem 1151 - The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Thereafter, each number after the first 2 is equal to the sum of the previous two numbers. Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.
// The input file contains an integer number N (0 < N < 46).

#include <iostream>

using namespace std;

int main() {
    int n,first=0,second=1,next;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        if(i==n-1){
            cout<<next<<endl;
        } else{
            cout<<next<<" ";
        }
    }

    return 0;
}

// Problem 1153 - Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.
// The input contains an integer value N (0 < N < 13).

#include <iostream>

using namespace std;

int main() {
    int n, result;
    cin>>n;
    result=n;
    for(int i=1; i<n; i++){
        result*=n-i;
    }
    cout<<result<<endl;

    return 0;
}

// Problem 1154 - Write an algorithm to read an undeterminated number of data, each containing an individual's age. The final data, which will not enter in the calculations, contains the value of a negative age. Calculate and print the average age of this group of individuals.
// The input contains an undetermined number of integers. The input will be stop when a negative value is read.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int n, sum=0,count=0;
    while(true){
        cin>>n;
        if(n<=0){
            break;
        }
        sum+=n;
        count++;
    }
    float average=(sum+0.0)/count;
    cout<<fixed<<setprecision(2);
    cout<<average<<endl;
    
    return 0;
}

// Problem - Write an algorithm to calculate and write the value of S, S being given by:
// S = 1 + 1/2 + 1/3 + … + 1/10o
// There is no input in this problem.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    float result=0.0;
    for(int i=1; i<=100; i++){
        result+=(1.0/i);
    }
    cout<<fixed<<setprecision(2);
    cout<<result<<endl;

    return 0;
}

// Problem 1156 - Write an algorithm to calculate and write the value of S, S being given by:
// S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
// There is no input in this problem.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int upper=1, lower=1;;
    float result=1.0;
    for(int i=1; upper<39; i++){
        result+=(((upper+=2)+0.0)/(lower*=2));
    }
    cout<<fixed<<setprecision(2);
    cout<<result<<endl;

    return 0;
}

// Problem 1157 - Read an integer N and compute all its divisors.
// The input file contains an integer value.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

// Problem 1158 - Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
// for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
// for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13
// The first line of the input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x, y, count=0, sum=0;
        cin>>x>>y;
        for(int i=x; count<y; i++){
            if(i%2!=0){
                sum+=i;
                count++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

// Problem 1159 - The program must read an integer X indefinite times (stop when X=0). For each X, print the sum of five consecutive even numbers from X, including it if X is even. If the input number is 4, for example, the output must be 40, that is the result of the operation: 4+6+8+10+12. If the input number is 11, for example, the output must be 80, that is the result of 12+14+16+18+20.
// The input file contains many integer numbers. The last one is zero.

#include <iostream>

using namespace std;

int main() {
    while(true){
        int x, count=0, sum=0;
        cin>>x;
        if(x==0){
            break;
        }
        for(int i=x; count<5; i++){
            if(i%2==0){
                sum+=i;
                count++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

// Problem 1160 - Mariazinha wants to solve an interesting problem. Given the population and growing rate of 2 cities (A and B), she would like to know how many years would be necessary to the smaller city (always A) to be greater than the larger city (always B) in population. Of course, she only wants to know the result for cities that the growing rate for city A is bigger than the growing rate for city B, therefore, she separated these test cases for you. Your job is to build a program that print the time in years for each test case.
// However, in some cases the time can be so big and Mariazinha don't want to know the exact time for these cases. In this way, for these test cases, it is enough printing the message "Mais de 1 seculo", that means "More than a Century".
// The first line of the input contains a single integer T, indicating the number of test cases (1 ≤ T ≤ 3000). Each test case contains four numbers: two integers PA and PB (100 ≤ PA < 1000000, 100 ≤ PB ≤ 1000000, PA < PB) indicating respectively the population of A and B and two numbers G1 and G2 (0.1 ≤ G1 ≤ 10.0, 0.0 ≤ G2 ≤ 10.0, G2 < G1) with one digit after the decimal point each, indicating the populational growing (in percentual) for A and B respectively.

#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int pa,pb, years=0;
        float g1,g2;
        cin>>pa>>pb>>setprecision(1)>>g1>>setprecision(1)>>g2;

        while(pa<=pb){
            pa+=floor((pa*g1)/100);
            pb+=floor((pb*g2)/100);
            years++;
            if(years>100){
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if(years<=100){
            cout<<years<<" anos."<<endl;
        }
    }

    return 0;
}

// Problem 1164 - In mathematics, a perfect number is an integer for which the sum of all its own positive divisors (excluding itself) is equal to the number itself. For example the number 6 is perfect, because 1+2+3 is equal to 6. Your task is to write a program that read integer numbers and print a message informing if these numbers are perfect or are not perfect.
// The input contains several test cases. The first contains the number of test cases N (1 ≤ N ≤ 100). Each one of the following N lines contains an integer X (1 ≤ X ≤ 108), that can be or not a perfect number.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int x, sum=0, i=1;
        cin>>x;
        while(i<x){
            if(x%i==0){
                sum+=i;
            }
            i++;
        }
        if(sum==x){
            cout<<x<<" eh perfeito"<<endl;
        }
        else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }

    return 0;
}

// Problem 1165 - A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.
// The input contains several test cases. The first contains the number of test cases N (1 ≤ N ≤ 100). Each one of the following N lines contains an integer X (1 < X ≤ 107), that can be or not a prime number.

#include <iostream>
#include<cmath>

using namespace std;

bool prime(int x){
    if(x<1){
        return false;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;

        if(prime(x)){
            cout<<x<<" eh primo"<<endl;
        } else{
            cout<<x<<" nao eh primo"<<endl;
        }
    }

    return 0;
}

// Problem 1172 - Read an array X[10]. After, replace every null or negative number of X ​by 1. Print all numbers stored in the array X.
// The input contains 10 integer numbers. These numbers ​​can be positive or negative.

#include <iostream>

using namespace std;

int main() {
    int x[10];
    for(int i=0; i<10; i++){
        cin>>x[i];
        if(x[i]<=0){
            x[i]=1;
        }
    }
    for(int i=0; i<10; i++){
        cout<<"X["<<i<<"] = "<<x[i]<<endl;
    }

    return 0;
}

// Problem 1173 - Read a number and make a program which puts this number in the first position of an array N[10]. In each subsequent position, put the double of the previous position. For example, if the input number is 1, the array numbers ​​must be 1,2,4,8, and so on.
// The input contains an integer number V (V < 50).

#include <iostream>

using namespace std;

int main() {
    int n[10];
    cin>>n[0];
    for(int i=1; i<10; i++){
        n[i]=n[i-1]*2;
    }
    for(int i=0; i<10; i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}

// Problem 1174 - In this problem, your task is to read an array A[100]. At the end, print all array positions that store a number less or equal to 10 and the number stored in that position.
// The input contains 100 numbers. Each number can be integer, floating-point number, positive or negative.

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    float a[100];
    for(int i=0; i<100; i++){
        cin>>a[i];
    }
    for(int i=0; i<100; i++){
        if(a[i]<=10){
            cout<<fixed<<setprecision(1);
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }

    return 0;
}

// Problem 1175 - Write a program that reads an array N [20]. After, change the first element by the last, the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array.
// The input contains 20 integer numbers, positive or negative.

#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n[20];
    for(int i=0; i<20; i++){
        cin>>n[i];
    }
    for(int i=0; i<10; i++){
        swap(n[i], n[19-i]);
    }
    for(int i=0; i<20; i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}

// Problem 1176 - Write a program that reads a number and print the Fibonacci number corresponding to this read number. Remember that the first elements of the Fibonacci series are 0 and 1 and each next term is the sum of the two preceding it. All the Fibonacci numbers calculated in this program must fit in a unsigned 64 bits number.
// The first line of the input contains a single integer T, indicating the number of test cases. Each test case contains a single integer N (0 ≤ N ≤ 60), corresponding to the N-th term of the Fibonacci series.

#include<iostream>

using namespace std;

int main() {
    unsigned long long n[61];
    n[0]=0;
    n[1]=1;
    for(int i=2; i<61; i++){
        n[i]=n[i-1]+n[i-2];
    }
    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        int x;
        cin>>x;
        cout<<"Fib("<<x<<") = "<<n[x]<<endl;
    }

    return 0;
}

// Problem 1177 - Write a program that reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times, like as the example below.
// The input contains an integer number T (2 ≤ T ≤ 50).

#include<iostream>

using namespace std;

int main() {
    int n, j=0;;
    cin>>n;
    for(int i=0; i<=1000; i++){
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==n){
            j=0;
        }
    }

    return 0;
}

// Problem 1178 - Read a number X. Put this X at the first position of an array N [100]. In each subsequent position (1 up to 99) put half of the number inserted at the previous position, according to the example below. Print all the vector N.
// The input contains a double precision number with four decimal places.

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double n;
    cin>>setprecision(4)>>n;
    for(int i=0; i<100; i++){
        cout<<fixed<<setprecision(4);
        cout<<"N["<<i<<"] = "<<n<<endl;
        n=n/2;
    }

    return 0;
}

// Problem 1179 - In this problem you need to read 15 numbers and must put them into two different arrays: par if the number is even or impar if this number is odd. But  the size of each of the two arrrays is only 5 positions. So every time you fill one of two arrays, you must print the entire array to be able to use it again for the next numbers that are read. At the end, all remaining numbers of each one of these two arrays must be printed beggining with the odd array. Each array can be filled how many times are necessary.
// The input contains 15 integer numbers.

#include<iostream>

using namespace std;

int main() {
    int par[5], impar[5];
    int parIndex=0, imparIndex=0, n=15;
    while(n--){
        int num;
        cin>>num;
        if(num%2==0){
            par[parIndex++]=num;
            if(parIndex==5){
                for(int i=0; i<5; i++){
                    cout<<"par["<<i<<"] = "<<par[i]<<endl;
                }
                parIndex=0;
            }
        } else{
            impar[imparIndex++]=num;
            if(imparIndex==5){
                for(int i=0; i<5; i++){
                    cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
                }
                imparIndex=0;
            }
        }
    }

    for(int i=0; i<imparIndex; i++){
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(int i=0; i<parIndex; i++){
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }

    return 0;
}

// Problem 1180 - Write a program that reads a number N. This N is the size of a array X[N]. Next, read each of the numbers of X, find the smallest element of this array and its position within the array, printing this information.
// The first line of input contains one integer N (1 < N <1000), indicating the number of elements that should be read to an array X[N] of integer numbers. The second row contains each of the N values, separated by a space. Remember that no input will have repeated numbers.





