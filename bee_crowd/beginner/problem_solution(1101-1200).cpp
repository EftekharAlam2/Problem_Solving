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









